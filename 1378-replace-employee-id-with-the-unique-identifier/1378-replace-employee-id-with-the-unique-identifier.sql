-- Write your PostgreSQL query statement below
select
    ee.unique_id, e.name
from
    employees e
LEFT JOIN
    EmployeeUNI ee
    ON
        e.id = ee.id