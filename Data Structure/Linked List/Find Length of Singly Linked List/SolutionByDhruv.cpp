/* Program to search the specified element in a given linked list*/
#include <iostream.h>
using namespace std;

struct node {
    int data;
    node* next;
} * t; // Pointer defined for linked list

int length(node* start)
{
    if (start == NULL) {
        return 0;
    }
    t = start;
    int count = 1;
    while (t->next != NULL) {
        count++;
        t = t->next;
    }
    return count;
}

int main()
{
    int element, list_length;
    node* start = NULL;
    cout << "Enter element\n(For Stopptin Enter -1\n";
    while (true) {
        cin >> element;
        if (element == -1) {
            break;
        }
        node* temp = new node();
        temp->data = element;
        temp->next = NULL;

        if (start == NULL) {
            start = temp;
        } else {
            t = start;
            while (t->next != NULL) {
                t = t->next;
            }
            t->next = temp;
        }
    }
    if (start == NULL) {
        cout << "\nList is Empty\n";
        return 0;
    }
    list_length = length(start);
    cout << "Length of linked list is:" << list_length;
    return 0;
}
