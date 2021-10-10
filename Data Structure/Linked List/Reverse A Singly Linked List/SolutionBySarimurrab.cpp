#include "bits/stdc++.h"
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insert_at_front(node*& head, int d)
{
    if (head == NULL) {
        head = new node(d);
        return;
    }

    node* temp = new node(d);
    temp->next = head;
    head = temp;
    return;
}

void reverse_iterative(node*& head)
{
    node* prev = NULL;
    node* curr = head;
    node* nx;

    while (curr != NULL) {
        nx = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nx;
    }
    head = prev;
}

node* reverse_reursive(node* head)
{
    if (head->next == NULL || head == NULL) {
        return head;
    }
    node* smallhead = reverse_reursive(head->next);

    // while (temp->next != NULL)  ------Optimization
    // {
    //     temp = temp->next;
    // }
    //    |
    //    |
    //   \_/

    node* temp = head->next;

    //---------------------
    temp->next = head;
    head->next = NULL;
    return smallhead;
}

void print(node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node* head = NULL;

    int n;
    cout << "Enter Number of elements: ";
    cin >> n;
    int data;
    while (n--) {
        cin >> data;

        cout << "inserted_at_front...\n";
        insert_at_front(head, data);
    }
    print(head);
    cout << endl;

    reverse_iterative(head); // Iterative
    print(head);
    cout << endl;

    head = reverse_reursive(head); // recursive
    print(head);
    return 0;
}
