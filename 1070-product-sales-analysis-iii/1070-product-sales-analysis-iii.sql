# Write your MySQL query statement below
select a.product_id,a.year as first_year,a.quantity,a.price
from Sales a
JOIN (select MIN(year) as first_year,product_id from Sales 
group by product_id) b
on a.year=b.first_year
and a.product_id=b.product_id