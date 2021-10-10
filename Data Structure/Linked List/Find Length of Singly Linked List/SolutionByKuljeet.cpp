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

int lengthOfList(Node* head)
{
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }

    return count;
}

int main()
{
    int element, list_length;
    Node* head = NULL;
    cout << "Enter element\n";
    while (true) {
        cin >> element;
        if (element == -1) {
            break;
        }
        Node* temp = new Node(element);
        temp->data = element;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
        } else {
            Node* t = head;
            while (t->next != NULL) {
                t = t->next;
            }
            t->next = temp;
        }
    }
    if (head == NULL) {
        cout << "\nList is Empty\n";
        return 0;
    }
    list_length = lengthOfList(head);
    cout << "Length of linked list is:" << list_length;
    return 0;
}