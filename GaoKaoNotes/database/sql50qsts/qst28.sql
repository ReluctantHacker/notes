/*統計列印各科成績,各分數段人數:課程ID,課程名稱,
verygood[100-86],good[85-71],bad[<60]*/

select c.cno as '課程ID', 
c.cname as '課程名稱',
sum(case when sc.score>=86 then 1 else 0 end) as 'verygood[100-86]',
sum(case when sc.score<=85 and sc.score>=71 then 1 else 0 end) as 'good[85-71]',
sum(case when sc.score<60 then 1 else 0 end) as 'bad[<60]'
from sc as sc
left join course as c
on c.cno=sc.cno
group by c.cno, c.cname;



/* provided answer*/
SELECT cno,cname,COALESCE(verygoodc,0)verygood, COALESCE(goodc,0)good, COALESCE(badc,0)bad
FROM sc LEFT JOIN (SELECT cno,COUNT(*) verygoodc FROM sc WHERE score BETWEEN 86 AND 100 GROUP BY cno)AS verygoodsc USING(cno)
LEFT JOIN (SELECT cno,COUNT(*) goodc FROM sc WHERE score BETWEEN 71 AND 85 GROUP BY cno)AS goodsc USING(cno)
LEFT JOIN (SELECT cno,COUNT(*) badc FROM sc WHERE score < 60 GROUP BY cno)AS badsc USING(cno)
LEFT JOIN course USING(cno)
GROUP BY cno, cname;
