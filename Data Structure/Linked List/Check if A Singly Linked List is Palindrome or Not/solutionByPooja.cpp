/*
    A linked list is given and you need to check if it's palindrome or not.
*/
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
} * temp, *t;
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
        t = first;
        while (t->next != NULL)
            t = t->next;
        t->next = temp;
    }
}

int listLength()
{
    int count = 0;
    t = first;
    while (t != NULL) {
        count++;
        t = t->next;
    }
    return count;
}

bool check_for_palindrome(int l)
{
    node *front, *back;
    front = back = first;
    int mid = l / 2;
    if (l % 2 != 0)
        mid++;

    for (int i = 1; i <= mid; i++)
        back = back->next; //back pointing to node which is just after the middle node;

    for (int i = 1; back != NULL; i++) {
        for (int j = 1; j <= l - (mid + i); j++)
            front = front->next; // front  pointing to element which is opposite of back(i.e fold list in circular form);

        if (front->data != back->data)
            return 0;
        back = back->next;
        front = first;
    }
    return 1;
}

int main()
{
    char choice;
    int length;
    bool check;

    cout << "Do you want to enter element(y/n) ";
    cin >> choice;
    if (choice == 'y') {
        do {
            insertAtEnd();
            cout << "Do you want to add more element(y/n)";
            cin >> choice;
        } while (choice == 'y');
    }

    length = listLength();

    if (length == 0)
        cout << "\nList is empty";
    else {
        check = check_for_palindrome(length);

        if (check == 1)
            cout << "\nYES";
        else
            cout << "\nNO";
    }
}
