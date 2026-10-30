
-- MySQL Assignment 3
-- Author: Aditya Babar

USE mysql_assignment3;

-- Check existing tables
SHOW TABLES;

DESC employees;
DESC departments;
DESC jobs;


-- Q1) Insert employee records
-- Department records and referenced job records must exist first.

INSERT INTO employees
(employee_id, first_name, last_name, job_id, salary,
 manager_id, department_id)
VALUES
(100, 'Steven', 'King', 1, 24000, 200, 10),
(101, 'Neena', 'Kochhar', 2, 17000, 200, 10),
(102, 'Lex', 'De Haan', 2, 17000, 200, 10),
(103, 'Alexander', 'Hunold', 3, 9000, 103, 60),
(104, 'Bruce', 'Ernst', 3, 6000, 103, 60),
(105, 'David', 'Austin', 3, 4800, 103, 60),
(106, 'Valli', 'Pataballa', 3, 4800, 103, 60),
(107, 'Diana', 'Lorentz', 3, 4200, 114, 30),
(108, 'Nancy', 'Greenberg', 4, 12000, 145, 80),
(109, 'Daniel', 'Faviet', 4, 9000, 145, 80);


-- Q2) Insert at least 3 departments
-- Run only if these IDs do not already exist.

INSERT INTO departments
(department_id, department_name, manager_id, location_id)
VALUES
(10, 'Administration', 200, 1700),
(20, 'Marketing', 201, 1800),
(30, 'Purchasing', 114, 1700),
(60, 'IT', 103, 1400),
(80, 'Sales', 145, 2500);


-- Q3) Insert one new job record
INSERT INTO jobs
(job_id, job_title, min_salary, max_salary)
VALUES
(5, 'Data Analyst', 12000, 25000);


-- Q4) Increase salary by 10%
UPDATE employees
SET salary = salary * 1.10
WHERE employee_id > 0;


-- Q5) Set email for department 80
-- Assignment 3 uses commission_pct.

UPDATE employees
SET email = 'not available'
WHERE department_id = 80
  AND commission_pct < 0.20;


-- Q6) Set email for employees in Purchasing
UPDATE employees
SET email = 'not available'
WHERE department_id IN (
    SELECT department_id
    FROM departments
    WHERE department_name = 'Purchasing'
);


-- Q7) Update email and commission_pct for all employees
UPDATE employees
SET email = 'not available',
    commission_pct = 0.10;


-- Q8) Increase salary by 2000 in department 60
UPDATE employees
SET salary = salary + 2000
WHERE department_id = 60;


-- Q9) Preview employees whose salary is below 5000
SELECT *
FROM employees
WHERE salary < 5000;

-- Delete employees whose salary is below 5000
DELETE FROM employees
WHERE salary < 5000
  AND employee_id > 0;


-- Q10) Insert your own employee record
INSERT INTO employees
(employee_id, first_name, last_name, job_id, salary, manager_id, department_id)
VALUES
(110, 'Aditya', 'Babar', 3, 15000, 103, 60);


-- Q11) Change manager_id to 300 in department 80
UPDATE employees
SET manager_id = 300
WHERE department_id = 80;


-- Q12) Try deleting department 20
DELETE FROM departments
WHERE department_id = 20;
