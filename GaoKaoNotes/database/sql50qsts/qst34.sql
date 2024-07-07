/*查詢年紀最小跟最大的學生名單(注:Student 表中Sage 列的型別是int)*/

select * from student where 
sage=(select min(sage) from student) or
sage=(select max(sage) from student);


/* provided answer*/
SELECT *
FROM student
WHERE sno IN(SELECT sno FROM student x WHERE (SELECT COUNT(*) FROM student y WHERE x.sage > y.sage)<1)
OR sno IN(SELECT sno FROM student x WHERE (SELECT COUNT(*) FROM student y WHERE x.sage < y.sage)<1)