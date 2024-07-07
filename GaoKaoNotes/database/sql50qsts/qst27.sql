/*
UserTable: userid(使用者ID), username(姓名), deptid(部門ID)
DeptTable: deptid(部門ID), deptname(部門名), leaderid(主管id, 對應到 userid)
請使用SQL語法 取得 userid 為 005 的 員工姓名,部門名,主管姓名
*/

/* 查詢每個課程的老師及平均分從高到低顯示 老師名稱,課程名稱,平均分數 */
/*
select c.cname as '課程名稱', avg(sc_1.score) as '平均分數' from sc as sc_1
left join course as c
on c.cno=sc_1.cno
left join teacher as t
on t.tno=c.tno
group by c.cno
order by avg(sc_1.score) desc;
*/


/*查詢所有同學的學號.姓名.選課數.總成績*/
/*
select s.sname as '姓名', count(sc_1.cno) as '選課數', sum(sc_1.score) as '總成績'
from sc as sc_1
left join student as s
on s.sno=sc_1.sno
group by sc_1.sno;
*/

select  c.cname as '課程名稱', avg(sc_1.score) as '平均分數' 
from sc as sc_1
left join course as c
on c.cno=sc_1.cno
group by c.cname;

