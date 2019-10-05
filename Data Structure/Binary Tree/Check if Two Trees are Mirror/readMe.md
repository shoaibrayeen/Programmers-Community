# Two Binary Trees are Given and you need to check if they are mirror to one another.

# Structure of Binary Tree
```
  Integer Data
  Pointer to Left Node
  Pointer to Right Node
```

# Input
- Pointer to root of 1st Binary Tree
- Pointer to root of 2nd Binary Tree

# Output
- 'YES' if they are mirror to one another
- 'NO' Otherwise





/* Structure for creating a node  which takes three parameters value left child and right child*/
struct Node 
{ 
    int data; 
    Node* left, *right; 
}; 
  
  
 /*Function to check whether the trees are mirror images of each other or not*/
int areMirror(Node* a, Node* b) 
{ 
    /* Both empty i.e for root node , as the root node of binary and its mirror will be same */ 
    if (a==NULL && b==NULL) 
        return true; 
  
    /* If only one is empty then it means that the one other is not null ,then they are not mirror images*/ 
    if (a==NULL || b == NULL) 
        return false; 
  
    /* Both non-empty, compare them recursively we pass left 
     of one tree and right of other tree */
    return  a->data == b->data && 
            areMirror(a->left, b->right) && 
            areMirror(a->right, b->left); 
} 
  
/* function that dynamically allocates a new node using the new keword */
Node* newNode(int data) 
{ 
    Node* node = new Node; 
    node->data  = data; 
    node->left  =  Null;
    node->right  = NULL; 
    return(node); 
} 
  
/* Program /main() function to check whether the binary tree are mirror images of each other  */
int main() 
{ 
    Node *a = newNode(1); 
    Node *b = newNode(1); 
    a->left = newNode(2); 
    a->right = newNode(3); 
    a->left->left  = newNode(4); 
    a->left->right = newNode(5); 
  
    b->left = newNode(3); 
    b->right = newNode(2); 
    b->right->left = newNode(5); 
    b->right->right = newNode(4); 
  
    areMirror(a, b)? cout << "Yes" : cout << "No"; 
  
    return 0; 
} 
