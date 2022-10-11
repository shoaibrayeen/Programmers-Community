#include <bits/stdc++.h>
using namespace std;
/*

Time Complexity: O(N)
Space Complexity: O(1)

*/
class Node {
public:
    int val;
    Node* next;

    Node(int x)
    {
        val = x;
        next = NULL;
    }
};
// Taking input
Node* initializer()
{
    Node *head = NULL, *tail = NULL;
    char ch;
    do {
        int newNode;
        cout << "Please Enter Value " << endl;
        cin >> newNode;
        Node* new_node = new Node(newNode);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
        cout << "Do you want to add more Nodes " << endl;
        cin >> ch;

    } while (ch != 'n');

    return head;
}
//length of Linked List
int Length(Node* head)
{
    Node* temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}
// Display each Nodes
void Display(Node* head)
{
    while (head != NULL) {
        cout << head->val << "  ";
        head = head->next;
    }
}

// main method
int main()
{
    Node* head = initializer();

    cout << "Length of Linked List " << Length(head) << endl;
    Display(head);

    return 0;
}
