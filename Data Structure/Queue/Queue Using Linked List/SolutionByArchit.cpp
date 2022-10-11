#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

/* Time complexity: O(1) [for all operations] 
Space complexity: O(N) where N is the number of operations */ 

class Queue { 
    Node *head; 
    Node *tail; 
    int size; 
    public: 
    Queue() { 
        head = NULL; 
        tail = NULL; 
        size = 0; 
    } 

    bool isEmpty() { 
        return size == 0; 
    } 
    void enqueue(int data) { 
        size++; 
        Node *newNode = new Node(data); 
        if (head == NULL) { 
            head = newNode; 
            tail = newNode; 
            return; 
        } 
        tail->next = newNode; 
        tail = newNode; 
    } 
    int dequeue() { 
        if (isEmpty()) { 
            return -1; 
        } 
        int ans = head->data; 
        Node *tmp = head; 
        head = head->next; 
        delete tmp; 
        size--; 
        return ans; 
    } 
};

int main() {
    Queue q;

    int choice, input;
    cin >> choice;
    switch (choice) {
        case 1:
            cin >> input;
            q.enqueue(input);
            break;
        case 2:
            cout << q.dequeue() << "\n";
            break;
        default:
            cout << ((q.isEmpty()) ? "true\n" : "false\n");
            break;
    }
}
