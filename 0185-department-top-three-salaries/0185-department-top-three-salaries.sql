# Write your MySQL query statement below
WITH temp_table AS (
SELECT 
 d.name AS Department,
        e.name AS Employee,
        e.salary AS Salary,
DENSE_RANK() OVER(PARTITION BY d.name ORDER BY salary DESC) as Ranking
FROM Employee e
LEFT JOIN Department d
ON e.departmentId = d.id
)

SELECT Department, Employee, Salary
FROM temp_table
WHERE Ranking <=3;