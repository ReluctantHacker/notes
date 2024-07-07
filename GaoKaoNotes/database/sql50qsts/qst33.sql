/*查詢同名同姓學生名單,並統計同名人數*/
/*解1*/
select s_1.sname, count(s_1.sno) as '同名人數'
from student as s_1
where 
(select count(*) from student as s_2 
where s_2.sname=s_1.sname) > 1
group by s_1.sname;

/*解2*/
SELECT sname,COUNT(*)
FROM student x 
GROUP BY sname
HAVING COUNT(*)>1;