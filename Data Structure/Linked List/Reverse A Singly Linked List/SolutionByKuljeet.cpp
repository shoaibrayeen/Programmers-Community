#include <iostream>
#include <algorithm>
using namespace std;

class NODE;
NODE *head=NULL;

class NODE
{
    int key;
    NODE *next;
    public:
        void createNode(int k);
        NODE* reverse(NODE *start);
        void display();
};

void NODE :: createNode(int k)
{
	NODE *p=new NODE;
	NODE *r=head;
	p->key=k;
	p->next=NULL;
	if(!head)
	{
		head=p;
		return;
	}
	while(r->next)
	r=r->next;
	r->next=p;
}

NODE* NODE :: reverse(NODE *start)
{
    NODE *x, *y = NULL;
    while(start)
    {
        x = start;
        start = start->next;
        x->next = y;
        y = x;
    }
    return x;
}

void NODE :: display()
{
	NODE *p=head;
    cout<<endl;
	while(p)
	{
		cout<<p->key<<"\t";
		p=p->next;
	}
    cout<<endl;
}

int main()
{
    int k, ch;
    NODE N;
    do 
    {
        cout << "Enter the integer to be stored: ";
        cin >> k;
        N.createNode(k);
        cout << "Node created...";
        cout << "Do you wish to continue?(1/0)";
        cin>>ch;
    }
    while(ch!=0);
    cout<<"\nDisplaying the created list ---->"<<endl;
    N.display();
    head = N.reverse(head);
    cout<<"\nDisplaying the reversed list ---->"<<endl;
    N.display();
}
