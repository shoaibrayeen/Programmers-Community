#include <bits/stdc++.h>

using namespace std;

struct node
    {
        int data;
        node*next;
    };

 // reverse a linked list
node* rev(node*head)
{
    node*currentnode=head;  //for traversing the list
    node*prev=0;   // stores the address of previous node
    node*nextnode=head;   // stores the address of the next node so that link is not broken

  while(nextnode!=0){
    nextnode=nextnode->next;
    currentnode->next=prev;
    prev=currentnode;
    currentnode=nextnode;
               }
      return prev;
}

// print the linked list
void display(node*head){

    node*temp=head;
    while(temp!=0){
    cout << temp->data << " ";
        temp=temp->next;
             }

}

int main()
{

    node*head=0,*temp;
    int count; // count stores the no of nodes in the linked list
    cin >> count;

    while(count--){
        node*newnode=new node();
        cin >> newnode->data; // enter the element
        newnode->next=0;
        if(head==0)
            head=temp=newnode;
        else {
            temp->next=newnode;
            temp=newnode;
            }
                }
           head=rev(head); // stores the head of the reversed linked list

            display(head);
    return 0;
}
