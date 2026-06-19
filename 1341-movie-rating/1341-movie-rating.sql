# Write your MySQL query statement below
(select u.name as results
from Users u join 
MovieRating mr on
u.user_id=mr.user_id
group by u.user_id
order by count(mr.rating) desc, u.name asc
limit 1)
union all(
select m.title as results
from Movies m join 
MovieRating mr on
m.movie_id=mr.movie_id
where DATE_FORMAT(mr.created_at,'%Y-%m') ='2020-02'
group by m.movie_id,m.title
order by AVG(mr.rating) desc,m.title asc
limit 1
)
