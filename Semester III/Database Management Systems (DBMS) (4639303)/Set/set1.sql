SET-1

create table department (dept_no int,dept_nm varchar(30), location varchar(20))
desc department

insert into department values (110,'RND','AH')
select * from department
select * from department where location='NY'
select * from department where dept_no='10'
select * from department where dept_nm like "A%"
select * from department where dept_no between 1 and 100
delete from department where dept_nm="TRG"
update department set dept_nm='IT' where dept_nm='EDP'


SET-2

create table employees(emp_id int primary key,

			emp_nm varchar(20),

			age int CHECK (age > 18),
                       
			 gender varchar(7), 
                        
			address varchar(100),
                        
			designation varchar(30) CHECK ('manager' or 'clerk' or 'leader' or 'analyst' or 'designer' or 'coder' or 'tester')),

                        salary numeric(10) check (salary > 0),

                        experience varchar(50),

                        email varchar(50) check ('@' and '.'),
						foreign key (dept_no) references department(dept_no)
						)


ALTER TABLE `mca3`.`department` 
DROP FOREIGN KEY `fk_deptno`;
ALTER TABLE `mca3`.`department` 
DROP INDEX `fk_deptno` ,

						ADD INDEX `fk_deptno_idx` (`dept_no` ASC);
ALTER TABLE `mca3`.`department` 

						ADD CONSTRAINT `fk_deptno`
  FOREIGN KEY (`dept_no`)
 
 						REFERENCES `mca3`.`employee` (`emp_id`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;





create table employee(emp_id int primary key,

			emp_nm varchar(20),

			birth_date DATE, 				
			gender varchar(7), 
						
			address varchar(100),
						
			designation varchar(30),
                        salary numeric(10),                        
			experience varchar(50),
                        
			email varchar(50),
			CHECK (birth_date <= '1999-01-01'),

			 CHECK (designation IN ('manager', 'clerk', 'leader', 'analyst', 'designer', 'coder', 'tester')),
			check (salary > 0),

			 check (email like '%_@__%.__%'))