#include <bits/stdc++.h>

using namespace std;

struct node
    {
        int data;
        node*next;
    };

 int isPalindrome(node* head) {
        node*temp=head;
        string s1="";    // stores the elements of linked list 
        while(temp!=0){
            s1+=temp->data;
            temp=temp->next;
               }
        
        int l=s1.size();
        for(int i=0;i<l/2;i++)
        {
            if(s1[i]!=s1[l-1-i])
                return 0;
        }
        
             return 1;
    }
    

int main()
{
    // creating a linked list 
    node*head=0,*temp;
    int count; // count stores the no of nodes in the linked list
    cin >> count;

    while(count--){
        node*newnode=new node();
        cin >> newnode->data; // enter the element
        newnode->next=0;
        if(head==0)
            head=temp=newnode;
        else {
            temp->next=newnode;
            temp=newnode;
            }
                
                   }
        
        if(isPalindrome(head))
                cout << "Yes" << endl;
        else cout << "No" << endl;
           

            
    return 0;
}
    
