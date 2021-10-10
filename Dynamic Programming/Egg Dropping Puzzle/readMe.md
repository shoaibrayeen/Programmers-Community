## Given n eggs and k floors, find the minimum number of trials needed in worst case to find the floor below which all floors are safe. A floor is safe if dropping an egg from it does not break the egg. Please see n eggs and k floors. for complete statements

```
Input : n = 2, k = 10
Output : 4
We first try from 4-th floor. Two cases arise,
(1) If egg breaks, we have one egg left so we
    need three more trials.
(2) If egg does not break, we try next from 7-th
    floor. Again two cases arise.
We can notice that if we choose 4th floor as first
floor, 7-th as next floor and 9 as next of next floor,
we never exceed more than 4 trials.

Input : n = 2. k = 100
Output : 14
```

## The following is a description of the instance of this famous puzzle involving n=2 eggs and a building with k=36 floors.

## Suppose that we wish to know which stories in a 36-story building are safe to drop eggs from, and which will cause the eggs to break on landing. We make a few assumptions:

- An egg that survives a fall can be used again.
- A broken egg must be discarded.
- The effect of a fall is the same for all eggs.
- If an egg breaks when dropped, then it would break if dropped from a higher floor.
- If an egg survives a fall then it would survive a shorter fall.
- It is not ruled out that the first-floor windows break eggs, nor is it ruled out that the 36th-floor do not cause an
  egg to break.

## If only one egg is available and we wish to be sure of obtaining the right result, the experiment can be carried out in only one way. Drop the egg from the first-floor window; if it survives, drop it from the second floor window. Continue upward until it breaks. In the worst case, this method may require 36 droppings. Suppose 2 eggs are available. What is the least number of egg-droppings that is guaranteed to work in all cases? The problem is not actually to find the critical floor, but merely to decide floors from which eggs should be dropped so that total number of trials are minimized.
