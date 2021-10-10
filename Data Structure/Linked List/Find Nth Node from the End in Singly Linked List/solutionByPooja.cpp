/*
    A linked list is given and you need to find Nth Node from the end.
*/
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
} * temp, *t;
struct node* first = NULL;

void insertAtEnd()
{
    if (first == NULL)
        first = temp;
    else {
        t = first;
        while (t->next != NULL)
            t = t->next;
        t->next = temp;
    }
}
int len_linkedlist()
{
    int count = 0;
    if (first == NULL)
        return count;
    else {
        temp = first;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
    }
    return count;
}

int find_element(int n, int len)
{
    temp = first;
    for (int i = 1; i <= len - n; i++) //nth node from end =total element in linked list-n+1;
        temp = temp->next;
    return temp->data;
}

int main()
{
    char choice;
    int n, l;
    cout << "Do you want to enter element(y/n)";
    cin >> choice;
    if (choice == 'y') {
        do {
            cout << "Enter the data ";

            temp = new node();
            cin >> temp->data;
            temp->next = NULL;
            insertAtEnd();
            cout << "\nDo you wnat to enter more element(y/n)";
            cin >> choice;
        } while (choice == 'y');
    }

    cout << "\nwhich nth node data value you want to print ";
    cin >> n;
    l = len_linkedlist();
    if (l == 0)
        cout << "\nList is empty";

    else {
        if (n <= l) {
            cout << find_element(n, l);
        } else {
            cout << "\nValue of N is greater than length of Linked List.\n";
        }
    }
}
