/*
Two Singly linked lists are given and you need to perform union operation between them.
*/

#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class linked_list{
    public:
        node *first;

        linked_list(){
            first=NULL;
        }
        void insert_at_end(int);
        void display();

};
void linked_list::insert_at_end(int data)
{
    node *temp=new node();
    node *temp1=new node();
    temp->data=data;
    temp->next=NULL;

    if(first==NULL)
        first=temp;
    else
    {
        temp1=first;
        while(temp1->next!=NULL)
            temp1=temp1->next;
        temp1->next=temp;
    }

}
void linked_list::display()
{
    if(first==NULL)
        cout<<" List is empty";
    else
    {
        node *temp=new node;
        temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
    }
}
void union_of_list(linked_list obj1,linked_list obj2,linked_list init)
{
    node *first_temp=new node();           //first_temp points to 1st linked list
    node *second_temp=new node();                 //second_temp points to 2nd linked list.

    first_temp=obj1.first;
    second_temp=obj2.first;
    while(first_temp!=NULL)                        //1st list is copies as it is
    {
        init.insert_at_end(first_temp->data);
        first_temp=first_temp->next;
    }

    while(second_temp!=NULL)
    {
        first_temp=obj1.first;
        while(first_temp!=NULL)
        {
            if(second_temp->data==first_temp->data)
                break;
            first_temp=first_temp->next;
        }
        if(first_temp==NULL)
            init.insert_at_end(second_temp->data);
        second_temp=second_temp->next;

    }

    cout<<"\n\nUnion of list is: ";
    init.display();

}

int main()
{
    char ch;
    int data;
    linked_list obj[2];
    linked_list init;

    for(int i=0;i<2;i++)
    {
         cout<<"\nDo you want to enter element of "<<i+1<<" list(y/n)? ";
         cin>>ch;
         if(ch=='y')
         {

            do
            {
                cout<<"Enter data ";
                cin>>data;
                obj[i].insert_at_end(data);
                cout<<"\nDo you want to enter more element(y/n)? ";
                cin>>ch;
            }while(ch=='y');
        }
    }


    for(int i=0;i<2;i++)
    {
        cout<<endl<<i+1<<" List is : ";
        obj[i].display();
    }
    union_of_list(obj[0],obj[1],init);
}
