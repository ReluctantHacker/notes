/*查詢上過所有老師教的課程的學生 學號,學生名*/

select sc_1.sno, s.sname, group_concat(distinct c.tno), count(*) from sc as sc_1
left join course as c
on c.cno=sc_1.cno
left join student as s
on s.sno=sc_1.sno
group by sc_1.sno
having group_concat(distinct c.tno) = (select group_concat(tno) from teacher) ;



/*第二次遇到此題想到的答案*/
select temp_sc.sno, temp_sc.sname from 
(
/*各個學生上過的所有老師*/
select distinct s.sno, s.sname, t.tno from sc as sc
left join student as s
on s.sno=sc.sno
left join course as c
on c.cno=sc.cno
left join teacher as t
on t.tno=c.tno
) as temp_sc
group by temp_sc.sno, temp_sc.sname
/*判斷各個學生上過的所有老師數量, 是否等於所有教師的數量*/
having count(*) = 
(
select count(*) from teacher
);
