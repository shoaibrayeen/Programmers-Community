/*
  Program Description - This program return Kth node from the END.
 
*/


#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node(int d){
            data=d;
            next=NULL;
    }
};
 
void insert_at_head(node* &head,int data){
        node* n = new node(data);
        n->next=head;
        head=n;
    }
 
void insert_at_tail(node* &head,int data){
        if(head==NULL){
            return insert_at_head(head,data);
        }
        else{
            node* tail=head;
            while(tail->next!=NULL){
                tail=tail->next;
            }
            tail->next=new node(data);
        }
}
int len(node* head){
    int i=1;
    while(head->next!=NULL){
        head=head->next;
        i++;
    }
    return i;
}
void build_list(node* &head){
    	int data;
        cin>>data;
    	while(data!=-1){
    		insert_at_tail(head,data);
            cin>>data;
    }
}
void fun(node* head,int pos){
 
    node* slow=head;
    node* fast=head;
    node* newhead=NULL;
    int position=1;
    while(position<pos){
        fast=fast->next;
        position++;
    }
    while(fast->next->next!=NULL){
        //cout<<slow->data<<" "<<fast->data<<endl;
        slow=slow->next;
        fast=fast->next;
        //cout<<slow->data<<" "<<fast->data<<endl;
    }
   cout<<slow->next->data;
 
 
}
 
 
    void print(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }    
 
int main() {
 
       node* head1=NULL;
 
       build_list(head1);
      //print(head1);
        int pos;
        cin>>pos;
        int l=len(head1);
        if(l==pos){
            cout<<head1->data;
        }
        else{
            fun(head1,pos);
        }  
}
