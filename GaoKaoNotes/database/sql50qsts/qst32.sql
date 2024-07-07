/*查詢男生.女生人數*/
/*第一次遇到此題時的解法*/
select count(student_f.sno) as '女生人數', count(student_m.sno) as '男生人數' from student as s
left join  
(select * from student where ssex='女') as student_f
on student_f.sno=s.sno
left join
(select * from student where ssex='男') as student_m
on student_m.sno=s.sno;

/*第二次遇到此題的解法*/
select sum(case when s.ssex='男' then 1 else 0 end) as "男生人數",
sum(case when s.ssex='女' then 1 else 0 end) as "女生人數"
from student as s;


/*直接方法*/
select ssex, count(*) from student group by ssex;