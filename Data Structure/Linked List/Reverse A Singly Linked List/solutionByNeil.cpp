#include <iostream>
using namespace std;

class NODE;
NODE* head = NULL;

/* A linked list which contains two values : an integer data and the pointer to the next Node.
*/
class NODE {
    int key;
    NODE* next;

public:
    void createNode(int k);
    NODE* reverse(NODE* start);
    void display();
};

/*void createNode(int k):
parameters: An integer value that is to be stored in the node.
returns: void
description: Adds a new node to the end of the linked list.
*/
void NODE ::createNode(int k)
{
    NODE* p = new NODE;
    NODE* r = head;
    p->key = k;
    p->next = NULL;
    if (!head) {
        head = p;
        return;
    }
    while (r->next)
        r = r->next;
    r->next = p;
}

/*NODE* reverse(NODE *start):
parameters: a pointer to the head of the linked list.
returns: a pointer to the head of the reversed list.
description: reverses a linked list.
*/
NODE* NODE ::reverse(NODE* start)
{
    NODE *x, *y = NULL; //y is set to NULL to easily set the next of the first node to NULL.
    while (start) {
        x = start;
        start = start->next;
        x->next = y;
        y = x;
    }
    return x; //x is the pointer to the head of the reversed list.
}

/*void display():
parameters: none
returns: void
description: displays the linked list.
*/
void NODE ::display()
{
    NODE* p = head;
    cout << endl;
    while (p) {
        cout << p->key << "\t";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int k, ch;
    NODE N;

    //creating the linked list.
    do {
        cout << "Enter the integer to be stored: ";
        cin >> k;
        N.createNode(k);
        cout << "Node created...";
        cout << "Do you wish to continue?(1/0)";
        cin >> ch;
    } while (ch != 0);

    //displaying the created list.
    cout << "\nDisplaying the created list ---->" << endl;
    N.display();

    //Reversing the list.
    head = N.reverse(head);
    cout << "\nDisplaying the reversed list ---->" << endl;
    N.display();
}
