# Write your MySQL query statement below

-- select max(salary) as SecondHighestSalary from Employee where salary < (select max(salary) from Employee);

WITH RankedSalaries AS (
    SELECT salary, 
           DENSE_RANK() OVER (ORDER BY salary DESC) AS salary_rank
    FROM Employee
)
SELECT MAX(salary) AS SecondHighestSalary
FROM RankedSalaries
WHERE salary_rank = 2;
