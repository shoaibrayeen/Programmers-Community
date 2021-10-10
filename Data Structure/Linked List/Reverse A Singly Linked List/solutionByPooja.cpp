/*
       A linked list is given and you need to reverse it.
*/
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
} * temp, *t1, *t2;
node* first = NULL;

void insertAtEnd()
{
    temp = new node();
    cout << "\nEnter element ";
    cin >> temp->data;
    temp->next = NULL;

    if (first == NULL)
        first = temp;
    else {
        t1 = first;
        while (t1->next != NULL)
            t1 = t1->next;
        t1->next = temp;
    }
}

void reverseLinkedList()
{
    temp = first;
    while (temp != NULL) {
        t1 = temp->next; //t1 points to next node of the current node
        if (temp == first)
            temp->next = NULL;
        else
            temp->next = t2;
        t2 = temp; // t2 points to  previous node of the current node;
        temp = t1;

        if (temp == NULL)
            first = t2;
    }
}

void displayList()
{
    temp = first;
    if (first == NULL)
        cout << "\nList is empty" << endl;
    else {
        cout << "\nReverse list is : ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{
    char choice;
    cout << "Do you want to enter element(y/n) ";
    cin >> choice;
    if (choice == 'y') {
        do {
            insertAtEnd();
            cout << "Do you want to add more element(y/n)";
            cin >> choice;
        } while (choice == 'y');
    }

    reverseLinkedList();

    displayList();
}
