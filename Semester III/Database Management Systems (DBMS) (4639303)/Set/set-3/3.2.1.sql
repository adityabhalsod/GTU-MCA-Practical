create table EMPLOYEE(
	emp_id int(3),
    emp_name varchar(30),
    birth_date int(2) check(birth_date>18),
    gender varchar(20),
    dept_no int(4),
    address varchar(30),
    designation varchar(20) check (designation='manager' or designation='cleark' or designation='leader' or designation='analyst' or designation='designer' or designation='coder' or designation='tester'),
    salary int(5) check(salary>0),
    experience int(5),
    email varchar(20) check (email='@' and email='.'),
    primary key(emp_id),
    foreign key(dept_no) references DEPARTMENT(dept_no)  
);