table 1:create table sc
			(
				rollno int(3) ,
			    courseno int(3),
			    marks int(5),
			    foreign key(rollno) references student(rollno)

			);

table 2:create table student(
	
			    rollno int(3) primary key ,
			    sname varchar(45),
			    class varchar(23),
			    birthday date
			    
			    
			);
			insert into student values(5,'hjh','9 std','2018-12-9');
table 3:create table course
				(
					courseno int(3) primary key,
				    cname varchar(45),
				    maxmarks int(3),
				    minmarks int(3)
				    



				);
			insert into course values(1,'ala',99,54);	
	4>	ALTER TABLE sc
		ADD FOREIGN KEY (courseno) REFERENCES course(courseno);
	3>	ALTER TABLE sc
ADD CHECK (marks>0 or marks<=100);
	5>	SELECT *
FROM course, student
WHERE cname='mca';
	6> 	SELECT *
FROM sc, student
WHERE marks>70 order by sname;
	7>	SELECT *
FROM sc, student
where marks>30 order by sname;
	8>	select * from course where maxmarks>30;
	9>	SELECT *
FROM student where birthday between '2017-9-9' and '2018-9-8';
	10>	SELECT course.courseno,sc.marks
FROM course
RIGHT JOIN sc ON course.courseno = sc.courseno
ORDER BY course.courseno;
