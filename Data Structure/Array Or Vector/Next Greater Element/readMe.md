# Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.
- For any array, rightmost element always has next greater element as -1.
- For an array which is sorted in decreasing order, all elements have next greater element as -1.
- For the input array [4, 5, 2, 25}, the next greater elements for each element are as follows.
```
Element       NGE
   4      -->   5
   5      -->   25
   2      -->   25
   25     -->   -1
```
- For the input array [13, 7, 6, 12}, the next greater elements for each element are as follows.
```
  Element        NGE
   13      -->    -1
   7       -->     12
   6       -->     12
   12     -->     -1
 ```
# Constraints
-  1 < size Of Array <= 10^6
-  0 < Array Elements <= 10^9

# Input
- Array
- Its Size

# Output
- Array containing Next Greater Element

