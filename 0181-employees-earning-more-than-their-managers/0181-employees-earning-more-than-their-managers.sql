# Write your MySQL query statement below
SELECT e.name as "Employee"
FROM Employee m JOIN Employee e on m.Id = e.managerId
WHERE m.salary < e.salary