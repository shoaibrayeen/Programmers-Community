# Longest Bitonic Subsequence
Given an array a[] of size n, our task is to find the longest bitonic subsequence

Bitonic: Unlike LIS, it can first increase and then decrease.

### Possible bitonic subsequences nature
1.	First increases then decreases
2.	Only increases
3.	Only decreases

## Optimal Solution (Using dynamic programming)
1.	Similar to the longest increasing subsequence question.
2.	Make two tables of LIS, 
a.	One from starting (LIS1)
b.	Other from end (LIS2)
3.	Iterate over both the tables/ arrays  and store the maximum of (lis1[i] + lis2[i]-1).
4.	Output this maximum value.
