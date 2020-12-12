#include<bits/stdc++.h>                                                  // Header Files 
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void nthFromEnd(Node *head, int n)
{
    Node *fast = head;
    Node *slow = head;
    int count = 0;
    if(head != NULL)
    {
        while(count < n)
        {
            if(fast == NULL)
               return ;
            
            fast = fast->next;
            count++;
        }

        while(fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
      cout << (slow->next) << " ";
    }
}

int main()                                      // Driver Code 
{
    int n;
    int element;
    Node *head = NULL;
    cout << "\n Enter elements" ;
    while(true)
    {
        cin >> element;
        if(element == -1)
           break;
        
    Node *temp = new Node(element);
	temp->data = element;
	temp->next = NULL;

	if(head == NULL) {
	    head = temp;
	}
	else {
	    Node *t = head;
	    while(t->next != NULL) {
		t = t->next;
	    }
	    t->next = temp;
    }

    
    }

    cout << "Enter the value of n" ;

    cin >> n;

    nthFromEnd(head,n);
    return 0;
}
