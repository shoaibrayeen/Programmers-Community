/*
Problem Statement:
Given a singly linked list with head node head, return a middle node of linked list.
If there is 2 mid node then return first mid node.
Sample Input:
7
1 2 3 4 5 6 7
Sample Output:
4 5 6 7 
*/

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;
        Node(int d){
            this->data = d;
            this->next = NULL;
        }  
};

Node * find_mid(Node * head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node * slow = head;
    Node * fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {

    int n;
    cin>>n;

    Node * head = NULL;
    Node * tail = NULL;

    for(int i = 0 ; i < n ; ++i){
        int d;
        cin>>d;
        if(head == NULL){
            head = new Node(d);
            tail = head;
        }
        else{
            tail->next = new Node(d);
            tail = tail->next;
        }
    }

    Node * md = find_mid(head);

    cout<<"Middle element value is "<<md->data;

    return 0;
}
