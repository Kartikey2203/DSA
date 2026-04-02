# Write your MySQL query statement below
select a.teacher_id, COUNT(DISTINCT a.subject_id) as cnt
from Teacher a
GROUP by a.teacher_id
 