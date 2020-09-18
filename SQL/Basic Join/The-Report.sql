-- Problem Statement : https://www.hackerrank.com/challenges/the-report/problem

SELECT IF(g.GRADE<8,NULL,s.NAME), g.GRADE, s.MARKS FROM STUDENTS AS s JOIN GRADES AS g ON s.MARKS>=g.MIN_MARK AND s.MARKS<=MAX_MARK ORDER BY g.GRADE DESC, s.NAME ASC,s.MARKS;
