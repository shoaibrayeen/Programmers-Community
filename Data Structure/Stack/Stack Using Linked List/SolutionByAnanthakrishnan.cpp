#include <algorithm>
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* push(Node* head, int x)
{

    Node* new_node = new Node(x);
    new_node->next = head;
    head = new_node;

    return head;
}

Node* pop(Node* head)
{
    cout << "\nPopped Element\t:\t" << head->data << endl;
    head = head->next;
    return head;
}

void Display(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node* head = NULL;
    int ch;
    do {
        cout << " Enter your choice " << endl;
        cout << "1. Push " << endl;
        cout << "2. Pop " << endl;
        cout << "3. Display " << endl;
        cout << "4. Exit " << endl;
        cin >> ch;

        switch (ch) {

        case 1: {
            int x;
            cout << "Enter the element " << endl;
            cin >> x;
            head = push(head, x);

        } break;

        case 2: {
            head = pop(head);

        } break;

        case 3: {
            Display(head);
        }
        }

    } while (ch != 4);

    return 0;
}
