WITH DirectReports AS (
    SELECT
        m.id AS managerId,
        m.name AS ManagerName,
        COUNT(e.id) AS reports_count
    FROM
        Employee e
    JOIN
        Employee m ON e.managerId = m.id
    GROUP BY
        m.id, m.name
    HAVING
        COUNT(e.id) >= 5
)

SELECT
    ManagerName as name
FROM
    DirectReports