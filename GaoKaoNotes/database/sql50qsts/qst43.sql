/*所有課程排名成績(考慮並列) 學號,排名,成績,課程號 照課程,排名排序*/
/*reference:
https://www.1keydata.com/tw/sql/sql-rank.html
https://www.zhihu.com/question/30902403
https://www.zhihu.com/question/36014627
*/
/*以下是ranking(間斷排名)的作法*/
select sc_1.cno as '課程號',
sc_1.sno as '學號',
count(*) as '排名',
sc_1.score as '成績'
from sc as sc_1
left join sc as sc_2
on sc_2.cno=sc_1.cno
where sc_2.score>sc_1.score or (sc_2.score=sc_1.score and sc_2.sno=sc_1.sno)
group by sc_1.cno, sc_1.sno
order by sc_1.cno, sc_1.score desc;

/*以下是dense ranking(密集排名)的作法*/
select sc_1.cno as '課程號',
sc_1.sno as '學號',
count(*) as '排名',
sc_1.score as '成績'
from sc as sc_1
left join 
(select distinct cno, score from sc)
as sc_2
on sc_2.cno=sc_1.cno
where sc_2.score>=sc_1.score
group by sc_1.cno, sc_1.sno
order by sc_1.cno, sc_1.score desc;

/*以下是dense ranking(密集排名)的作法2*/
SELECT sc.sno,
CASE WHEN @pre_parent_code=sc.cno 
THEN (CASE WHEN @prefontscore=sc.score THEN @curRank WHEN @prefontscore:=sc.score THEN @curRank:=@curRank+1 END)
WHEN  @prefontscore:=sc.score THEN  @curRank:=1 END AS rank_num ,sc.score,@pre_parent_code:=sc.cno AS cno
FROM (SELECT @curRank:=0,@pre_parent_code:='',@prefontscore:=NULL) r,sc
ORDER BY sc.cno,sc.score DESC;
