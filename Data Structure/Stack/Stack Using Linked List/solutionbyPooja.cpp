/*
    Write a program to implement Stack using Linked List..

    Functions to implement
        Push (Insertion)
        Pop (Deletion)

*/
#include <iostream>
using namespace std;

struct linkedlist {
    int data;
    linkedlist* next;
};
class stack_linkedList {
public:
    linkedlist* top;
    stack_linkedList()
    {
        top = NULL;
    }
    void push(int);
    int pop();
    void display();
};
void stack_linkedList::push(int ele)
{
    linkedlist* temp = new linkedlist();
    temp->data = ele;
    temp->next = NULL;

    if (top == NULL)
        top = temp;
    else {
        temp->next = top;
        top = temp;
    }
}
int stack_linkedList::pop()
{
    linkedlist* temp;
    int ele;
    if (top == NULL) {
        cout << "\nStack is empty";
        return 0;
    } else {
        temp = top;
        ele = temp->data;
        top = top->next;
        delete (temp);
    }
    cout << "\n Popped Element\t:\t " << ele << endl;
    return ele;
}
void stack_linkedList::display()
{
    if (top == NULL)
        cout << "\nStack is empty";
    else {
        linkedlist* temp;
        temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{
    int op, data;
    stack_linkedList ob;
    cout << "\n1. Push(Insertion) ";
    cout << "\n2. Pop(Deletion)";
    cout << "\n3. Display";
    cout << "\n4. Exit";
    while (1) {
        cout << "\nEnter your choice ";
        cin >> op;
        if (op == 1) {
            cout << "Enter data";
            cin >> data;
            ob.push(data);
        } else if (op == 2) {
            data = ob.pop();

        } else if (op == 3)
            ob.display();
        else if (op == 4)
            exit(0);
        else
            cout << "\nWrong choice ";
    }
}
