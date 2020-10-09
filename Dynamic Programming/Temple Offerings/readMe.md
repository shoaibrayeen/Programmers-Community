### Consider a devotee wishing to give offerings to temples along a mountain range. The temples are located in a row at different heights. Each temple should receive at least one offering. If two adjacent temples are at different altitudes, then the temple that is higher up should receive more offerings than the one that is lower down. If two adjacent temples are at the same height, then their offerings relative to each other does not matter. Given the number of temples and the heights of the temples in order, find the minimum number of offerings to bring.

```
Input  : 3
         1 2 2
Output : 4
All temples must receive at-least one offering.
Now, the second temple is at a higher altitude
compared to the first one. Thus it receives one
extra offering. 
The second temple and third temple are at the 
same height, so we do not need to modify the 
offerings. Offerings given are therefore: 1, 2,
1 giving a total of 4.

Input  : 6
         1 4 3 6 2 1
Output : 10
We can distribute the offerings in the following
way, 1, 2, 1, 3, 2, 1. The second temple has to 
receive more offerings than the first due to its 
height being higher. The fourth must receive more
than the fifth, which in turn must receive more 
than the sixth. Thus the total becomes 10.
```
