/*
Write A Program to implement insertion and deletion functionalities in the Singly Linked List.
Insertion
         *At beginning
         *At End
Deletion
         *At beginning
         *At End
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}

};
Node *head = NULL,*tail=NULL;
void InsertionAtBeginning(int x)
{
	Node *new_node = new Node(x);
	if(head == NULL)
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		Node *temp = head;
		head = new_node;
		head->next = temp;

	}
}
void InsertionAtEnd(int x)
{
	Node *new_node = new Node(x);
	if(head == NULL)
	{
		head = new_node;
		tail = new_node;
	}
	else
	{
		tail->next = new_node;
		tail = new_node;
	}
}

void DeletionAtBeginning()
{
	if(head==NULL)
	{
		cout<<"Empty Linked List "<<endl;
	}
	else{
	cout<<"Deleting the element at head "<<head->data<<" "<<endl;
	head = head->next;
}
}

void DeletionAtEnd()
{
	if(head==NULL)
		{
			cout<<"Empty Linked List "<<endl;
		}
	else{
	Node *temp = head;

	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	Node *tt = temp->next;
	cout<<"Deleting the element at tail "<<tt->data<<" "<<endl;
	temp->next = NULL;
}
}
void Display()
{
	Node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	Node *head = NULL,*tail=NULL;

	int ch;
	do{
		cout<<"Enter Your Choice "<<endl;
		cout<<"1. Insertion At Beginning "<<endl;
		cout<<"2. Insertion At End "<<endl;
		cout<<"3. Deletion At Beginning "<<endl;
		cout<<"4. Deletion At End "<<endl;
		cout<<"5. Display "<<endl;
		cout<<"6. Exit"<<endl;
		cin>>ch;

	switch(ch)
	{
		case 1:
		 {
		 	int x;
		 	cout<<"Enter the Element to add in Beginning "<<endl;
		 	cin>>x;
		 	InsertionAtBeginning(x);
		 }
		 break;

		 case 2:
		 {
		 	int x;
		 	cout<<"Enter the Element to add in Last "<<endl;
		 	cin>>x;
		 	InsertionAtEnd(x);
		 }
		 break;
		 case 3:
		 {
		 	DeletionAtBeginning();
		 }
		 break;
		 case 4:
		 {
		 	DeletionAtEnd();
		 }
		 break;
		 case 5:
		 {
		 	Display();

		 }
		 break;
	}
	}while(ch!=6);

}
