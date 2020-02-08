/*
    A linked list is given and you need to find length of the linked list.
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


int listLength()
{
     int count=1;
     t=first;
     while(t->next!=NULL)
     {
            count++;
            t=t->next;
     }

     return count;

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
        cout<<"\nLength of linked list "<<listLength();
    }
    else
        cout<<"Length of linked list is 0 ";


}
