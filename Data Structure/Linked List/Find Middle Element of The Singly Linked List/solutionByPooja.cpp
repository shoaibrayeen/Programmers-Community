/*
    A linked list is given and you need to find middle element of the linked list.
    If the length of the linked list is even, You can return element at Size/2 Position.
*/
#include<iostream>
#include<cmath>
using namespace std;

struct node
{
    int data;
    node *next;
}*temp,*t;
node *first=NULL;

void insertAtEnd()
{
    temp=new node();
    cout<<"\nEnter element ";
    cin>>temp->data;
    temp->next=NULL;

    if(first==NULL)
         first=temp;
    else
    {
        t=first;
        while(t->next!=NULL)
            t=t->next;
        t->next=temp;
    }
}
int middle_element()
{
    temp=t=first;

    /*
       another approach :
       here temp will traverse one node at a time.
       while t will traverse two node at a time.
        so by doing this as t reaches the end of the linked list temp will be at middle of list.
    */

    if(first==NULL)
    {
        cout<<"list is empty ";
        return 0;
    }
    else
    {
      while(t->next!=NULL && t->next->next!=NULL)
      {
          temp=temp->next;
          t=t->next->next;
      }
    }
    return temp->data;
}


int main()
{
    char choice;

    cout<<"Do you want to enter element(y/n) ";
    cin>>choice;
    if(choice=='y')
    {
         do
        {
                insertAtEnd();
                cout<<"Do you want to add more element(y/n)";
                cin>>choice;
        }while(choice=='y');
    }
    cout<<middle_element();



}
