use july_java2026;

desc employee;

desc department;

ALTER TABLE employee
ADD COLUMN dept_id INT;

ALTER TABLE employee
ADD FOREIGN KEY (dept_id)
REFERENCES department(dept_id);

INSERT INTO department
VALUES (1, 'IT', 'Pune');

table department;

select * from department;

INSERT INTO employee
VALUES (101, 'Aditya', 30000, '2026-06-17','aditya@amazon.com', 23, 1);

table employee;
select * from employee;

INSERT INTO employee
(id, name, doj, email, age, dept_id)
VALUES (102, "avinash", "2026-3-4", "avinash@ITC.com", 22, 1);

table employee














