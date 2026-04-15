# Write your MySQL query statement below
select  id ,visit_date,people
from(
select  a.id as id,a.visit_date,a.people
from Stadium a,Stadium b,Stadium c
where a.id=b.id-1 and b.id=c.id-1 and
a.people >=100 and b.people >=100 and c.people >=100 
union 
select  b.id as id,b.visit_date,b.people
from Stadium a,Stadium b,Stadium c
where a.id=b.id-1 and b.id=c.id-1 and
a.people >=100 and b.people >=100 and c.people >=100 
union 
select  c.id as id,c.visit_date,c.people
from Stadium a,Stadium b,Stadium c
where a.id=b.id-1 and b.id=c.id-1 and
a.people >=100 and b.people >=100 and c.people >=100 
) as t
order by visit_date