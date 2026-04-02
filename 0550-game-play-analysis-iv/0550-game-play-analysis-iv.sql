# Write your MySQL query statement below
select Round(
    COUNT(DISTINCT(a.player_id))/
    (select COUNT(DISTINCT player_id) from Activity),
    2
) as fraction
from Activity a 
JOIN (
    select player_id, MIN(event_date) as first_login
    from Activity
    Group by player_id
) b
on a.player_id=b.player_id
AND a.event_date=DATE_ADD(b.first_login,INTERVAL 1 DAY);