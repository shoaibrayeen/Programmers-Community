#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*front = NULL,*rear = NULL,*p = NULL,*np = NULL;
void enqueue(int x)
{
    np = new node;
    np->data = x;
    np->next = NULL;
    if(front == NULL)
    {
        front = rear = np;
        rear->next = NULL;
    }
    else
    {
        rear->next = np;
        rear = np;
        rear->next = NULL;
    }
}
int dequeue()
{
    int x;
    if(front == NULL)
    {
        cout<<"empty queue\n";
    }
    else
    {
        p = front;
        x = p->data;
        front = front->next;
        dequeue();
        return(x);
    }
}
int main()
{
    int n,c = 0,x;
    cout<<"Enter the number of values to be pushed into queue\n";
    cin>>n;
    while (c < n)
    {
	cout<<"Enter the value to be entered into queue\n";
	cin>>x;
        enqueue(x);
        c++;
     }
     cout<<"\n\nRemoved Values\n\n";
     while(true)
     {
        if (front != NULL)
            cout<<dequeue()<<endl;
        else
            break;
     }
   getch();
}
