CREATE  TABLE `first`.`Person` (
  `person_id` INT  auto_increment ,
  `f_name` VARCHAR(150),
  `l_name` VARCHAR(150),
  `city` VARCHAR(50) ,
  `Address` VARCHAR(255) ,
  `dob` DATE ,
  PRIMARY KEY (`person_id`) )
ENGINE = InnoDB;



CREATE  TABLE `first`.`Student` (
  `Stu_id` INT  auto_increment ,
  `name` VARCHAR(150),
  `dob` DATE ,
  `class` VARCHAR(10),
  `Address` VARCHAR(255) ,
  PRIMARY KEY (`Stu_id`))
ENGINE = InnoDB;








 /*PRIMARY KEY (`membership_number`)*/


--  CREATE  TABLE IF NOT EXISTS `first`.`Person` (
--   `person_id` INT  auto_increment ,
--   `f_name` VARCHAR(150),
--   `l_name` VARCHAR(150),
--   `city` VARCHAR(50) ,
--   `Address` VARCHAR(255) ,
--   `dob` DATE ,
--   PRIMARY KEY (`person_id`) )
-- ENGINE = InnoDB;


