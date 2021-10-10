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

Node* insertAtEnd(Node* head, int data)
{
    Node* temp = new Node(data);
    if (head == NULL)
        return temp;

    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    return head;
}

Node* searchList(Node* head, int key)
{
    if (head == NULL)
        return NULL;

    if (head->data == key)
        return head;
    else
        return searchList(head->next, key);
}

void display(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node* head = NULL;
    char choice;
    int data;
    int key;

    cout << "Do you want to enter element(y/n) ";
    cin >> choice;
    if (choice == 'y') {
        do {
            cin >> data;
            insertAtEnd(head, data);
            cout << "Do you want to add more element(y/n)";
            cin >> choice;
        } while (choice == 'y');
    }

    cout << "Enter an element you want to search ";
    cin >> key;

    searchList(head, key);
    display(head);

    return 0;
}