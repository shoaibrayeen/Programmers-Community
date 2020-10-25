### Given an array arr[] of n numbers and a number K, find the number of subsets of arr[] having XOR of elements as K
```

Input:   arr[]  = {6, 9, 4,2}, k = 6
Output:  2
The subsets are {4, 2} and {6}

Input:   arr[]  = {1, 2, 3, 4, 5}, k = 4
Output:  4
The subsets are {1, 5}, {4}, {1, 2, 3, 4}
                and {2, 3, 5}
```

### Dynamic Programming Approach -> O(n*m)
```
We define a number m such that m = pow(2,(log2(max(arr))+1))­ – 1.
This number is actually the maximum value any XOR subset will acquire. 
We get this number by counting bits in largest number. We create a 2D 
array dp[n+1][m+1], such that dp[i][j] equals to the number of subsets 
having XOR value j from subsets of arr[0…i-1].

We fill the dp array as following:

We initialize all values of dp[i][j] as 0.
Set value of dp[0][0] = 1 since XOR of an empty set is 0.
Iterate over all the values of arr[i] from left to right and for each arr[i],
iterate over all the possible values of XOR i.e from 0 to m (both inclusive) 
and fill the dp array asfollowing:
       for i = 1 to n:
             for j = 0 to m:
                   dp[i][j] = dp[i­-1][j] + dp[i­-1][j^arr[i-1]]
This can be explained as, if there is a subset arr[0…i­-2] with XOR value j, 
then there also exists a subset arr[0…i-1] with XOR value j. also if there 
exists a subset arr[0….i-2] with XOR value j^arr[i] then clearly there exist 
a subset arr[0…i-1] with XOR value j, as j ^ arr[i-1] ^ arr[i-1] = j.
Counting the number of subsets with XOR value k: Since dp[i][j] is the number 
of subsets having j as XOR value from the subsets of arr[0..i-1], then the number
of subsets from set arr[0..n] having XOR value as K will be dp[n][K]
```
