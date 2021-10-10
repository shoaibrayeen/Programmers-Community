#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node* takeInput()
{
    Node *head = NULL, *tail = NULL;
    char ch;
    do {
        int x;
        cout << "Enter Value " << endl;
        cin >> x;
        Node* new_node = new Node(x);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
        cout << "ADD more ? " << endl;
        cin >> ch;

    } while (ch != 'n');

    return head;
}

int LLength(Node* head)
{
    Node* temp = head;
    int i = 0;
    while (temp != NULL) {
        i++;
        temp = temp->next;
    }
    return i;
}

void Display(Node* head)
{
    while (head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
}
int main()
{
    Node* head = takeInput();

    cout << "Length of Linked List " << LLength(head) << endl;
    cout << "Linked List Contents " << endl;
    Display(head);

    return 0;
}
