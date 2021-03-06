# a_circle_of_numbers
Given a positive integer n, compute the circle(s) composed by the numbers from 1 to n, such that the sum of each two neighboring numbers on the circle is a prime, where 1 &lt;= n &lt;= 17.

```
make
./circle_with_prime_sum

input:
8
output:
1 2 3 8 5 6 7 4
1 2 5 8 3 4 7 6
1 4 7 6 5 8 3 2
1 6 7 4 3 8 5 2
4
```

Please refer to [Write a program to print all permutations of a given string](https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/) for the algorithm involved.

tree.c is a better implementation using tree data structure.
```
gcc -o tree tree.c -lm
./tree
input n:
8
output:
1 2 3 8 5 6 7 4 
1 2 5 8 3 4 7 6 
1 4 7 6 5 8 3 2 
1 6 7 4 3 8 5 2 
4
```
