### Consider a row of n coins of values v1 . . . vn, where n is even. We play a game against an opponent by alternating turns. In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin. Determine the maximum possible amount of money we can definitely win if we move first.

Note: The opponent is as clever as the user.

```
    1. 5, 3, 7, 10 : The user collects maximum value as 15(10 + 5)

    2. 8, 15, 3, 7 : The user collects maximum value as 22(7 + 15)
 

Does choosing the best at each move give an optimal solution?

No. In the second example, this is how the game can finish:

1.
…….User chooses 8.
…….Opponent chooses 15.
…….User chooses 7.
…….Opponent chooses 3.
Total value collected by user is 15(8 + 7)
2.
…….User chooses 7.
…….Opponent chooses 8.
…….User chooses 15.
…….Opponent chooses 3.
Total value collected by user is 22(7 + 15)
```

So if the user follows the second game state, maximum value can be collected although the first move is not the best.

There are two choices:

1. The user chooses the ith coin with value Vi: The opponent either chooses (i+1)th coin or jth coin. The opponent
   intends to choose the coin which leaves the user with minimum value. i.e. The user can collect the value Vi + min(F(
   i+2, j), F(i+1, j-1) )
   coinGame1


2. The user chooses the jth coin with value Vj: The opponent either chooses ith coin or (j-1)th coin. The opponent
   intends to choose the coin which leaves the user with minimum value. i.e. The user can collect the value Vj + min(F(
   i+1, j-1), F(i, j-2) )
   coinGame2

Following is recursive solution that is based on above two choices. We take the maximum of two choices.

```
F(i, j)  represents the maximum value the user can collect from 
         i'th coin to j'th coin.

    F(i, j)  = Max(Vi + min(F(i+2, j), F(i+1, j-1) ), 
                   Vj + min(F(i+1, j-1), F(i, j-2) )) 
Base Cases
    F(i, j)  = Vi           If j == i
    F(i, j)  = max(Vi, Vj)  If j == i+1
``` 
