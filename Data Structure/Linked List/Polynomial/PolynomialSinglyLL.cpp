#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int power;
        int coef;
        Node* next;
        Node()
        {
            Node(0,0);
        }
        Node(int coef,int power)
        {
            this->power=power;
            this->coef = coef;
            this->next = NULL;
        }
};

class Singlylinkedlist
{
    public:
    Node *head;
     Singlylinkedlist()
        {
            this->head =nullptr;
        }
     void insertpoly(int coef,int power)
     {
         Node *newnode = new Node(coef,power);
         if(head==NULL)
         {
             head=newnode;
         }
         else
         {
            Node *p=head;
            Node *q = NULL;
            if(newnode->power>p->power)
            {
                newnode->next=head;
                head=newnode;
            }
            else
            {
                while(p!=NULL && p->power>newnode->power)
                {
                    q=p;
                    p=p->next;
                }
                if(p==head)
                {
                    newnode->next=head;
                    head=newnode;
                }
                else
                {
                    newnode->next=q->next;
                    q->next=newnode;
                }
            }
         }
     }
     void display()
     {
         if(head==NULL)
         {
             cout<<"Linked list is empty!";
         }
         else
         {
            Node *p =head;
            while(p!=NULL)
            {
                cout<<p->coef<<"x^"<<p->power<<"+";
                p=p->next;
            }
            cout<<"\n";
         }
     }

};

int main()
{
    Singlylinkedlist sll;
    string choice;
    int coef,power;
    while (true)
    {
       
       cout<<"Enter Coefficient:\n";
       cin>>coef;
       cout<<"Enter Power\n";
       cin>>power;
       sll.insertpoly(coef,power);
       cout<<"Want to quit? press q \n";
       cin>>choice;
       if(choice=="q")
       {
           break;
       }
    } 
   
   sll.display();
   
    return 0;

}
