# Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, How many ways can we make the change? The order of coins doesn’t matter.

# Constraints
-  1 < N <= 10^6
-  0 < S <= 10^9

# Input
- N
- Array S 

# Output
- Number of Ways we can make the change

```
  N = 4
  S = [ 1, 2, 3 ]
  Output = 4
  There are four solutions: [ 1, 1, 1, 1 ],
                            [ 1, 1, 2 ],
                            [ 2, 2 ],
                            [ 1, 3 ]. 
 So output should be 4. 
```

