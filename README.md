# Nokia-CodeRally2016

Nokia CodeRally 2016- Programming questions and solutions.

1).Milly and her home

Milly is playing a famous game in a straight road where she will start from 0th location and she can move forward or backwards. She will start with 1 step and then she will always move 1 step more than the last moved steps. This straight road has infinite number of positions from negative to positive. Her home is located at Lth position. Your task is to tell her the minimum number of moves she must try to reach her home from 0th location.

Input

First line of the input will contain T(No. of test cases).
Every test case will consist of only one integer denoting L (location of her home)

Output

For every test case, print the required answer in a new line.

Constraints

1 ≤ T ≤ 1000

-109 ≤ L ≤ 109

Sample Input
2
3
2

Sample Output
2
3

Explanation
Test case #1: Go to x = 1 by 1 step and then go to x = 3 by 2 steps.
Test case #2: Go to x = 1 by 1 step then move backwards by 2 steps to reach x = -1 and then move forward by 3 steps via 0 to reach x = 


2). Navi's Party

Navi's party is going on and there are many people that are in this party. Navi is very busy in attending his guests. He has no time to check if there is any non-invited guest or not. You are required to help him.

All the people with having their age more than 20 are surely his invited guests. For every one of them you can determine either the age or the name of the person. You can check any person, i.e. learn his/her age or his/her name at the same time. What minimal number of people you should check additionally to make sure that there are no non-invited guests.

Input

First line of the input will contain two space separated integers denoting N (No. of names of some invited guests) and Q (Total number of persons present in the party).
Next N lines will contain strings denoting the names of the persons(one name per line and can be repetitive).
Next Q lines will contain either an integer denoting the age or a string denoting the name of a person.
Output

Output the minimal number of people you should check as asked above.
Constraints

1 ≤ N ≤ 103
1 ≤ Q ≤ 105
1 ≤ Age ≤ 50
1 ≤ |Name| ≤ 50
Here | | denotes a length of the string and characters in this string ∈ {a, b, c ..., z}.

SAMPLE INPUT 
2 4
pranjul
sachin
21
19
pranjul
vipul

SAMPLE OUTPUT 
2

Explanation
You are required to check the persons with having age = 19 and name = Vipul
