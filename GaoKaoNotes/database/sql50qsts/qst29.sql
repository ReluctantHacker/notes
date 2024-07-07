/*查詢各科成績前三名的記錄:(不考慮成績並列情況)*/

select sc1.cno, sc1.sno, sc1.score from sc as sc1
left join sc as sc2
on sc2.cno=sc1.cno
where sc1.score<=sc2.score
group by sc1.cno, sc1.sno, sc1.score
having count(sc1.score) <= 3
order by sc1.cno asc, sc1.score desc;


/* provided answer*/
SELECT *
FROM sc x
WHERE (SELECT COUNT(*) FROM sc y WHERE x.cno = y.cno AND x.score < y.score)<3 
ORDER BY cno,score DESC

