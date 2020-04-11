## A stable tower of height n is a tower consisting of exactly n tiles of unit height stacked vertically in such a way, that no bigger tile is placed on a smaller tile. An example is shown below :

## We have infinite number of tiles of sizes 1, 2, …, m. The task is calculate the number of different stable tower of height n that can be built from these tiles, with a restriction that you can use at most k tiles of each size in the tower.

## Note: Two tower of height n are different if and only if there exists a height h (1 <= h <= n), such that the towers have tiles of different sizes at height h.

```
Input : n = 3, m = 3, k = 1
Output : 1
Possible sequences: { 1, 2, 3}. 
Hence answer is 1.

Input : n = 3, m = 3, k = 2
Output : 7
{1, 1, 2}, {1, 1, 3}, {1, 2, 2},
{1, 2, 3}, {1, 3, 3}, {2, 2, 3}, 
{2, 3, 3}.
```
