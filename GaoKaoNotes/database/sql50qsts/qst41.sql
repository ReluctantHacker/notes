/*查詢不同課程成績有相同的學生的學號.課程號.學生成績*/
/*解法1*/
select sc_1.sno as '學號', 
sc_1.cno as '課程號',
sc_1.score as '學生成績'
from sc as sc_1
where 
(select count(*) from sc as sc_2 where
	sc_2.sno=sc_1.sno and 
    sc_2.score=sc_1.score) > 1;

/*解法2*/
SELECT DISTINCT x.sno,x.cno,x.score
FROM sc x,sc y
WHERE x.sno=y.sno AND x.cno <> y.cno AND x.score=y.score;

/*解法3*/
select distinct sc_1.sno as 'student_no', 
sc_1.cno as 'course no', 
sc_1.score as 'score'
from sc as sc_1
left join sc as sc_2
on sc_2.sno=sc_1.sno 
where sc_2.cno<>sc_1.cno and sc_2.score=sc_1.score;
