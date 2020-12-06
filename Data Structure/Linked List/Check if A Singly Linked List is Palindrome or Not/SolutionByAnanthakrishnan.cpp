#include<bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;

  Node(int d){
    data = d;
  }
  Node *ptr;
};

bool isPalindrome(Node* head){
  // This pointer will allow the first traversal
  // of the linked list
  Node* next= head;
  // Declare a stack
  stack <int> s;

  // Traverse the linked list and add its elements
  // to the stack
  while(next != NULL){
    s.push(next->data);
    next = next->ptr;
  }

  // Iterate the linked list again and
  // check by each element with the stack
  while(head != NULL ){
    int i=s.top();

    if(head -> data != i){
      return false;
    }
    // Move to the next element in stack and the list
    s.pop();
    head=head->ptr;
  }

return true;
}

// Driver Code
int main(){

  Node one =  Node(1);
  Node two = Node(3);
  Node three = Node(5);
  Node four = Node(3);
  Node five = Node(1);

  // Initialize the pointers of the Linked List
  five.ptr = NULL;
  one.ptr = &two;
  two.ptr = &three;
  three.ptr = &four;
  four.ptr = &five;
  Node* temp = &one;


  // Call function with head of the linked list
  int result = isPalindrome(&one);
  if(result == 1)
    cout<<"Linked list is a palindrome\n";
  else
    cout<<"Linked list is NOT a palindrome\n";

}
