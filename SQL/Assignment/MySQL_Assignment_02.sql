CREATE DATABASE library_assignment;
USE library_assignment;

-- Q1)
CREATE TABLE Member (
    Member_Id INT,
    Member_Name VARCHAR(30),
    Member_Address VARCHAR(50),
    Acc_Open_Date DATE,
    Membership_Type VARCHAR(20),
    Fees_Paid DECIMAL(10,2),
    Max_Books_Allowed INT,
    Penalty_Amount DECIMAL(10,2));

CREATE TABLE Books (
    Book_No INT,
    Book_Name VARCHAR(30),
    Author_Name VARCHAR(30),
    Cost DECIMAL(10,2),
    Category VARCHAR(15));

CREATE TABLE Issue (
    Lib_Issue_Id INT,
    Book_No INT,
    Member_Id INT,
    Issue_Date DATE,
    Return_Date DATE);
    

-- Q2)
DESC Member;
DESC Books;
DESC Issue;

-- Q3)
DROP TABLE Member;

-- Q4)
CREATE TABLE Member (
    Member_Id INT PRIMARY KEY,
    Member_Name VARCHAR(30),
    Member_Address VARCHAR(50),
    Acc_Open_Date DATE,
    Membership_Type VARCHAR(20)
        CHECK (Membership_Type IN ('Lifetime', 'Annual', 'Half Yearly', 'Quarterly')),
    Fees_Paid DECIMAL(10,2),
    Max_Books_Allowed INT,
    Penalty_Amount DECIMAL(10,2)
);

-- Q5)
ALTER TABLE Member
MODIFY Member_Name VARCHAR(40);

-- Q6)
ALTER TABLE Issue
ADD Reference VARCHAR(30);

-- Q7)
ALTER TABLE Issue
DROP COLUMN Reference;

-- Q8)
RENAME TABLE Issue TO Lib_Issue;

-- Q9)
INSERT INTO Member
(Member_Id, Member_Name, Member_Address, Acc_Open_Date, Membership_Type,
 Fees_Paid, Max_Books_Allowed, Penalty_Amount)
VALUES
(1, 'Richa Sharma', 'Pune', '2005-12-10', 'Lifetime', 25000, 5, 50),
(2, 'Garima Sen', 'Pune', CURDATE(), 'Annual', 1000, 3, NULL);

-- Q10)
INSERT INTO Member
(Member_Id, Member_Name, Member_Address, Acc_Open_Date, Membership_Type,
 Fees_Paid, Max_Books_Allowed, Penalty_Amount)
VALUES
(3, 'Amit Patil', 'Mumbai', '2024-01-15', 'Quarterly', 1500, 4, 100),
(4, 'Sneha Joshi', 'Pune', '2023-06-20', 'Annual', 5000, 5, 0),
(5, 'Rahul Deshmukh', 'Nashik', '2022-11-05', 'Half Yearly', 3000, 3, 150),
(6, 'Pranav Deshmukh Patil', 'Nagpur', '2021-03-10', 'Lifetime', 20000, 6, 250),
(7, 'Neha Kulkarni', 'Satara', '2024-08-12', 'Quarterly', 1200, 2, NULL),
(8, 'Sagar Shinde', 'Kolhapur', '2025-02-01', 'Annual', 4000, 4, 50);

-- Q11)
ALTER TABLE Member
MODIFY Member_Name VARCHAR(20);

-- In strict SQL mode, this can fail if existing Member_Name values exceed 20 characters.
-- If it fails, the reason is that existing data is too long for VARCHAR(20).
-- In non-strict mode, MySQL may truncate longer values.

-- Q12)
ALTER TABLE Member
ADD CHECK (Max_Books_Allowed < 100);

-- Q13)
CREATE TABLE MemberBackup AS
SELECT * FROM Member;

-- Q14)
ALTER TABLE Member
ADD CONSTRAINT chk_member_max_books
CHECK (Max_Books_Allowed < 100);

ALTER TABLE Member
ADD CONSTRAINT chk_member_penalty
CHECK (Penalty_Amount <= 1000);

-- Q15)
DROP TABLE Books;

-- Q16)
CREATE TABLE Books (
    Book_No INT PRIMARY KEY,
    Book_Name VARCHAR(30) NOT NULL,
    Author_Name VARCHAR(30),
    Cost DECIMAL(10,2),
    Category VARCHAR(15)
        CHECK (Category IN ('System', 'Fiction', 'Database', 'RDBMS', 'Others', 'Science'))
);

-- Q17)
INSERT INTO Books (Book_No, Book_Name, Author_Name, Cost, Category)
VALUES
(101, 'Let Us C', 'Denis Ritchie', 450, 'System'),
(102, 'Oracle Complete Ref', 'Loni', 550, 'Database'),
(103, 'Mastering SQL', 'Loni', 250, 'Database'),
(104, 'PL SQL Ref', 'Scott Urman', 750, 'Database'),
(105, 'National Geographic', 'Adis Scott', 1000, 'Science');

-- Q18)
INSERT INTO Books (Book_No, Book_Name, Author_Name, Cost, Category)
VALUES
(106, 'SQL Basics', 'A. Sharma', 350, 'Database'),
(107, 'Learn RDBMS', 'R. Patil', 500, 'RDBMS'),
(108, 'Short Stories', 'N. Joshi', 280, 'Fiction'),
(109, 'Computer Systems', 'P. Kulkarni', 650, 'System'),
(110, 'Other Topics', 'S. Deshmukh', 400, 'Others');

-- Q19)
SELECT * FROM Member;
SELECT * FROM Books;

-- Q20)
DROP TABLE Lib_Issue;

-- Q21)
CREATE TABLE Issue (
    Lib_Issue_Id INT PRIMARY KEY,
    Book_No INT,
    Member_Id INT,
    Issue_Date DATE,
    Return_Date DATE,
    CONSTRAINT fk_issue_book
        FOREIGN KEY (Book_No) REFERENCES Books(Book_No),
    CONSTRAINT fk_issue_member
        FOREIGN KEY (Member_Id) REFERENCES Member(Member_Id)
);

-- Q22)
INSERT INTO Issue (Lib_Issue_Id, Book_No, Member_Id, Issue_Date)
VALUES
(7001, 101, 1, '2024-12-10'),
(7002, 102, 2, '2024-12-25'),
(7003, 104, 1, '2025-01-15'),
(7004, 101, 1, '2025-02-04'),
(7005, 104, 2, '2025-03-15'),
(7006, 101, 3, '2025-04-18');

-- Q23)
-- This insert should fail because Member_Id 999 does not exist in Member.
INSERT INTO Issue (Lib_Issue_Id, Book_No, Member_Id, Issue_Date)
VALUES (7007, 101, 999, '2025-05-01');

-- Expected error: foreign key constraint fails because Member_Id 999 is not present in Member.

-- Q24)
-- This delete should fail while Issue rows reference Member_Id = 1.
DELETE FROM Member
WHERE Member_Id = 1;

-- Expected error: Cannot delete/update a parent row because a foreign key constraint fails.

-- Q25)
UPDATE Issue
SET Return_Date = DATE_ADD(Issue_Date, INTERVAL 15 DAY)
WHERE Lib_Issue_Id IN (7004, 7005);

-- Q26)
DELETE FROM Issue
WHERE Member_Id = 1
  AND Issue_Date < '2006-12-10';


-- Q28)
DROP TABLE Issue;
DROP TABLE Member;
DROP TABLE Books;