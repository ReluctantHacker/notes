/*檢索每課程第二高分的學號 分數(考慮成績並列)*/
/*不考慮成績並列*/
select distinct sc_1.cno, sc_1.sno, sc_1.score from sc as sc_1
where (select count(*) from sc as sc_2 where sc_1.score<sc_2.score and sc_1.cno=sc_2.cno) = 1
order by sc_1.cno asc;

/*考慮成績並列*/
select distinct sc_1.cno, sc_1.sno, sc_1.score from sc as sc_1
where 
(select count(*) from 
	(select distinct cno, score from sc) as sc_2
    where sc_1.score<sc_2.score and sc_1.cno=sc_2.cno
    ) = 1;
    
    
/*第二次遇到此題的解法*/
