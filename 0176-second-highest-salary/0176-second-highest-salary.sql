# Write your MySQL query statement below
select max(n.salary) as  SecondHighestSalary
from Employee n
where (select max(salary) from Employee)> n.salary
order by n.salary desc
-- limit 1