/*
    A linked list is given and you need to find middle element of the linked list.
    If the length of the linked list is even, You can return element at Size/2 Position..
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


int listLength()
{
     int count=0;
     t=first;
     if(first==NULL)
        return count;
     while(t!=NULL)
     {
            count++;
            t=t->next;
     }

     return count;

}
int middle_element(int length)
{
    temp=first;

    if(length%2!=0)
    {
          for(int i=1;i<=length/2;i++)
                temp=temp->next;

    }
    else
    {
          for(int i=1;i<length/2;i++)
                temp=temp->next;
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
    int len=listLength();
    if(len==0)
        cout<<"List is empty . NO middle element";
    else
        cout<<middle_element(len);



}
