#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;

	Node(int x){
		data = x;
		next = NULL;
	}

};
Node* takeInput()
{
	Node *head = NULL, *tail = NULL;
	char ch;
	do{
		int x;
	cout<<"Enter Value "<<endl;
	cin>>x;
	Node *new_node = new Node(x);
	if(head==NULL)
	{
		head = new_node;
		tail=new_node;
	}
	else{
		tail->next = new_node;
		tail = new_node;
	}
	cout<<"ADD more ? "<<endl;
	cin>>ch;


}while(ch!='n');

return head;

}

int Occur(Node *head,int k)
{
	int count=0;
while(head!=NULL)
{
	
	if(head->data == k)
	{
		count++;
	}
	head = head->next;
}
return count;
}
void Display(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"  ";
		head = head->next;
	}
}
int main()
{
	Node *head = takeInput();
	cout << "\nEntered Elements\t:\t";
	Display(head);
	cout<<"\nEnter the Number to Search "<<endl;
	int x;
	cin>>x;
	cout<<Occur(head,x)<<endl;
	

	return 0;
}
