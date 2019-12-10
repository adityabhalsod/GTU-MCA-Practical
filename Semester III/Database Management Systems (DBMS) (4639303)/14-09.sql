
-- id,staff_name,staffage,staff_address,monthley_package

--  CREATE  TABLE IF NOT EXISTS `first`.`staff` (
--   `staff_id` INT  auto_increment ,
--   `staff_name` VARCHAR(150),
--   `staff_age` int(2),
--   `staff_address` VARCHAR(100) ,
--   `monthley_package` int(5) ,
--   PRIMARY KEY (`staff_id`) )
-- ENGINE = InnoDB;

--  CREATE  TABLE IF NOT EXISTS `first`.`payment` (
--   `pay_id` INT  auto_increment ,
--   `date` DATE,
--   `staff_id` int(11),
--   `amount` int(10) ,
--   PRIMARY KEY (`pay_id`) )
-- ENGINE = InnoDB;

INSERT INTO `first`.`staff` (`staff_id`, `staff_name`, `staff_age`, `staff_address`, `monthley_package`) VALUES ('1', 'Arayn', '22', 'Mumbai', '18000');

INSERT INTO `first`.`staff` (`staff_id`, `staff_name`, `staff_age`, `staff_address`, `monthley_package`) VALUES ('2', 'Sushil', '32', 'Delhi', '20000');

INSERT INTO `first`.`staff` (`staff_id`, `staff_name`, `staff_age`, `staff_address`, `monthley_package`) VALUES ('3', 'Monty', '25', 'Mohali', '22000');

INSERT INTO `first`.`staff` (`staff_id`, `staff_name`, `staff_age`, `staff_address`, `monthley_package`) VALUES ('4', 'Amit', '20', 'Allahabad', '12000');


INSERT INTO `first`.`payment` (`pay_id`, `date`, `staff_id`, `amount`) VALUES ('001', '2012-01-12', '1', '2000');
INSERT INTO `first`.`payment` (`pay_id`, `date`, `staff_id`, `amount`) VALUES ('002', '2012-02-12', '2', '2000');
INSERT INTO `first`.`payment` (`pay_id`, `date`, `staff_id`, `amount`) VALUES ('003', '2012-03-22', '3', '4000');
INSERT INTO `first`.`payment` (`pay_id`, `date`, `staff_id`, `amount`) VALUES ('004', '2012-04-11', '4', '5000');


select staff_id,staff_name,staff_age,amount from staff s,payment p where s.staff_id=p.staff_id;

select s.*,p.* from staff as s inner join payment as p where s.staff_id=p.staff_id;

select * from staff as s inner join payment as p where s.staff_id=p.staff_id;