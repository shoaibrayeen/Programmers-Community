/*
    A linked list is given and you need to detect if there exists any loop in the linked list or not.
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
        void make_loop(int,int);
        void display();
        bool is_loop(int);

};
void linked_list::insert_at_end(int ele)
{
    node *temp=new node();
    node *temp1=new node();
    temp->data=ele;
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
void linked_list::make_loop(int loop_pos,int count)
{
    node *loop_node=new node();                     //loop_node points to a node where loop is going to form
    node *temp=new node();
    temp=first;
    loop_node=NULL;
    for(int i=0;i<=count;i++)
    {
        if(i==loop_pos)
            loop_node=temp;
        if(i!=count)
            temp=temp->next;
    }
    temp->next=loop_node;

}
bool linked_list::is_loop(int len)
{
    node *temp=new node();
    temp=first;
    node *arr[len];
    int n=-1;


    while(temp!=NULL)
    {
        arr[++n]=temp;
        for(int i=0;i<n;i++)
            if(temp->next==arr[i])
                return 1;
        temp=temp->next;
    }
    return 0;
}
void linked_list::display()
{
    node *temp=new node();
    temp=first;
    if(first==NULL)
        cout<<"\nlist is empty\n";
    else
    {
        cout<<"\nList elements are:";
        temp=first;
        while(temp!=NULL)
        {
            cout<<" "<<temp->data;
            temp=temp->next;
        }
        cout<<endl;

    }
}

int main()
{
    linked_list ob;
    int ele,count=-1,loop_pos;
    char ch;
    cout<<"Do you want to enter element(y/n)? ";
    cin>>ch;

    if(ch=='y')
    {

        do
        {
            cout<<"Enter element ";
            cin>>ele;
            ob.insert_at_end(ele);
            cout<<"Do you want to add more element(y/n)? ";
            cin>>ch;
            count++;
        }while(ch=='y');
    }

    cout<<"\nLength of list is: "<<count+1;
    ob.display();

    if(count>=0)
    {
        cout<<"\nEnter the index to make a loop(-1 for no loop) ";
        cin>>loop_pos;

        if(loop_pos<=count)
        {
            ob.make_loop(loop_pos,count);
            bool loop=ob.is_loop(count);
            if(loop==1)
                cout<<"\nYES! There is a loop";
            else
                cout<<"\nNO! There is no loop";
        }
        else
            cout<<"\nNot a valid loop position";
     }

}
