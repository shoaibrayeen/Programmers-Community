## Given a binary tree, print boundary nodes of the binary tree Anti-Clockwise starting from the root.

We break the problem in 3 parts:

- Print the left boundary in top-down manner.
- Print all leaf nodes from left to right, which can again be sub-divided into two sub-parts:

```
   Print all leaf nodes of left sub-tree from left to right.
   Print all leaf nodes of right sub-tree from left to right.
```

- Print the right boundary in bottom-up manner.

## We need to take care of one thing that nodes are not printed again.

    The left most node is also the leaf node of the tree.

## Left View

```
Input : 
                 1
               /   \
              2     3
             / \     \
            4   5     6             
Output : 1 2 4

Input :
        1
      /   \
    2       3
      \   
        4  
          \
            5
             \
               6
Output :1 2 4 5 6
```
      
