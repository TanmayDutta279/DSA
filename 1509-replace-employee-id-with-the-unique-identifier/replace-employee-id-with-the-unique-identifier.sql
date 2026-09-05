# Write your MySQL query statement below
select e.name,euni.unique_id from Employees as e
left join EmployeeUNI as euni
 on e.id = euni.id