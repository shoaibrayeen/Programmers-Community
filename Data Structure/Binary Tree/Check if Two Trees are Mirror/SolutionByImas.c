#include <stdio.h>
#include <stdbool.h>

typedef struct s_node Node;

struct s_node {
  int value;
  Node* left;
  Node* right;
};

bool two_trees_mirror(Node* a, Node* b) {
  if (a == NULL && b == NULL) {
    return true;
  }

  if (a == NULL || b == NULL) {
    return false;
  }

  return a->value == b->value && two_trees_mirror(a->left, b->right) && two_trees_mirror(a->right, b->left);
}

int main(void) {
    Node a = {50, NULL, NULL}; 
    Node b = {50, NULL, NULL}; 
    
    Node aLeft = {1, NULL, NULL};
    Node aRight = {512, NULL, NULL};
    Node aLeftLeft = {400, NULL, NULL};
    Node aLeftRight = {-12, NULL, NULL};

    Node bLeft = {512, NULL, NULL};
    Node bRight = {1, NULL, NULL};
    Node bRightLeft = {-12, NULL, NULL};
    Node bRightRight = {400, NULL, NULL};

    aLeft.left = &aLeftLeft;
    aLeft.right = &aLeftRight;
    bRight.left = &bRightLeft;
    bRight.right = &bRightRight;

    a.left = &aLeft;
    a.right = &aRight;
    b.left = &bLeft;
    b.right = &bRight;

    bool areMirror = two_trees_mirror(&a, &b);
    if(areMirror) {
      printf("A and B are mirrored trees");
    } else {
      printf("A and B are not mirrored trees");
    }
    
}
