# Write your MySQL query statement below
SELECT stock_name,SUM(CASE WHEN operation="Buy" THEN -price ELSE price END)AS CAPITAL_GAIN_LOSS FROM STOCKS GROUP BY stock_name;