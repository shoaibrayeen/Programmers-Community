
#include <bits/stdc++.h>
using namespace std;
 

struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }
 

    void reverse()
    {
       
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
         
            next = current->next;
           
            current->next = prev;
            
            prev = current;
            current = next;
        }
        head = prev;
    }
 
   
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 

int main()
{
    
    LinkedList ll;
    int n;
    cout<<"Enter the no . of linked list want to add"<<endl;
    cin>>n;
    int l;
    for(int i =0 ; i<n ; i++)
    {
        cin>>l;
        ll.push(l);
    }
    

    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse();
 
    cout << "\nReversed linked list \n";
    ll.print();
    return 0;
}