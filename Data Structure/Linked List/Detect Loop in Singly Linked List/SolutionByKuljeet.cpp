#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
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

	Node *node1 = new Node(10);
	Node *node2 = new Node(20);
	Node *node3 = new Node(30);
	Node *node4 = new Node(40);
	Node *node5 = new Node(50);

	head1 = node1;
	node1->next = node2;
	node2->next = node3;
	node4->next = node5;
	node5->next = NULL;

	bool b = DetectLoop(head1);
	if(b)
	{
		cout<<"Yes "<<endl;
	}
	else
		cout<<"No "<<endl;

	cout<<"Making a Loop "<<endl;

	Node *head = NULL;
	head=node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = node3;
    	b = DetectLoop(head);
	if(b)
	{
		cout<<"Yes "<<endl;
	}
	else
		cout<<"No "<<endl;

    return 0;
}
