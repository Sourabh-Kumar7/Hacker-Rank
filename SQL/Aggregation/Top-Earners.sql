-- Problem Statement : https://www.hackerrank.com/challenges/earnings-of-employees/problem

SELECT (MONTHS*SALARY)AS EARNING, COUNT(*) FROM EMPLOYEE GROUP BY 1 ORDER BY EARNING DESC LIMIT 1;
