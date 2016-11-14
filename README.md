# Nokia-CodeRally2016

Nokia CodeRally 2016- Programming questions and solutions.

1).Milly and her home

Milly is playing a famous game in a straight road where she will start from 0th location and she can move forward or backwards. She will start with 1 step and then she will always move 1 step more than the last moved steps. This straight road has infinite number of positions from negative to positive. Her home is located at Lth position. Your task is to tell her the minimum number of moves she must try to reach her home from 0th location.

Input:
First line of the input will contain T(No. of test cases).
Every test case will consist of only one integer denoting L (location of her home)

Output:
For every test case, print the required answer in a new line.

Constraints:
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

Input:
First line of the input will contain two space separated integers denoting N (No. of names of some invited guests) and Q (Total number of persons present in the party).
Next N lines will contain strings denoting the names of the persons(one name per line and can be repetitive).
Next Q lines will contain either an integer denoting the age or a string denoting the name of a person.
Output

Output:
the minimal number of people you should check as asked above.

Constraints:
1 ≤ N ≤ 103
1 ≤ Q ≤ 105
1 ≤ Age ≤ 50
1 ≤ |Name| ≤ 50
Here | | denotes a length of the string and characters in this string ∈ {a, b, c ..., z}.

Sample Input 
2 4
pranjul
sachin
21
19
pranjul
vipul

Sample Output
2

Explanation:
You are required to check the persons with having age = 19 and name = Vipul


3). Rhezo and Divisibility by 7

He has a big number of N digits and Q questions. In each of the question, he wants to find if the number formed by the string between indices Li and Ri is divisible by 7 or not. As he is very weak at programming, you should help him in this task.

Input:
First line contains the number consisting of N digits. Next line contains Q, denoting the number of questions. Each of the next Q lines contains 2 integers Li and Ri.

Output:
For each question, print "YES" or "NO", if the number formed by the string between indices Li and Ri is divisible by 7.

Constraints:
1 ≤N ≤ 10^5
1 ≤ Q ≤ 10^5
1 ≤ Li,Ri ≤ N

Sample Input
357753
3
1 2
2 3
4 4

Sample Output
YES
NO
YES

For the first query, number will be 35 which is clearly divisible by 7.


4)Yu-eS Counting Arrays.

Yu and eS, the two brothers, have come home after a very long and tiring journey. The younger brother eS is still full of energy and wants to play with Yu. Yu is totally exhausted and wants some sleep. In no mood to play, Yu agrees to play only if eS solves the following problem. Yu gives eS two integers N and M. He asks eS to consider an array A containing N elements with each element being a positive integer ≤M. Yu further goes on by defining a function F(k) = Number of such arrays A with exactly K distinct elements. He asks eS to calculate F(K) ∀ k∈[1..M].

After giving him a devilish grin, Yu went back to sleep. eS realized that it would take him a millennia to count the number of arrays. Can you help the poor lad to have some playtime with his indolent brother.

INPUT
The first line contains two space separated integers N and M.

OUTPUT
Print M space separated integers F(1) F(2) … F(M). Since the values can be quite large print them modulo 10^9+7.

Sample Input
3 2

Sample Output
2 6 

