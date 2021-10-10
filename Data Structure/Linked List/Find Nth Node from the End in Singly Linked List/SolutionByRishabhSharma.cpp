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
        cout << "Enter Values " << endl;
        int x;
        cin >> x;

        Node* new_node = new Node(x);

        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }

        cout << "Add more ? (y/n) ";
        cin >> ch;
    } while (ch != 'n');

    return head;
}

int Length(Node* head)
{
    int l = 0;

    while (head != NULL) {
        head = head->next;
        l++;
    }
    return l;
}

int ElementatPosition(Node* head, int p)
{
    int c = 1;
    while (c < p && head != NULL) {
        p--;
        head = head->next;
    }

    return head->data;
}

void Display(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node* head = takeInput();

    Display(head);

    int l = Length(head);

    cout << "Enter position to get node from end  " << endl;
    int x;
    cin >> x;
    if (x > l) {
        cout << "\n Position is greater than length of Linked List\n";
        return 0;
    }
    int p = l - x + 1;

    cout << "Element from end " << ElementatPosition(head, p);

    return 0;
}
