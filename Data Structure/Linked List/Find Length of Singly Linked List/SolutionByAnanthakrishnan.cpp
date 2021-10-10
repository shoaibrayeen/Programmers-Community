#include <algorithm>
#include <iostream>

using namespace std;

class Node {
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
    int a, counter = 0;
    char flag;

    //initially
    Node* head = NULL;

    //pushing some values
    while (true) {
        cout << "Enter values";
        cin >> a;
        push(&head, a);
        cout << "Do you want to add more (enter (Y/N))";
        cin >> flag;
        if (flag == 'y' || flag == 'Y')
            continue;
        else if (flag == 'n' || flag == 'N')
            break;
    }

    Node* trav = head;

    //traversing the linked list and counting
    while (trav != NULL) {
        counter++;
        trav = trav->next;
    }

    cout << "count of nodes is " << counter;
    return 0;
}
