WITH n_t AS (
    SELECT 
        d.name AS Department,
        e.name AS Employee,
        e.salary AS Salary,
        DENSE_RANK() OVER (
            PARTITION BY d.name 
            ORDER BY e.salary DESC
        ) AS r
    FROM Employee AS e
    left JOIN Department AS d
        ON e.departmentId = d.id
)
SELECT Department, Employee, Salary
FROM n_t
WHERE r <= 3;
