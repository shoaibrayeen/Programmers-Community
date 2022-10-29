#include <iostream>
using namespace std;

int ele, val;

struct Node {
    int data;
    struct Node* next;
}* top = NULL;

int push(int ele)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = ele;
    newnode->next = top;
    top = newnode;
    return 0;
}

int pop()
{
    if (top == NULL) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << "Element popped : " << top->data << endl;
        top = top->next;
    }
    return 0;
}

int display()
{
    struct Node* temp;
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
    } else {
        temp = top;
        cout << "Elements are: " << endl;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    cout << "\n";
    return 0;
}

int main()
{
    cout << "1: Push in stack" << endl;
    cout << "2: Pop from stack" << endl;
    cout << "3: Display stack" << endl;
    cout << "4: Exit" << endl;
    do {
        cout << "Enter choice: " << endl;
        cin >> val;
        switch (val) {
        case 1:
            cout << "Enter element to push: " << endl;
            cin >> ele;
            push(ele);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (val != 4);
    return 0;
}