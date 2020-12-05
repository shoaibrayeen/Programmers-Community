### There are n houses built in a line, each of which contain some value in it. A thief is going to steal in these houses. But he cannot steal in two adjacent houses. What is maximum value he can steal?

Approach - > Maximum stolen value from first i houses of the line can be either the maximum stolen value from first i-1 houses of the line or maximum stolen value from i-2 houses of the line plus value in ith house. So, we will choose maximum of these. We will calculate the values in bottom up manner.

```
  number of houses = 7
  values[] = 9, 3, 5, 8, 2, 4, 7
  maximum stolen value = 24 by stealing from first, fourth and seventh house
```
