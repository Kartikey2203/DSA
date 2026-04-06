# Write your MySQL query statement below
select a.employee_id,a.department_id
from Employee a
where a.primary_flag='Y'

union

select a.employee_id,a.department_id
from Employee a
group by employee_id
having Count(*) = 1
