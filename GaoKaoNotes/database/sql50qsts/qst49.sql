/*查詢所有學生的平均成績 並排名 , 學號,學生名,排名,平均成績(考慮並列) 
對平均成績高到低及學號低到高排序*/

/*考慮並列-間段排序*/
select sc_1.sno, sc_1.avg_sc,  
count(*) as 'rank_num'
from 
(
select sno as 'sno',
avg(score) as 'avg_sc'
from sc
group by sno
) as sc_1
left join 
(
select sno as 'sno',
avg(score) as 'avg_sc'
from sc
group by sno
) as sc_2
on sc_2.avg_sc>=sc_1.avg_sc or (sc_2.avg_sc=sc_1.avg_sc and
sc_2.sno=sc_1.sno)
group by sc_1.sno, sc_1.avg_sc
order by sc_1.avg_sc desc;





/*考慮並列-密集排序*/
select sc_1.sno, sc_1.avg_sc,  
count(*) as 'rank_num'
from 
(
select sno as 'sno',
avg(score) as 'avg_sc'
from sc
group by sno
) as sc_1
left join 
(
select distinct
avg(score) as 'avg_sc'
from sc
group by sno
) as sc_2
on sc_2.avg_sc>=sc_1.avg_sc 
group by sc_1.sno, sc_1.avg_sc
order by sc_1.avg_sc desc;




/*不考慮並列*/
select sc_1.sno as '學號',
avg(sc_1.score) as '成績',
row_number() over (order by avg(sc_1.score) desc) as rank_num
from sc as sc_1
group by sc_1.sno; 


/*使用with as 的辦法*/
with studentAvg as 
(
select 1 as temp_col, s.sno, s.sname, 
avg(sc.score) as avg_score
from sc as sc
left join student as s
on s.sno=sc.sno
group by s.sno, temp_col, s.sname 
)
select sa1.sno, sa1.sname, sa1.avg_score, count(*) as 'rank' from
studentAvg as sa1
left join studentAvg as sa2
on sa1.temp_col=sa2.temp_col
where sa1.avg_score<sa2.avg_score or 
(sa1.avg_score=sa2.avg_score and
sa1.sno = sa2.sno)
group by  sa1.sno, sa1.sname, sa1.avg_score
order by sa1.avg_score desc;
