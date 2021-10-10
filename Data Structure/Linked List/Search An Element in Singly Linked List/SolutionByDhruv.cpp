/* Program to search the specified element in a given linked list*/
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
} * t; // Pointer defined for linked list

int check(int element, node* start)
{
    t = start;
    while (t != NULL) {
        if (t->data == element) {
            return 1;
        }
        t = t->next;
    }
    return 0;
}

int main()
{
    int element, searched_element;
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
    cout << "\nEnter element to be searched\t:\t";
    cin >> element;
    searched_element = check(element, start);
    if (searched_element == 1) {
        cout << "Element found\n";
    } else {
        cout << "Element not found\n";
    }
    return 0;
}
