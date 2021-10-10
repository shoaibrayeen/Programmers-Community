/*
Write A Program to implement insertion and deletion functionalities in the Singly Linked List.
Insertion
         *At beginning
         *At End
Deletion
         *At beginning
         *At End
*/
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};
class linkedlist {
public:
    node* first;

    linkedlist()
    {
        first = NULL;
    }
    void insert_at_end(int);
    void insert_at_beginning(int);
    int delete_from_beginning();
    int delete_from_end();
    void display();
};
void linkedlist::insert_at_end(int data)
{
    node* temp = new node();
    node* t;
    temp->data = data;
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
void linkedlist::insert_at_beginning(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->next = NULL;
    if (first == NULL)
        first = temp;
    else {
        temp->next = first;
        first = temp;
    }
}
int linkedlist::delete_from_beginning()
{
    node* temp;
    if (first == NULL)
        cout << "\nList is empty";
    else {
        temp = first;
        int d = first->data;
        first = first->next;
        delete (temp);
        return d;
    }
}
int linkedlist::delete_from_end()
{
    node *temp, *t;
    if (first == NULL)
        cout << "\nList is empty\n";
    else {
        temp = first;
        int d = temp->data;
        if (temp->next != NULL) {
            while (temp->next->next != NULL)
                temp = temp->next;
            t = temp->next;
            temp->next = NULL;
            delete (t);
        } else //else part executes when length of list is 1
        {
            first = NULL;
            delete (temp);
        }

        return d;
    }
}
void linkedlist::display()
{
    if (first == NULL)
        cout << "\nList is empty\n";
    else {
        node* temp;
        temp = first;
        cout << "\nList is ";
        while (temp != NULL) {
            cout << temp->data << "  ";
            temp = temp->next;
        }
    }
}
int main()
{
    linkedlist ob;
    char choice;
    int op;
    cout << "\n   MENU   ";
    cout << "\n1.insert element at end";
    cout << "\n2.insert element at beginning";
    cout << "\n3.delete element from beginning ";
    cout << "\n4.delete element from end";
    cout << "\n5.display list element";
    do {
        cout << "\nWhich operation do you want to perform ";
        cin >> op;
        if (op == 1 || op == 2) {
            int data;
            cout << "\nEnter element ";
            cin >> data;
            if (op == 1)
                ob.insert_at_end(data);
            else
                ob.insert_at_beginning(data);

        } else if (op == 3)
            int d = ob.delete_from_beginning();
        else if (op == 4)
            int d = ob.delete_from_end();
        else if (op == 5)
            ob.display();
        else
            cout << "\nWrong option";

        cout << "\nDo you want to perform more operation(y/n) ";
        cin >> choice;

    } while (choice == 'y');
}
