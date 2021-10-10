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
	Time Complexity : O(n) 
	Space Complexity : O(1) 
    where n is the size of singly linked list 
*/
Node* midPoint(Node* head)
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

int main()
{

    //The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
    // SAMPLE
    // INPUT: 1 2 3 4 5 -1
    // OUTPUT: 3
    Node* head = takeinput();
    Node* mid = midPoint(head);
    if (mid != NULL) {
        cout << mid->data;
    }
    cout << endl;
    return 0;
}
