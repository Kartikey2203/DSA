# Write your MySQL query statement below
select c.visited_on as visited_on,
(
    select SUM(amount) from Customer
    where visited_on between DATE_SUB(c.visited_on, interval 6 day) and 
    c.visited_on
) as amount,
(
    select Round(sum(amount)/7,2) from Customer
    where visited_on between DATE_SUB(c.visited_on, interval 6 day) and 
    c.visited_on
) as average_amount
from Customer c
where c.visited_on >=(
    select DATE_ADD(min(visited_on),interval 6 day) from Customer 
    
)
group by c.visited_on