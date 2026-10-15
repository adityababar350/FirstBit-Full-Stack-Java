use july_java2026;

desc employee;

desc department;

INSERT INTO department (dept_id, dept_name, dept_loc)   -- Insert multiple department records
VALUES
(2, 'Computer', 'Mumbai'),
(3, 'Mechanical', 'Nashik'),
(4, 'Civil', 'Nagpur'),
(5, 'ENTC', 'Aurangabad');

table department;

INSERT INTO employee  -- Insert multiple employee records
VALUES
(103, 'Rahul', '30000', '2026-04-10', 'rahul@google.com',  23, 2),
(104, 'Amit', '35000', '2026-05-15', 'amit@infosys.com',  21, 3),
(105, 'Rohit', '45000','2026-06-20', 'rohit@tcs.com',   24, 4),
(106, 'Vikas', '30000', '2026-07-25', 'vikas@wipro.com',   22, 5);

table employee;

ALTER TABLE employee                     -- Make id column AUTO_INCREMENT
MODIFY COLUMN id INT AUTO_INCREMENT;

INSERT INTO employee                   -- Insert employee without specifying id
(name, doj, email, age, dept_id)       -- AUTO_INCREMENT generates the id automatically
VALUES
('Atharv', '2026-09-27', 'atharv@L&T.com', 22, 1);

table employee;
table department;

INSERT INTO employee              -- Insert Shidhart by specifying columns
(name, doj, email, age, dept_id)
VALUES
('Shidhart', '2026-09-27', 'Shidhart@tata.com', 22, 1);

INSERT INTO employee                -- Insert Rushi
(name, doj, email, age, dept_id)
VALUES
('Rushi', '2026-09-27', 'rushi@Intel.com', 22, 1);

INSERT INTO employee                -- Insert Shubham
(name, doj, email, age, dept_id)
VALUES
('Shubham', '2026-09-27', 'shubham@gmail.com', 22, 1);

table employee;


UPDATE employee       -- Update salary of employees from department 1
SET salary = 40000
WHERE dept_id = 1;

UPDATE employee       -- Update salary of employees from department 2
SET salary = 45000
WHERE dept_id = 2;

UPDATE employee     -- Update salary of employees from department 3
SET salary = 30000
WHERE dept_id = 3;

UPDATE employee     -- Update salary of employees from department 4
SET salary = 43000
WHERE dept_id = 4;

UPDATE employee      -- Update salary of employees from department 5
SET salary = 35000
WHERE dept_id = 5;


table employee; -- Display updated employee records 
table department; -- Display department records

-- Update email of employee
UPDATE employee SET email = 'aditya@gamil.com' WHERE id = 101;
UPDATE employee SET email = 'avinash@gamil.com' WHERE id = 102;
UPDATE employee SET email = 'rahul@gamil.com' WHERE id = 103;
UPDATE employee SET email = 'amit@gamil.com' WHERE id = 104;
UPDATE employee SET email = 'rohit@gamil.com' WHERE id = 105;
UPDATE employee SET email = 'vikas@gamil.com' WHERE id = 106;
UPDATE employee SET email = 'atharv@gamil.com' WHERE id = 107;
UPDATE employee SET email = 'rushi@gamil.com' WHERE id = 109;

table employee;

table department;

DELETE FROM employee  -- Delete employee with id 111
WHERE id = 111;

TRUNCATE TABLE employee; -- TRUNCATE removes all records from employee table

DROP DATABASE database_name;

INSERT INTO employee                -- Insert Nikhil
(name, doj, email, age, dept_id)
VALUES
('Nikhil', '2026-09-27', 'nikhil@gmail.com', 22, 1);

table employee;

SELECT * FROM employee;

SELECT name, salary       -- Display name and salary of employees
FROM student
WHERE salary > 30000;    -- whose salary is greater than 30000

SELECT *          
FROM employee          -- Display employees whose department is NOT 2
WHERE dept_id != 2;

SELECT *
FROM employee                        -- Display employees from department 1 OR department 2
WHERE dept_id = 1 OR dept_id = 2;

SELECT *                    -- Display employees belonging to department 1 or 2
FROM employee
WHERE dept_id IN (1, 2);    -- IN is a shorter way to write multiple OR conditions

SELECT *
FROM employee                -- Display employees belonging to department 1, 2 or 3
WHERE dept_id IN (1, 2, 3);

SELECT *
FROM employee                 -- Display employees NOT belonging to department 1 or 2
WHERE dept_id NOT IN (1, 2);







