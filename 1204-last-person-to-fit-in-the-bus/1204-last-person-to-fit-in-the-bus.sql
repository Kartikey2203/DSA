# Write your MySQL query statement below
select q1.person_name
from Queue q1 inner join Queue q2
on q1.Turn >= q2.Turn 
group by q1.Turn 
having sum(q2.weight) <= 1000
order by sum(q2.weight) desc 
limit 1