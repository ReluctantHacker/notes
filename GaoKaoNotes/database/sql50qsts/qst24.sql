/*查詢跟學號為”s005″所修課程完全一樣的同學的學號和姓名*/

select s.sno, s.sname from sc as sc1
left join student as s
on s.sno=sc1.sno
where sc1.cno in 
(select cno from sc where sno='s005') and s.sno<>'s005'
group by sc1.sno, s.sname
having count(*) = 
(select count(*) from sc where sno='s005')
and count(*) = 
(select count(*) from sc as sc2 where sc2.sno=sc1.sno);

/*another way by using "with as" method i came up with in 2024/6/24*/
with s005_study as (
select cno from sc
where sno='s005'
) select sc.sno, student.sname from sc
left join student
on student.sno=sc.sno
where sc.sno<>'s005'
group by sc.sno, student.sname
having sum(case when cno in (select cno from s005_study) then 1 else 0 end) 
= sum(1);


/*provided answer:*/
SELECT sno,sname
FROM sc x LEFT JOIN student USING(sno)
WHERE cno IN(SELECT cno FROM sc WHERE sno = 's005')
GROUP BY sno
HAVING COUNT(cno)=(SELECT COUNT(*) FROM sc WHERE sno = 's005') 
AND (SELECT COUNT(*) FROM sc WHERE sno = 's005') = ALL(SELECT COUNT(cno) FROM sc y WHERE x.sno=y.sno ) 
AND sno <> 's005';

SELECT sno,sname
FROM sc LEFT JOIN student USING(sno)
GROUP BY sno
HAVING GROUP_CONCAT(cno ORDER BY cno) =(SELECT GROUP_CONCAT(cno ORDER BY cno)FROM sc WHERE sno='s005')
AND sno <> 's005';


