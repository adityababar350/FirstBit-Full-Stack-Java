use july_java2026;

table employee;

table department;

SELECT city, COUNT(id)
FROM student
GROUP BY city;

SELECT dept_id, COUNT(id)
FROM student
GROUP BY dept_id;

SELECT dept_id, min(salary)
FROM student
GROUP BY dept_id;

SELECT dept_id, MAX(salary), MIN(salary)
FROM student
GROUP BY dept_id;

SELECT dept_id, AVG(salary)
FROM student
GROUP BY dept_id;

SELECT age, COUNT(id)
FROM student
GROUP BY age;

SELECT dept_id, AVG(salary)
FROM student
GROUP BY dept_id
HAVING AVG(salary) > 30000;

SELECT city, COUNT(id)
FROM student
GROUP BY city
HAVING COUNT(id) > 2;


SELECT MAX(salary)
FROM student;

SELECT name
FROM student
WHERE salary = (SELECT MAX(salary)
FROM student);

SELECT name
FROM student
WHERE salary = (SELECT MIN(salary)
FROM student);

SELECT name, salary
FROM student
WHERE salary > ( SELECT AVG(salary)
FROM student);