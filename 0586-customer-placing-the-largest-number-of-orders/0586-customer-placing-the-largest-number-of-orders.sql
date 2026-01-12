-- Write your PostgreSQL query statement below
WITH CTE AS (
Select
    customer_number,
    COUNT(order_number) AS ORDERS_COUNT
FROM
    ORDERS
GROUP BY
    customer_number
ORDER BY
    ORDERS_COUNT DESC
)
SELECT
    customer_number
FROM
    CTE
LIMIT 1;