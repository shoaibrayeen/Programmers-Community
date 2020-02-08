# Given A Binary Tree and you need to check if all leaves are at same level or not.

# Structure of Binary Tree
```
  Integer Data
  Pointer to Left Node
  Pointer to Right Node
```

# Input
- Pointer to root of the Binary Tree

# Output
- 'YES' if all leaves are at same level
- 'NO' Otherwise


```

          12
        /    \
      5       7       
    /          \ 
   3            1
  Leaves are at same level

          12
        /    \
      5       7       
    /          
   3          
   Leaves are Not at same level


          12
        /    
      5             
    /   \        
   3     9
  /      /
 1      2
 Leaves are at same level
 ```
