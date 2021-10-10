/*
       A linked list is given and you need to count occurrence of A Number given by User.
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
int CalOccurence(int ele)
{
    int count = 0;
    t = first;
    if (t == NULL)
        cout << "\nList is empty";
    while (t != NULL) {
        if (t->data == ele)
            count++;
        t = t->next;
    }
    return count;
}

int main()
{
    char choice;
    int element;

    cout << "Do you want to enter element(y/n) ";
    cin >> choice;
    if (choice == 'y') {
        do {
            insertAtEnd();
            cout << "Do you want to add more element(y/n)";
            cin >> choice;
        } while (choice == 'y');
    }

    cout << "\nEnter an element whose you want to count ocuurence ";
    cin >> element;

    cout << "\nNo. of time " << element << " occurs : " << CalOccurence(element) << endl;
}
