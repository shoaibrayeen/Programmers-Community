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

Node *head = NULL, *tail = NULL;
void insertionAtBeginning(int x)
{
    Node* temp = new Node(x);
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        Node* temp1 = head;
        head = temp;
        head->next = temp1;
    }
}
void insertionAtEnd(int x)
{
    Node* temp = new Node(x);
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void deletionAtBeginning()
{
    if (head == NULL) {
        cout << "Empty List " << endl;
    } else {
        cout << "Deleting element at head " << head->data << " " << endl;
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void deletionAtEnd()
{
    if (head == NULL) {
        cout << "Empty List " << endl;
    } else {
        Node* temp = head;

        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        Node* temp1 = temp->next;
        cout << "Deleting element at tail " << temp1->data << " " << endl;
        temp->next = NULL;
        delete temp1;
    }
}
void display()
{
    cout << "\nLinked List\t:\t";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL, *tail = NULL;

    int ch;
    do {
        cout << "Enter Your Choice " << endl;
        cout << "1. Insertion At Beginning " << endl;
        cout << "2. Insertion At End " << endl;
        cout << "3. Deletion At Beginning " << endl;
        cout << "4. Deletion At End " << endl;
        cout << "5. Display " << endl;
        cout << "6. Exit" << endl;
        cin >> ch;

        switch (ch) {
        case 1: {
            int x;
            cout << "Enter the Element to add in Beginning " << endl;
            cin >> x;
            insertionAtBeginning(x);
        } break;

        case 2: {
            int x;
            cout << "Enter the Element to add in Last " << endl;
            cin >> x;
            insertionAtEnd(x);
        } break;
        case 3: {
            deletionAtBeginning();
        } break;
        case 4: {
            deletionAtEnd();
        } break;
        case 5: {
            display();

        } break;
        }
    } while (ch != 6);

    return 0;
}
