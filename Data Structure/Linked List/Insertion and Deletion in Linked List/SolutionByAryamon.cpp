//to apply the concept of Linked Lists
#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node{
	int info;
	node *next;
};

class LL
{
	public:
	node *head;
	LL() {
		head = NULL;
	}
	void addBack(int);
	void addFront(int);
	void delFront();
	void delBack();
	void display();
};


void LL::addFront(int val)
{
  node *temp= new node;
  temp->info=val;
  temp->next= NULL;
  if(head != NULL)
  {
   temp->next=head;
  }
  head = temp;
}
void LL::addBack(int val)
{
  node *temp= new node;
  temp->info=val;
  temp->next= NULL;
  if(head==NULL)
  {
    head=temp;
    return;
  }
  for(node* t = head; t->next != NULL; t = t->next)
  {

  }
  t->next = temp;
}
void LL::delFront()
{
	if(head==NULL)
	{
		cout<<"\nLinked List is empty\n ";
		return;
	}
	node *t = head;
	head = head->next;
	cout << "\nDeleted Element\t:\t" << t->info;
	delete t;
}
void LL::delBack()
{
	if(head==NULL)
	{
		cout<<"\nLinked List is Empty\n ";
		return;
	}
	if(head->next==NULL)
	{
		delFront();
		return;
	}
	node* p;
	for( p = head; p->next->next != NULL; p = p->next)
	{

	}
	node *t = p->next;
	p->next = NULL;
	cout <<"\nDeleted Element\t:\t" << t->info;
	delete t;


}
void LL::display()
{
  if(head==NULL)
  {
    cout<<"\nLL is empty\n ";
    return;
  }
  cout << "\nLL is\t";
  node *t=head;
  while(t!=NULL)
  {
   cout<<t->info<<" ";
   t=t->next;
  }
}
void main()
{
  int val;
  clrscr();
  LL obj;
  int ch;
  while(1) {
	cout << "\n1.Add Front\n2.Add Back\n3.Delete Front\n4.Delete Back\n5.Display\n6.Exit\n";
	cin >> ch;

	switch(ch) {
		case 1:	cout << "\nEnter Value\t:\t";
			cin >> val;
			obj.addFront(val);
			break;
		case 2:	cout << "\nEnter Value\t:\t";
			cin >> val;
			obj.addBack(val);
			break;
		case 3:	obj.delFront();
			break;
		case 4:	obj.delBack();
			break;
		case 5:	obj.display();
			break;
		case 6:	exit(0);
		default: cout << "\nInvalid Choice\n";
	}

  }
  getch();
}

