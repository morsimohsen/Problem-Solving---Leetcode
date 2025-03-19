-- Write your PostgreSQL query statement below
WITH temp as(
    SELECT
        *,
        LAG(temperature, 1) OVER (ORDER BY recordDate) as pre_temp,
        LAG(recordDate, 1) OVER (ORDER BY recordDate) as last_date

    FROM Weather 

)
SELECT
    id
FROM
    temp
WHERE
    temperature > pre_temp AND recordDate - last_date = 1
