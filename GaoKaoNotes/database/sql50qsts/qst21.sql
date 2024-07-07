/*查詢所有課程成績小於60 分的同學的學號.姓名*/
select s.sno, s.sname from sc as sc1
left join student as s
on s.sno=sc1.sno
where sc1.score<60 
group by sc1.sno, s.sname
having count(*)  = (select count(*) from sc as sc2 where sc2.sno=sc1.sno);

/* the answer provided */
SELECT DISTINCT sno
FROM sc x
WHERE 60 > ALL(SELECT score FROM sc y WHERE x.sno=y.sno)