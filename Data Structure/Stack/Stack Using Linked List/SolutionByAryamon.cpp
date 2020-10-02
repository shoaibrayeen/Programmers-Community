//to equate the concepts of Linked Lists and stacks
#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node{
	int info;
	node *next;
};

class Stack
{
	public:
	node *top;
	Stack() {
		top = NULL;
	}
	void Push(int);
	void Pop();
	void display();
};


void Stack::Push(int val)
{
  node *temp= new node;
  temp->info=val;
  temp->next= NULL;
  if(top != NULL)
  {
   temp->next=top;
  }
  top = temp;
}
void Stack::Pop()
{
	if(top==NULL)
	{
		cout<<"\nStack is empty\n ";
		return;
	}
	node *t = top;
	top = top->next;
	cout << "\nPopped Element\t:\t" << t->info;
	delete t;
}
void Stack::display()
{
  if(top==NULL)
  {
    cout<<"\nStack is empty\n ";
    return;
  }
  cout << "\nStack is\t";
  node *t=top;
  while(t!=NULL)
  {
   cout<<t->info<<"  ";
   t=t->next;
  }
}
void main()
{
  int val;
  clrscr();
  Stack obj;
  int ch;
  while(1) {
	cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
	cin >> ch;

	switch(ch) {
		case 1:	cout << "\nEnter Value\t:\t";
			cin >> val;
			obj.Push(val);
			break;
		case 2:	obj.Pop();
			break;
		case 3:	obj.display();
			break;
		case 4:	exit(0);
		default: cout << "\nInvalid Choice\n";
	}

  }
  getch();
}

