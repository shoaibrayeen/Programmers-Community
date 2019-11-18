/*
       A linked list is given and you need to search an Element in the Linked List
*/
#include<iostream>
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
bool IsFound(int ele)
{
    t=first;
    if(t==NULL)
        cout<<"\nList is empty";
    while(t!=NULL)
    {
        if(t->data==ele)
            return 1;
        t=t->next;

    }
}


int main()
{
    char choice;
    int element;

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


    cout<<"Enter an element you want to search ";
    cin>>element;

    bool check=IsFound(element);
    if(check==1)
        cout<<"\nYES";
    else
        cout<<"\nNO";




}
