#include <iostream> 
using namespace std; 

/* Link list node */
struct Node { 
	int data; 
	struct Node* next; 
	Node(int data) 
	{ 
		this->data = data; 
		next = NULL; 
	} 
}; 

struct LinkedList { 
	Node* head; 
	LinkedList() 
	{ 
		head = NULL; 
	} 

	Node* reverse(Node* head) 
	{ 
		if (head == NULL || head->next == NULL) 
			return head; 

		/* reverse the rest list and put 
		the first element at the end */
		Node* rest = reverse(head->next); 
		head->next->next = head; 

		/* tricky step -- see the diagram */
		head->next = NULL; 

		/* fix the head pointer */
		return rest; 
	} 

	/* Function to print linked list */
	void print() 
	{ 
		struct Node* temp = head; 
		while (temp != NULL) { 
			cout << temp->data << " "; 
			temp = temp->next; 
		} 
	} 

	void push(int data) 
	{ 
		Node* temp = new Node(data); 
		temp->next = head; 
		head = temp; 
	} 
}; 

int main() 
{ 
	/* Start with the empty list */
	LinkedList ll; 
	ll.push(20); 
	ll.push(4); 
	ll.push(15); 
	ll.push(85); 

	cout << "Given linked list\n"; 
	ll.print(); 

	ll.head = ll.reverse(ll.head); 

	cout << "\nReversed Linked list \n"; 
	ll.print(); 
	return 0; 
} 
