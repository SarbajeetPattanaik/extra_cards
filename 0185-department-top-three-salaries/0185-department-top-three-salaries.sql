# Write your MySQL query statement below

-- select departmentId from employee group by departmentId

-- select * from (select (salary) from employee where departmentId = 2 order by salary desc limit 3) as e1 order by e1.salary limit 1


-- SELECT COUNT(DISTINCT e2.Salary)
--         FROM Employee e2
--         WHERE 
--             e2.Salary > e1.Salary
           

-- select (salary) from employee where departmentId = 1 group by salary order by salary desc limit 3



-- select * from employee where salary >= 

-- select * from employee where salary >= (select * from (select (salary) from employee where departmentId = 1 group by salary order by salary desc limit 3) as e1 order by e1.salary limit 1)





-- select * from employee where salary >= (select * from (select (salary) from employee where departmentId=1 group by salary order by salary desc limit 3) as e1 order by e1.salary limit 1)


-- select * from (select * from (select (salary) from employee group by salary order by salary desc limit 3) as e1 order by e1.salary limit 1) as step1 




-- select * from employee where salary >= (select * from (select (salary) from employee where departmentId in (select departmentId from employee group by departmentId) group by salary order by salary desc limit 3) as e1 order by e1.salary limit 1)


-- select * from (select (salary) from employee where departmentId in (select departmentId from employee group by departmentId) group by salary order by salary desc limit 3) as e1 order by e1.salary limit 1




-- SELECT *
-- FROM employee
-- WHERE salary >= (
--     SELECT *
--     FROM (
--         SELECT salary
--         FROM employee
--         WHERE departmentId IN (
--             SELECT departmentId
--             FROM employee
--             GROUP BY departmentId
--         )
--         GROUP BY salary
--         ORDER BY salary DESC
--         LIMIT 3
--     ) AS e1
--     ORDER BY e1.salary
--     LIMIT 1
-- );



SELECT
    d.name AS Department,
    e1.name AS Employee,
    e1.salary AS Salary
FROM
    employee e1
JOIN
    Department d ON e1.DepartmentId = d.Id
WHERE
    e1.salary >= (
        SELECT MIN(e3.salary)
        FROM (
            SELECT DISTINCT e2.salary
            FROM employee e2
            WHERE e2.departmentId = e1.departmentId
            ORDER BY e2.salary DESC
            LIMIT 3
        ) AS e3
    )
ORDER BY
    d.name,
    e1.salary DESC;



-- SELECT MIN(e3.salary)
--         FROM (
--             SELECT DISTINCT e2.salary
--             FROM employee e2
--             WHERE e2.departmentId = 2
--             ORDER BY e2.salary DESC
--             LIMIT 3
--         ) as e3