### Given an array of numbers where each element represents the max number of jumps that can be made forward from that element. For each array element, count number of ways jumps can be made from that element to reach the end of the array. If an element is 0, then move cannot be made through that element. The element that cannot reach to the end should have a count “-1”.

```
Input : {3, 2, 0, 1}
Output : 2 1 -1 0
For 3 number of steps or jumps that 
can be taken are 1, 2 or 3. The different ways are:
3 -> 2 -> 1
3 -> 1

For 2 number of steps or jumps that 
can be taken are 1, or 2. The different ways are:
2 -> 1

For 0 number of steps or jumps that 
can be taken are 0. 
One cannot move forward from this point.

For 1 number of steps or jumps that 
can be taken are 1. But the element is at
the end so no jump is required.

Input : {1, 3, 5, 8, 9, 1, 0, 7, 6, 8, 9}
Output : 52 52 28 16 8 -1 -1 4 2 1 0
```
