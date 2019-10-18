#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

void push(Node** head, int newdata)
{
    Node* new_node = new Node();

    //adding data
    new_node->data = newdata;
    new_node->next = (*head);

    (*head) = new_node;
}

int main()
{
    int counter = 0;

    //initially
    Node* head = NULL;

    //pushing some values
    push(&head, 10);
    push(&head, 3);
    push(&head, 22);
    push(&head, 42);
    push(&head, 5);
    push(&head, 45);
    push(&head, 90);
    push(&head, 100);
    
    Node* trav = head;

    //traversing the linked list and counting
    while (trav != NULL)
    {
        counter++;
        trav = trav->next;
    }

    cout<<"count of nodes is "<< counter;
    return 0;
}
