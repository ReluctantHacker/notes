/*所有課程排名成績(不考慮並列) 學號,課程號,排名,成績 照課程,排名排序*/
/*答1, 沒有考慮題目的並列問題(錯的答案, 但有點意思)*/
select sc_1.sno as '學號', 
sc_1.cno as '課程號', 
count(*) as '排名',
sc_1.score as '成績' 
from sc as sc_1 
left join sc as sc_2
on sc_2.cno=sc_1.cno
where sc_1.score<=sc_2.score
group by sc_1.sno, sc_1.cno
order by sc_1.cno, sc_1.score desc;

/*答2*/
select sc_1.sno as '學號', 
sc_1.cno as '課程號', 
row_number() over (partition by sc_1.cno order by score desc) as '排名',
sc_1.score as '成績' 
from sc as sc_1 ;

/*答3*/
SELECT sc.sno,sc.cno,
CASE WHEN @pre_parent_code=sc.cno THEN @curRank:=@curRank+1 
WHEN @pre_parent_code:=sc.cno THEN  @curRank:=1 
ELSE @curRank:=1
END AS rank_num,sc.score
FROM (select @curRank:=0,@pre_parent_code:='') r,sc
ORDER BY sc.cno,sc.score DESC;
