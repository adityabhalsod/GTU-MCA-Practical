UPDATE Employee e,department d SET  salary = (salary / 100) * 10 + salary WHERE d.dept_name='it';
select * from employee;