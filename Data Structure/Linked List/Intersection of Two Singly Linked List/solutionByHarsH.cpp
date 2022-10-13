/*
 
 
There are two linked lists.
Due to some programming error, the end node of
one of the linked list got linked into the second list, 
forming an inverted Y shaped list.
Now it's your job to find the point(Node)
at which the two linked lists are intersecting.
Input Format
 
The first line of input is the size(N1) 
of the first linked list, followed by its content(Xi).
The third line of input is the size(N2) 
of the second linked list, followed by its content( Yi ).
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
int len(node* head)
{
    int i=1;
    while(head->next!=NULL){
        head=head->next;
        i++;
    }
  //  cout<<i<<endl;
    return i;
}
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
 
void build_list(node* &head,int len){
    	int data;
        int i=0;
    	while(i<len){
            cin>>data;
    		insert_at_tail(head,data);
            i++;
    }
}
 
    void print(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    } 
int intersection(node* head1, node* head2,int n1,int n2)
{
        int len1=n1;
        int len2=n2;
        int diff;
        if(len2>len1)
        {
            diff=len2-len1;
        }
        else
        {
             diff=len1-len2;
        }
 
        if(len2>len1)
        {
            for(int i=0;i<diff;i++)
            {
            head2=head2->next;   
            }
        }
        else
        {
            for(int i=0;i<diff;i++)
            {
            head1=head1->next;   
            }
        }
 
 
        while(head1 != NULL && head2 != NULL)
        {
            if(head1->data != head2->data)
            {
                head1 = head1->next;
                head2 = head2->next; 
            }
            else if(head1->data==head2->data)
            {
                return head1->data;
            }
        }
        return -1;
 
}   
 
int main() {
 
       node* a1=NULL;
       node* a2=NULL;
       int len1;
       cin>>len1;
       int temp;
       for(int q=0;q<len1;q++){
           cin>>temp;
           insert_at_tail(a1,temp);                        
       }
        int len2;
       cin>>len2;
       for(int q=0;q<len2;q++){
           cin>>temp;
           insert_at_tail(a2,temp);                        
       }
       int l1,l2;
       l1=len(a1);
       l2=len(a2);    
       int j= intersection(a1,a2,l1,l2);
       cout<<j;
     // print(a1);
      // print(a2);
 
 
 
}
