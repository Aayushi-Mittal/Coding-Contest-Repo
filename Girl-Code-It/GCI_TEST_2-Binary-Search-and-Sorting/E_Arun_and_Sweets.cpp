/*

As Diwali is a few days away , Arun wants to set up a shop to sell sweets having N counters. The counters are located along a straight line at positions x1, x2 ,. . . , xN .

He has C types of sweets and he wants to put one type of sweets on one counter such that the minimum distance between any two type of sweets is as large as possible. (As some counters may remain empty).So what is the largest minimum distance between two counters having sweets on them ?
Constraints
2 <= N <= 105
0 <= xi <= 109
2 <= C <= N

Input
Line 1 : The number of test cases, then t test cases follows.
Line 2: Two space-separated integers: N and C
Next N Integers contains location X of counters .
Output
For each test case output one integer: the largest minimum distance.
Example
Input:

1
5   3
1   2   10   5   12
Output:

4
Output details:

Arun can put his 3 sweets on the counter at positions 1, 5 ,10, or 1 , 5 , 12 resulting in a minimum distance of 4 .

*/