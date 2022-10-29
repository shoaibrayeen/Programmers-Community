#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

using namespace std;

/* 
    Time complexity: O(N) 
    Space complexity: O(1) 
    where N is the length of the singly linked list 
*/

Node* reverseLinkedList(Node* head)
{
    Node* currentNode = head;
    Node* previousNode = NULL;
    while (currentNode != NULL) {
        Node* nextNode = currentNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }
    head = previousNode;
    return head;
}

Node* takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node* newnode = new Node(data);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node* head)
{
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main()
{
    Node* head = takeinput();
    // The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
    head = reverseLinkedList(head);
    print(head);

    return 0;
}
