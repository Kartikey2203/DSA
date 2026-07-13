# Write your MySQL query statement below
select a.name as name
from Employee a  join Employee b
on a.id=b.managerId
group by a.id
having count(b.managerId)>=5 