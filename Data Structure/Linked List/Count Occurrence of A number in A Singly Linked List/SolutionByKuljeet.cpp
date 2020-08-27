#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
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

int countOccurences(Node *head,int k)
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
void display(Node *head)
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
	display(head);
	cout<<"\nEnter the Number to Search "<<endl;
	int x;
	cin>>x;
	cout<<countOccurences(head,x)<<endl;
	

	return 0;
}
