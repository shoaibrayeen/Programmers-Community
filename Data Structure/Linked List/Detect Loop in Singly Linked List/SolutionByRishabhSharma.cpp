#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;
	Node(int x)
	{
		data=x;
		next =NULL;
	}
};



bool DetectLoop(Node *head)
{
	Node *slow = head, *fast = head;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if(slow==fast)
			return true;
	}
	return false;
}
int main()
{
	Node *head1 = NULL;

	Node *new_node1 = new Node(1);
	Node *new_node2 = new Node(2);
	Node *new_node3 = new Node(3);
	Node *new_node4 = new Node(4);
	Node *new_node5 = new Node(5);

	head1 = new_node1;
	new_node1->next = new_node2;
	new_node2->next = new_node3;
	new_node4->next = new_node5;
	new_node5->next = NULL;

	bool b = DetectLoop(head1);
	if(b)
	{
		cout<<"Yes "<<endl;
	}
	else
		cout<<"No "<<endl;

	cout<<"Making a Loop "<<endl;

	Node *head = NULL;
	head=new_node1;
	new_node1->next=new_node2;
	new_node2->next = new_node3;
	new_node3->next=new_node4;
	new_node4->next = new_node5;
	new_node5->next = new_node3;
    	b = DetectLoop(head);
	if(b)
	{
		cout<<"Yes "<<endl;
	}
	else
		cout<<"No "<<endl;


}
