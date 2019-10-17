#include <iostream>

using namespace std;

struct Node 
{
  int data;
  struct Node* next;
  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
};

struct LinkedList 
{
  Node* head;
  LinkedList()
  {
    head = NULL;
  }
};


Node* reverse(Node* head) //input to function is head of the linked list
{
  
  if (head == NULL || head->next == NULL)
    return head;

  /* reverse the rest list and put
  the first element at the end */
  Node* rest = reverse(head->next);
  head->next->next = head;
  head->next = NULL;
  return rest;                  //returns head of the reversed list
}


void print()
{
  struct Node* temp = head;
  while (temp != NULL) 
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

void push(int data)
{
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}


int main()
{
  int ch;
  LinkedList ll;
  do
  {
    int x;
    cout<<"Enter Value for node";
    cin>>x;
    ll.push(x);
    cout<<"Do you want to continue?(0/1)";
    cin>>ch;
   
  }while(ch==1);

  cout << "Given linked list\n";
  ll.print();
  ll.head = ll.reverse(ll.head);
  cout << "\nReversed Linked list \n";
  ll.print();
  return 0;
}
