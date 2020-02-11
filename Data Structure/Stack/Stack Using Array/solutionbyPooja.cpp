/*
    Write a program to implement Stack using array.

    Functions to implement
        Push (Insertion)
        Pop (Deletion)

*/
#include<iostream>
using namespace std;
#define MAXSIZE 10
class stack_Array
{
    int top;
    int size;
    public:
    stack_Array()
    {
        top=-1;
        size=MAXSIZE;
    }
    int *arr=new int[size];
    void push(int);
    int pop();
    void display();

};
void stack_Array::push(int ele)
{
    if(top==size-1)
        cout<<"\nStack is full";
    if(top<size-1)
        arr[++top]=ele;
}
int stack_Array::pop()
{
    if(top==-1)
        cout<<"\nstack is empty ";

    int d=arr[top--];
    return d;
}
void stack_Array::display()
{
    if(top==-1)
        cout<<"\nStack is empty";
    else
    {
        for(int i=top;i>=0;i--)
            cout<<arr[i]<<" ";
    }
}

int main()
{
    int op,data;
    stack_Array ob;


    cout<<"\n1. Push(Insertion) ";
    cout<<"\n2. Pop(Deletion)";
    cout<<"\n3. Display";
    cout<<"\n4. Exit";
    while(1)
    {
        cout<<"\nEnter your choice ";
        cin>>op;
        if(op==1)
        {
            cout<<"Enter data  ";
            cin>>data;
            ob.push(data);
        }
        else if(op==2)
            data=ob.pop();
        else if(op==3)
            ob.display();
        else if(op==4)
            exit(0);
        else
            cout<<"\nWrong choice ";

    }
}
