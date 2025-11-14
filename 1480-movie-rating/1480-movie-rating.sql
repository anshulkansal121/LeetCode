# Write your MySQL query statement below


(SELECT name as 'results'
FROM Users u JOIN MovieRating mr ON u.user_id = mr.user_id
GROUP BY mr.user_id
ORDER BY COUNT(rating) DESC, name ASC
LIMIT 1)
UNION ALL 
(SELECT title as 'results'
FROM Movies m JOIN MovieRating mr ON m.movie_id = mr.movie_id
WHERE DATE_FORMAT(created_at,'%Y-%m') = '2020-02'
GROUP BY mr.movie_id
ORDER BY AVG(rating) DESC, title ASC
LIMIT 1)