# Optimal Merge Pattern

**You are given n files, with their computation times in an Array. You can perform the following operation.**

## Operation: 

Choose/ take any two files, add their computation times and append it to the list of computation times. {Cost = Sum of computation times}

Do this until we are left with only one file in the array. We have to do this operation so that we can get the minimum cost finally.

### Approach
1.	Push all elements to a min heap.
2.	Take the top 2 elements one by one, and add the cost to the answer. Push the merged file to the min heap.
3.	When a single element remains, output the cost.


