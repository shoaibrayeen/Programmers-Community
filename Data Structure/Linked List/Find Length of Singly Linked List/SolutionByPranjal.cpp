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
	where n is size of singly linked list 
*/

int length(Node* head)
{
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len; // length of the linked list
}

Node* takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    Node* head = takeinput();
    // First and the only line of each test case or query contains elements of the singly linked list separated by a single space.
    cout << length(head) << endl;
    return 0;
}
