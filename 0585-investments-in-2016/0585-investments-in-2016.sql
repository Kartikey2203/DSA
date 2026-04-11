# Write your MySQL query statement below
select sum(tiv_2016) as tiv_2016
from Insurance 
where (lat,lon) in (
    select a.lat,a.lon 
    from insurance a 
   group by a.lat,a.lon
   having
   Count(a.lat) = 1 and
   COUNT(a.lon) =1
) 
and tiv_2015 in (
    select tiv_2015 
    from Insurance 
    group by tiv_2015
    having count(*) >1
)