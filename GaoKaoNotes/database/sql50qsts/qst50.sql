/*查詢課程有學生的成績是其他人成績兩倍的學號 學生名*/

select distinct sc_1.sno as 'sc_1.sno', sc_2.sno as 'sc_2.sno' from sc as sc_1
left join sc as sc_2
on sc_1.score>2*sc_2.score and sc_1.cno=sc_2.cno;

/*第二次遇到此題的答案*/

select s.sno, s.sname from sc as sc1
left join student as s
on s.sno=sc1.sno
left join sc as sc2
on sc2.cno=sc1.cno
where sc1.score > 2*sc2.score; 



