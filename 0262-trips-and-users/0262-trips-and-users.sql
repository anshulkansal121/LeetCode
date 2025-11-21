# Write your MySQL query statement below
SELECT request_at AS "Day", ROUND(SUM(CASE WHEN status!= "completed" THEN 1 ELSE 0 END)/COUNT(*),2) as "Cancellation Rate"
FROM Trips t 
JOIN Users c on c.users_id = t.client_id AND c.banned='No'
JOIN Users u
    ON t.driver_id=u.users_id
    AND u.banned='No'
WHERE request_at >= "2013-10-01" AND request_at <= "2013-10-03"
GROUP BY request_at
