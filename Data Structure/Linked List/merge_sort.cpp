/*
    Merge sort for linked list;
*/

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;

        Node(int d):data(d){
            this->next = NULL;
        }
};

class LinkedList{

    public:
        Node * push(Node * head , Node * tail , int d){
            if(head == NULL){
                head = new Node(d);
                tail = head;
            }
            else{
                tail->next = new Node(d);
                tail = tail->next;
            }
            return tail;
        }

        void disp(Node * head){
            
            for( ; head != NULL ; head = head->next){
                cout<<head->data<<" ";
            }
            return ;
        }

        Node * merge(Node * left , Node * right){

            Node * temp = new Node(-1);
            Node * head = temp;
            while(left != NULL && right != NULL){
                if(left->data <= right->data){
                    temp->next = left;
                    left = left->next;
                }
                else{
                    temp->next = right;
                    right = right->next;
                }
                temp = temp->next;
            }

            if(left != NULL){
                temp->next = left;
            }
            
            if(right != NULL){
                temp->next = right;
            }

            temp = head;
            head = head->next;
            delete temp;
            return head;

        }

        Node * find_mid(Node * head){
            if(head == NULL || head->next == NULL){
                return NULL;
            }

            Node * slow = head;
            Node * fast = head;
            Node * pre;
            while(fast != NULL && fast->next != NULL){
                pre = slow;
                slow = slow->next;
                fast = fast->next->next;
                
            }
            pre->next = NULL;
            return slow;
        }

        Node * merge_sort(Node * head ){

            if(head == NULL || head->next == NULL){
                return head;
            }

            Node * mid = find_mid(head);
            Node * left = merge_sort(head);
            Node * right = merge_sort(mid);

            head = merge(left , right);
            return head;
        }

};

int main(){

    LinkedList l1;

    int n;
    cout<<"Enter no of nodes: ";
    cin>>n;
    Node * head = NULL;
    Node * tail = NULL;

    cout<<"Enter nodes: ";
    for(int i = 0 ; i < n ; ++i){
        int d;
        cin>>d;
        tail = l1.push(head , tail , d);

        if(head == NULL){
            head = tail;
        }

    }

    head = l1.merge_sort(head);

    l1.disp(head);

    return 0;
}