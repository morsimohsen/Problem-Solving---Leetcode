-- Write your PostgreSQL query statement below
WITH uniq_coords AS (
  SELECT *, 
    COUNT(*) OVER (PARTITION BY lat, lon) AS LOCATION,
    COUNT(*) OVER (PARTITION BY tiv_2015) AS TIVS_SHARED
  FROM Insurance
)
SELECT
    ROUND(SUM(tiv_2016)::DECIMAL, 2) AS tiv_2016 
FROM
    uniq_coords
WHERE
    LOCATION = 1 AND  TIVS_SHARED > 1;
