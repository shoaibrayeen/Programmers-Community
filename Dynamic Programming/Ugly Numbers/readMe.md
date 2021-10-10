### Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 25 … shows some ugly numbers. By convention, 1 is included.

```
1st Approach - Brute force - Loop running till ugly number 
2nd Approach - Dynamic Programming - We can find that every subsequence is the ugly-sequence itself (1, 2, 3, 4, 5, etc)
multiply 2, 3, 5. Thento get every ugly number from the three subsequence. Every step we choose the smallest one, and move one step after.
```
