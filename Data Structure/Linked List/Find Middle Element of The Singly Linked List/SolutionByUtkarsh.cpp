#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};

/* 
	Time Complexity : O(n) 
	Space Complexity : O(1) 
    where n is the size of singly linked list 
*/

// finding the middle Node in given LinkedList
Node* middleNode(Node* head)
{
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node *slow = head, *fast = head->next;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// take inputs from User and creating SinglyLinkedList
Node* initializer()
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
//main method
int main()
{
    Node* head = initializer();
    Node* mid = middleNode(head);
    if (mid != NULL) {
        cout << mid->val;
    }
    cout << endl;
    return 0;
}
