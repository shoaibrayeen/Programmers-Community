#include<bits/stdc++.h>  //contains standard libraries.
using namespace std; 
struct Node 
{ 
    int data; 
    Node* left, *right; 
}; 
  
/* Given two trees, return true if they both of them are 
   mirror of each other */
int areMirror(Node* a, Node* b) 
{ 
    /* Case : When both are empty */
    if (a==NULL && b==NULL) 
        return true; 
  //if either of them is empty 
    if (a==NULL || b == NULL) 
        return false; 
  
    /* If both are non-empty, compare them recursively 
     Note that in recursive calls, we pass left 
     of one tree and right of other tree */
    return  a->data == b->data && 
            areMirror(a->left, b->right) && 
            areMirror(a->right, b->left); 
} 
  
Node* newNode(int data) 
{ 
    Node* node = new Node; 
    node->data  = data; 
    node->left  =  node->right  = NULL; 
    return(node); 
} 
  
/* Driver program to test areMirror() */
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
  
    areMirror(a, b)? cout << "Yes, They are Mirror Images." : cout << "No, They are not Mirror Images."; 
  
    return 0; 
} 

