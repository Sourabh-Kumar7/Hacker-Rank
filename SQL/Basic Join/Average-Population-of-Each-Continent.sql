-- Problem Statement : https://www.hackerrank.com/challenges/average-population-of-each-continent/problem

SELECT co.CONTINENT, FLOOR(AVG(c.POPULATION)) FROM COUNTRY AS co JOIN CITY AS c ON co.CODE=c.COUNTRYCODE GROUP BY co.CONTINENT;
