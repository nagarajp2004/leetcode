# Write your MySQL query statement below
select request_at as Day ,round(COUNT(IF(status LIKE 'can%', 1, NULL)) * 1.0 / COUNT(*),2) as `Cancellation Rate`
from Trips t where client_id not in (select users_id from Users where banned ='Yes')
and driver_id not in (select users_id from Users where banned ='Yes')
group by  request_at having day(request_at) <04;