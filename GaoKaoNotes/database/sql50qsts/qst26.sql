/*按各科平均成績和及格率的百分數 照平均從低到高顯示*/

select cno, 
avg(score), 
sum(case when score>=60 then 1 else 0 end)/count(score)
from sc
group by cno
order by avg(score) asc;



/* answer provided*/
SELECT cno,AVG(score),CONCAT(ROUND(COALESCE(count,0)/tcount,2)*100,'%')AS passing
FROM sc LEFT JOIN (SELECT cno,COUNT(*) AS count FROM sc WHERE score > 60 GROUP BY cno)AS pass USING(cno)
LEFT JOIN (SELECT cno,COUNT(*) AS tcount FROM sc GROUP BY cno)AS total USING(cno)
GROUP BY cno
ORDER BY AVG(score)