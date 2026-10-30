
/*
====================================================
MySQL Assignment - 4
Author   : Aditya Babar
Database : mysql_assignment1
Topic    : SELECT, DISTINCT, ORDER BY, Functions,
           Aggregate Functions, WHERE, LIKE, IN
====================================================
*/

USE mysql_assignment1;


-- Q1) Display first_name and last_name with aliases

SELECT
    first_name AS First_Name,
    last_name AS Last_Name
FROM employees;


-- Q2) Display different department IDs

SELECT DISTINCT department_id
FROM employees;


-- Q3) Display all employee details in descending order of first_name

SELECT *
FROM employees
ORDER BY first_name DESC;


-- Q4) Display first_name, last_name, salary and PF (15% of salary)

SELECT
    first_name,
    last_name,
    salary,
    salary * 0.15 AS PF
FROM employees;


-- Q5) Display employee_id, employee names and salary
-- Sort salary in increasing order

SELECT
    employee_id,
    CONCAT(first_name, ' ', last_name) AS Employee_Name,
    salary
FROM employees
ORDER BY salary ASC;


-- Q6) Display total salary payable to all employees

SELECT SUM(salary) AS Total_Salary
FROM employees;


-- Q7) Display highest and lowest salary

SELECT
    MAX(salary) AS Highest_Salary,
    MIN(salary) AS Lowest_Salary
FROM employees;


-- Q8) Display average salary and total number of employees

SELECT
    AVG(salary) AS Average_Salary,
    COUNT(*) AS Total_Employees
FROM employees;


-- Q9) Display total number of employees

SELECT COUNT(*) AS Total_Employees
FROM employees;


-- Q10) Display number of different job roles

SELECT COUNT(DISTINCT job_id) AS Different_Job_Roles
FROM employees;


-- Q11) Display first 10 employee records

SELECT *
FROM employees
LIMIT 10;


-- Q12) Display employees whose salary is less than 10000
-- or greater than 15000

SELECT
    first_name,
    last_name,
    salary
FROM employees
WHERE salary < 10000
   OR salary > 15000;


-- Q13) Display employee names and department IDs
-- for departments 30 and 100

SELECT
    first_name,
    last_name,
    department_id
FROM employees
WHERE department_id IN (30, 100)
ORDER BY department_id ASC;


-- Q14) Employees in department 30 or 100
-- whose salary is outside the range 10000 to 15000

SELECT
    first_name,
    last_name,
    salary
FROM employees
WHERE department_id IN (30, 100)
  AND salary NOT BETWEEN 10000 AND 15000;


-- Q15) Display employee names and hire_date
-- for employees hired in 1987

SELECT
    first_name,
    last_name,
    hire_date
FROM employees
WHERE hire_date >= '1987-01-01'
  AND hire_date < '1988-01-01';


-- Q16) Display first_name containing both 'b' and 'c'

SELECT first_name
FROM employees
WHERE LOWER(first_name) LIKE '%b%'
  AND LOWER(first_name) LIKE '%c%';


-- Q17) Display last_name, job role and salary
-- for Programmer or Shipping Clerk
-- salary must not be 4500, 10000 or 15000

SELECT
    e.last_name,
    j.job_title AS Job_Role,
    e.salary
FROM employees e
JOIN jobs j
    ON e.job_id = j.job_id
WHERE j.job_title IN ('Programmer', 'Shipping Clerk')
  AND e.salary NOT IN (4500, 10000, 15000);


-- Q18) Display last_name containing exactly 6 characters

SELECT last_name
FROM employees
WHERE last_name LIKE '______';


-- Q19) Display last_name with 'e' as the third character

SELECT last_name
FROM employees
WHERE LOWER(last_name) LIKE '__e%';


-- Q20) Display all different job roles/designations

SELECT DISTINCT j.job_title AS Job_Role
FROM employees e
JOIN jobs j
    ON e.job_id = j.job_id;


-- Q21) Display employee details for last names
-- BLAKE, SCOTT, KING or FORD

SELECT *
FROM employees
WHERE UPPER(last_name) IN ('BLAKE', 'SCOTT', 'KING', 'FORD');
