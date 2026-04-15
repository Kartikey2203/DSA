# Write your MySQL query statement below
select b.name as Department, a.name as Employee ,a.salary
from Employee a join Department b
on a.departmentId = b.id
where (select max(salary) from Employee 
where departmentId = b.id)=a.salary
