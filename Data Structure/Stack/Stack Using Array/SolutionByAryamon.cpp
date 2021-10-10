//To apply concept of stacks
#include <conio.h>
#include <iostream.h>
#include <process.h>

#define size 100

int top = -1;
int* a = new int[size];

int isempty()
{
    if (top == -1) {
        return 0; //empty
    }
    return 1;
}

int isfull()
{
    if (top == size - 1) {
        return 0; //full
    }
    return 1;
}

void push(int val)
{
    if (isfull() == 0) {
        cout << "\nStack is full\n "; //overflow
        return;
    }
    ++top;
    a[top] = val;
}

int pop()
{
    if (isempty() == 0) {
        cout << "\nStack is empty\n ";
        return -1;
    }
    return a[top--];
}
void display()
{
    for (int i = top; i >= 0; i--) {
        cout << a[i] << "\t";
    }
}
void main()
{
    char ch;
    int val;
    clrscr();
    int top = -1;
    while (1) {
        cout << "\n**********MAIN MENU*******\n";
        cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cout << "\nEnter your option\n ";
        cin >> ch;
        switch (ch) {
        case '1':
            cout << "\nEnter Value\t:\t";
            cin >> val;
            push(val);
            break;

        case '2':
            int retVal = pop();
            if (retVal != -1) {
                cout << "\nPopped Element\t:\t" << retVal;
            }
            break;

        case '3':
            display();
            break;
        case '4':
            exit(0);

        default:
            cout << "\nInvalid choice\n";
        }
    }
    getch();
}
