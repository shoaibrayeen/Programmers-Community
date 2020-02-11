/*
    Write a program to implement Queue using linkedlist.

    Functions to implement
        Enqueue (Insertion)
        Dequeue (Deletion)

*/
#include<iostream>
using namespace std;

struct linkedlist
{
  int data;
  linkedlist *next;

};
class stack_linkedList
{
    public:
    linkedlist *front;
    linkedlist *rear;
    stack_linkedList()
    {
        front=rear=NULL;
    }
    void enqueue(int);
    int dequeue();
    void display();

};
void stack_linkedList::enqueue(int ele)
{
    linkedlist *temp=new linkedlist();
    temp->data=ele;
    temp->next=NULL;

    if(front==NULL)
        front=rear=temp;
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
int stack_linkedList::dequeue()
{
    linkedlist *temp;
    int ele;
    if(front==NULL)
        cout<<"\nStack is empty";
    else
    {
        temp=front;
        ele=temp->data;
        cout << "\nDequeued Element\t:\t" << ele << endl;
        if(front==rear)                                         //if length of queue is 1;
            rear=rear->next;
        front=front->next;
        delete(temp);
    }
    return ele;
}
void stack_linkedList::display()
{
    if(front==NULL)
        cout<<"\nStack is empty";
    else
    {
        linkedlist *temp;
        temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

int main()
{
    int op,data;
    stack_linkedList ob;
    cout<<"\n1. enqueue(Insertion) ";
    cout<<"\n2. dequeue(Deletion)";
    cout<<"\n3. Display";
    cout<<"\n4. Exit";
    while(1)
    {
        cout<<"\nEnter your choice ";
        cin>>op;
        if(op==1)
        {
            cout<<"Enter data ";
            cin>>data;
            ob.enqueue(data);
        }
        else if(op==2)
            data=ob.dequeue();
        else if(op==3)
            ob.display();
        else if(op==4)
            exit(0);
        else
            cout<<"\nWrong choice ";

    }
}
