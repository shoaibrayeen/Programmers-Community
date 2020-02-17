#include<bits/stdc++.h>
using namespace std;

class Node {
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

void Enqueue(int x)
{
	Node *new_node = new Node(x);
if(head == NULL)
{
	head = new_node;
	tail=new_node;
}
else
{
	tail->next = new_node;
	tail = new_node;
}
}

void Dequeue()
{
	cout<<head->data;
	head = head->next;
}

void Display()
{
	Node *temp = head;
	while(temp!=NULL){
	cout<<temp->data<<" ";
	temp=temp->next;
}
}
int main()
{
	
	int ch;
	do{
		cout<<" Enter your choice "<<endl;
		cout<<"1. Enqueue "<<endl;
		cout<<"2. Dequeue "<<endl;
		cout<<"3. Display "<<endl;
		cout<<"4. Exit "<<endl;
		cin>>ch;

		switch(ch){

			case 1:
			{
				int x;
				cout<<"Enter the element "<<endl;
				cin>>x;
				Enqueue(x);

			}
			break;

			case 2:
			{
				Dequeue();


			}
			break;

			case 3:
			{
				Display();
			}

		}


	}while(ch!=4);
}
