#include<bits/stdc++.h>   // Header Files 
using namespace std;

struct Node{
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
	Node *head = NULL, *tail=NULL;
	char ch;

	do{
		cout<<"Enter the Value to add "<<endl;
		int x;
		cin>>x;
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

		cout<<"Do you wish to add more ? (y/n) "<<endl;
		cin>>ch;

	}while(ch!='n');
	return head;
}

void Display(Node *head)
{
	cout << "\nLinked List\t:\t";
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout << endl;
}

int midPoint(Node *head)
{
    if(head == NULL || head->next == NULL)
       return head->data;
    
    Node *slow = head;
    Node *fast = head->next;
    while(fast != NULL || fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->data;
}

int main()                                               // Driver Code 
{
    Node *head = takeInput();
    Display(head);
	midPoint(head);
    return 0;

}
