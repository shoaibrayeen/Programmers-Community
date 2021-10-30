# First element at least X

You are given an array of size n.  You will be given m range queries and point updates on the array. Queries and updates on the array will be of the type given below

1 i v: Update a[i] to v
2 x: Find the minimum index j such that a[j] >= x. If there is no such index, print -1.

### Constraints
1 <= n, m <= 105
0 <= x <= 109

### Example input
5 7
1 3 2 4 6
2 2
2 5
1 2 5
2 4
2 8
1 3 7
2 6

### Output
1
4
2
-1
3

### Approach
Main idea: Segment Tree + Binary Search.
1.	Make a segment tree of max queries and update. 
2.	Binary Search on the interval [0,n-1], starting from lo=0 and hi=n-1 and keep updating the ans index (i.e. the minimum mid such that a[mid] >= x).
