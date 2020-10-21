-- Problem Statement : https://www.hackerrank.com/challenges/asian-population/problem

SELECT SUM(CITY.POPULATION) 
  FROM CITY JOIN COUNTRY 
  ON COUNTRY.CODE=CITY.COUNTRYCODE 
  WHERE COUNTRY.CONTINENT = "Asia";
