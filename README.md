# Nokia-CodeRally2016

Nokia CodeRally 2016- Programming questions and solutions.

# 1) Milly and her home

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
    Test case #2: Go to x = 1 by 1 step then move backwards by 2 steps to reach x = -1 and then move forward by 3 steps via 0 to reach x =2


# 2) Navi's Party

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


# 3) Rhezo and Divisibility by 7

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


# 4)Yu-eS Counting Arrays.

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

# 5) Vinay Queried
Xeta Institute of Technology just concluded its annual Coding Workshop. Students and Professionals from all across the globe attended this workshop. The workshop was marked by the presence of some esteemed personalities.

Our friend Vinay was also a part of this Workshop. He attended the String section of the workshop. He learnt some really cool and new tricks. Vinay interacted with many people out there. This broadened his mind set and imagination powers. One of the people with whom he interacted taught him a new concept. The guy explained the concept of Cruel Pairs to Vinay.

A Cruel Pair is denoted by two integers X and Y such that X<=Y. Since the session was on string so this concept was applied on it. The guy gave Vinay a Target String . This string was composed of numerical digits and it may contain leading zeroes. Whenever one applies a Cruel Pair on a string it gives him a new string that is carved out of the given string .

For example when a Cruel Pair (1,3) is applied on 'harsh' it gives 'har' as the output. The new string starts from index X and ends on index Y. Vinay was totally fine till now.

After that he started giving him some Query Strings one after the other. This Query String may also contain leading zeroes. For each such Query String he wanted Vinay to tell him the total number of such distinct Cruel Pairs such that the new string that is produced by applying the Cruel Pair on the Target String is strictly numerically greater than the Query String. For example 12 is strictly numerically greater than 9 and 25 is strictly numerically greater than 009.

Vinay did not had answers to his question. Since Vinay was a fighter he did not gave up . You are his best friend so he came to you with this question and decided to solve it together. Help Vinay in solving this problem.



Input:

    The first line contains N denoting the length of Target String. This line is followed by the Target String. The Target String is followed by an integer Q denoting the number of queries asked. After this Q lines follow each line containing a Query String.

Output:

    For each query output the total number of distinct Cruel Pairs that satisfies the given conditions.

Constraints:

    1 < = N <= 5000
    1 <= Q <= 10 4
    Sum of Lengths of all Query Strings <= 106

    All strings are composed only of '0' - '9' .
    
# 5) Illay and Tree

Illya likes graphs a lot. His favourite type of graph is tree. Illya invented many problems with it, but he can't solve them. He asked you to solve one of them.

You are given a weighted tree T with 
    
    n
    n nodes. The tree is rooted at node 1. You are also given 
    q
    q queries to it. Queries can be one of two types:

    1 i z - change the weight of i-th edge to z.

    2 v - find the maximum distance between two distinct nodes in the subtree of node v
    
Input:

    The first line of input contains two integers n and q. The next n-1 lines contain three integers x, y, z, denoting an undirected edge from x to y with weight z. Next q lines contains queries as described above.

Output:

    For each query of 2nd type output answer for it in a single line.

Constraints:

    1 ≤ n, q ≤ 105
    1 ≤ x, y, v ≤ n
    1 ≤ i ≤ n-1
    1 ≤ z ≤ 109

SAMPLE INPUT    
    
    5 5
    1 2 1
    1 3 2
    2 4 2
    2 5 3
    2 1
    2 2
    2 3
    2 4
    2 5
SAMPLE OUTPUT 
    
    6
    5
    0
    0
    0
Explanation
        
        For the 1st query we can choose nodes 3 and 5, answer is 6. For the 2nd query we can choose nodes 4 and 5, answer is 5. For other queries answer is 0.
