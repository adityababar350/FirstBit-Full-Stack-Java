use july_java2026;

desc employee;

ALTER TABLE employee
ADD PRIMARY KEY (id);

desc employee;

ALTER TABLE employee
MODIFY COLUMN email VARCHAR(30);

desc employee;

ALTER TABLE employee
MODIFY COLUMN email VARCHAR(30) NOT NULL;

desc employee;

ALTER TABLE employee
MODIFY COLUMN salary DECIMAL(7,2) DEFAULT 20000;

desc employee;

ALTER TABLE employee
ADD COLUMN age INT;

desc employee;

ALTER TABLE employee
ADD COLUMN demo INT AFTER salary;

desc employee;

ALTER TABLE employee
ADD COLUMN demo2 INT FIRST;

desc employee;

ALTER TABLE employee
DROP COLUMN demo;

desc employee;

ALTER TABLE employee
DROP COLUMN demo2;

desc employee;

CREATE TABLE department
(
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(20) NOT NULL,
    dept_loc VARCHAR(20)
);

desc department;

desc employee;

ALTER TABLE employee
MODIFY COLUMN age INT CHECK (age >= 18);

desc employee;

SHOW CREATE TABLE employee;

ALTER TABLE employee
DROP CONSTRAINT employee_chk_1;

SHOW CREATE TABLE employee;




