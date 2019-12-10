CREATE TABLE employee(
`emp_id` INT NOT NULL,
`emp_name` varchar(45) NOT NULL, 
`birth_date` DATE NOT NULL, 
`gender` BLOB NOT NULL, 
`dept_no` INT NOT NULL, 
`address` varchar(45) NOT NULL, 
`designation` varchar(45) NOT NULL, 
`salary` INT NOT NULL, 
`experience` INT NOT NULL, 
`email` varchar(45) NOT NULL,
PRIMARY KEY(`emp_id`)
);

CREATE TABLE depart(
`dept_no` INT NOT NULL, 
`dept_name` varchar(45) NOT NULL, 
`total_employees` INT NOT NULL, 
`location` varchar(45) NOT NULL,
PRIMARY KEY(`dept_no`)
);

CREATE TABLE project(
`proj_id` INT NOT NULL, 
`type_of_project` varchar(45) NOT NULL, 
`status` varchar(45) NOT NULL, 
`start_date` DATE NOT NULL, 
`emp_id` INT,
PRIMARY KEY(`proj_id`),
FOREIGN KEY(`emp_id`) REFERENCES employee(`emp_id`) 
);


INSERT INTO `depart` (`dept_no`, `dept_name`, `total_employees`, `location`) VALUES ('1', 'production', '5', 'mumbai');
INSERT INTO `depart` (`dept_no`, `dept_name`, `total_employees`, `location`) VALUES ('2', 'purchasing', '6', 'banglore');
INSERT INTO `depart` (`dept_no`, `dept_name`, `total_employees`, `location`) VALUES ('3', 'marketing', '6', 'pune');
INSERT INTO `depart` (`dept_no`, `dept_name`, `total_employees`, `location`) VALUES ('4', 'human resource management', '5', 'kolkata');
INSERT INTO `depart` (`dept_no`, `dept_name`, `total_employees`, `location`) VALUES ('5', 'accounting and finance', '7', 'delhi');

INSERT INTO `employee` (`emp_id`, `emp_name`, `birth_date`, `gender`, `dept_no`, `address`, `designation`, `salary`, `experience`, `email`) VALUES ('1', 'Aditya', '1996/02/23', 'M', '5', 'jamjodhpur', 'charted account', '50000', '5', 'adityabhalsod99@gmail.com');
INSERT INTO `employee` (`emp_id`, `emp_name`, `birth_date`, `gender`, `dept_no`, `address`, `designation`, `salary`, `experience`, `email`) VALUES ('2', 'Mitul', '1997/01/01', 'M', '2', 'gondal', 'selesman', '25000', '2', 'mitul@gmail.com');
INSERT INTO `employee` (`emp_id`, `emp_name`, `birth_date`, `gender`, `dept_no`, `address`, `designation`, `salary`, `experience`, `email`) VALUES ('3', 'Irfan', '1997/01/01', 'M', '3', 'dhandhuka', 'marketing manager', '30000', '3', 'irfan@gmail.com');
INSERT INTO `employee` (`emp_id`, `emp_name`, `birth_date`, `gender`, `dept_no`, `address`, `designation`, `salary`, `experience`, `email`) VALUES ('4', 'monika', '1997/01/01', 'F', '4', 'surat', 'ledder of labor', '15000', '4', 'monika@gmail.com');
INSERT INTO `employee` (`emp_id`, `emp_name`, `birth_date`, `gender`, `dept_no`, `address`, `designation`, `salary`, `experience`, `email`) VALUES ('5', 'kuldeep', '1997/01/01', 'M', '1', 'devgaam', 'production officer', '50000', '5', 'kuldeep@gmail.com');

INSERT INTO `project` (`proj_id`, `type_of_project`, `status`, `start_date`, `emp_id`) VALUES ('1', 'installing of new account system', 'complete', '2018/01/01', '1');
INSERT INTO `project` (`proj_id`, `type_of_project`, `status`, `start_date`, `emp_id`) VALUES ('2', 'selesman', 'working', '2017/01/01', '2');
INSERT INTO `project` (`proj_id`, `type_of_project`, `status`, `start_date`, `emp_id`) VALUES ('3', 'marketing', 'working', '2015/01/01', '3');
INSERT INTO `project` (`proj_id`, `type_of_project`, `status`, `start_date`, `emp_id`) VALUES ('4', 'labor helping', 'working', '2014/01/01', '4');
INSERT INTO `project` (`proj_id`, `type_of_project`, `status`, `start_date`, `emp_id`) VALUES ('5', 'production managing', 'working', '2013/01/01', '5');


1. DELETE FROM `depart` WHERE `total_employees` < 1;

2. SELECT emp_name,designation FROM employee where `gender`='F' order by `emp_name`;

3. SELECT emp_name FROM employee where `emp_name` like '%A' or `emp_name` like 'A%';

4. SELECT emp_name,salary FROM employee order by `salary` asc ;