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
Node *takeInput()
{
	Node *head = NULL, *tail = NULL;
	
	char ch;
	do{
		cout<<"Enter Value to Add "<<endl;
		int x;
		cin>>x;

		Node *new_node = new Node(x);
		if(head==NULL)
		{
			head = new_node;
			tail = new_node;
		} 
		else
		{
			tail->next = new_node;
			tail=new_node;
		}

		cout<<"Enter More ? (y/n) "<<endl;
		cin>>ch;
	}while(ch!='n');
	return head;
}

bool CheckForPalindrome(Node *head)
{

	Node *temp = head;
	stack<int> s;
	Node *slow=head, *fast= temp->next;
	while(fast!=NULL && fast->next!=NULL)
	{
		fast = fast->next->next;
		s.push(slow->data);
		slow = slow->next;
	}
    	slow= slow->next;
	while(slow!=NULL)
	{
		if(slow!=NULL && s.empty())
			return false;
		int i = s.top();
		if(i!=slow->data)
			return false;
		else 
		{
			slow=slow->next;
			s.pop();
		}
	}

	return true;


}

void Display(Node *head)
{
	cout << "\nLinked List\t:\t";
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;		
	}
	cout << endl;
}
int main()
{
	Node *head = takeInput();

	Display(head);

	bool check = CheckForPalindrome(head);

	cout<<endl;

	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
