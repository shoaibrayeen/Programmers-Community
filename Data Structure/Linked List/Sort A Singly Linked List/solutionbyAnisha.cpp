#include <iostream>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Sorting a linked list by selection sort

class node
{
public:
    int data;
    node *next;
    node() { next = NULL; }
};

class linkedlist
{
public:
    node *head;
    linkedlist() { head = NULL; }

    void insertathead(int val)
    {
        node *temp = new node;
        temp->data = val;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }

    void displaylist()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};

void selectionsort(linkedlist &ll)
{
    int small;
    node *pos, *i, *j;
    for (i = ll.head; i->next != NULL; i = i->next)
    {
        small = i->data;
        pos = i;
        for (j = i->next; j != NULL; j = j->next)
        {
            if (j->data < small)
            {
                small = j->data;
                pos = j;
            }
        }
        swap(i->data, pos->data);
    }
}

int main()
{
    linkedlist l;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        l.insertathead(1 + rand() % 50);
    cout << "Unsorted list: ";
    l.displaylist();
    selectionsort(l);
    cout << "\nSorted list: ";
    l.displaylist();
    return 0;
}