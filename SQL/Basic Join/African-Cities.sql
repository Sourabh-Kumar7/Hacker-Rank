-- Problem Statement : https://www.hackerrank.com/challenges/african-cities/problem

SELECT c.NAME FROM CITY AS c JOIN COUNTRY AS co ON c.COUNTRYCODE=co.CODE WHERE co.CONTINENT = "Africa";
