/*查詢每個課程的男生女生總數*/
/*直接作法*/
select sc_1.cno, s.ssex as '性別', count(*) as '人數' from sc as sc_1
left join student as s
on s.sno=sc_1.sno
group by s.ssex, sc_1.cno 
order by s.ssex, sc_1.cno;

/*第二次遇到此題的解法*/
select sc.cno,
sum(case when s.ssex='男' then 1 else 0 end) as '男生人數',
sum(case when s.ssex='女' then 1 else 0 end) as '女生人數'
from sc as sc 
left join student as s
on s.sno=sc.sno
group by sc.cno;


/*進階作法*/
select sc_1.cno as 'cno', 
count(student_f.sno) as '女生人數', 
count(student_m.sno) as '男生人數'
from sc as sc_1
left join 
(select * from student where ssex='女') as student_f
on student_f.sno=sc_1.sno
left join
(select * from student where ssex='男') as student_m
on student_m.sno=sc_1.sno
group by sc_1.cno;