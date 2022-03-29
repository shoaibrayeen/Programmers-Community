#include<iostream>

using namespace std;

template<class T>
class SNode
{
	public:
		T info;
		SNode *next;
};

template<class T>
class SList
{
	private:
		SNode<T> *head;
	public:
		SList()
		{
			head=NULL;
		}
		
		bool isEmpty();
		int length();	
		SNode<T>* initialize(T);
		bool isCurrentNodeEmpty(SNode<T>*);
		void insertAtBeginning(T);
		void insertAtEnd(T);
		void insertAtPosition(int,T);
		void insertAtPositionFromEnd(int, T);
		void deleteFromBeginning(); // return type void
		void deleteFromEnd(); // return type void
		void deleteANode(T); // use search - void
		void deleteAtPosition(int); 
		void deleteAtPositionFromEnd(int);
		bool search(T) ; // rename Search  - bool
		void displayList() ;
		void reverseList(); // void			
};

template<class T>
bool SList<T>::isEmpty()
{
	return head==NULL;
}

template<class T>
int SList<T>::length()
{
	 SNode<T>* temp=head;
	 while (temp != NULL) {
        length++;
        temp = temp->next;
    }
 	return length;	
}

template<class T>
bool SList<T>::isCurrentNodeEmpty(SNode<T>* currentNode)
{
	return currentNode==NULL;
}

template<class T>
SNode<T>* SList<T>::initialize(T el)
{
	SNode<T>* newNode = new SNode<T>();
	newNode->info = el;
	newNode->next = NULL;
	return newNode;
}
	
template<class T>
void SList<T>::insertAtBeginning(T el)
{
	// write this method again
	//head=new SNode<T>(el,head);
	
	SNode<T>* newNode = initialize(el);
	newNode->next = head;
	head = newNode;
	
	cout<<"\n New list after inserting: ";
	this->displayList();
}

template<class T>
void SList<T>::insertAtEnd(T el)
{
	if(head!=NULL)
	{
		SNode<T> *temp=initialize(el); //change this
		SNode<T> *tail=head;
		while(tail->next)
			tail=tail->next;
		tail->next=temp;
	}
	else
		head=initialize(el);
	
	cout<<"\n New list after inserting: ";
	this->displayList();
}

template<class T>
void SList<T>::deleteFromBeginning()
{
	if(isEmpty())
	{
		cout<<"\n The list is empty!";
		return;
	}
	T el=head->info;
	SNode<T> *temp=head;
	if(head->next==NULL)
		head=NULL;
	else
	head=head->next;
	delete temp;
	
	cout<<"\n New list after deleting "<<el<<" is ";
	this->displayList();
	
}

template<class T>
void SList<T>::deleteFromEnd()
{
	if(isEmpty())
	{
		cout<<"\n The list is empty!";
		return;
	}
	
	T el;
	if(head->next==NULL)
	{
		delete head;
		head=NULL;
	}
	else
	{
		SNode<T>* pred;
		for(pred=head; pred->next->next!=NULL; pred=pred->next);
		delete pred->next;
		pred->next=NULL;
	}
	cout<<"\n New list after deleting "<<el<<" is ";
	this->displayList();
}


template<class T>
void SList<T>::deleteANode(T el)
{
	if(!isEmpty())
	{
		if(head->next==NULL&&el==head->info)
		{
			delete head;
			head=NULL;
		}
		else if(el==head->info)
		{
			SNode<T> *temp=head->next;
			delete head;
			head=temp;
		}
		else
		{
			SNode<T> *temp,*target_node;
			for(temp=head; temp->next!=0&&!(temp->next->info==el);temp=temp->next);
			if(temp->next!=0)
			{
				target_node=temp->next;
				temp->next=temp->next->next;
		
				delete target_node;
			}
			else
			{
				cout<<"\n The element doesn't exist.";
				return;
			}	
		}
	}
	else
	{
		cout<<"\n The list is empty!";
		return;
	}
	cout<<"\n New list after deleting "<<el<<" is ";
	this->displayList();

}


template<class T>
bool SList<T>::search(T el)
{
	if(!isEmpty())
	 for(SNode<T> *temp=head; temp->next!=0; temp=temp->next)
	 {
	 	if(temp->info==el)
	 	 return true;
	 }
	 return false;
}


template<class T>
void SList<T>::displayList()
{
	if(!isEmpty())
		for(SNode<T> *trav=head; trav!=0; trav=trav->next)
		{
			cout<<trav->info<<" ";	
		}
}


template<class T>
void SList<T>::reverseList()
{
	if(head==0)
	{
		cout<<"\n List empty!";
		return;
	}
	if(head->next)
	{
		SNode<T> *current=head,*pred=NULL,*succ,*temp;
		
		while(current!=0)
		{
			succ=current->next;
			current->next=pred;
			pred=current;
			current=succ;
		}
		this->displayList();
	}
}


template<class T>
void SList<T>::insertAtPosition(int pos, T el)
{
	SNode<T> *temp=head;
	int i=0;
	
	while(i<pos)
	{
		temp=temp->next;
		
		if(temp==NULL)
		{
			cout<<"invalid position";
			return;
		}
		i++;
	}
	
	SNode<T> *newNode = initialize(el);
	newNode->next = temp->next;
	temp->next = newNode;
	
	cout<<"\n New list after inserting "<<el<<" is ";
	this->displayList();
}


int main()
{
	SList<int> L1,L2,L3;
	int choice=0,el,pos;
	while(choice!=9)
	{
		system("cls");
	 	cout<<"\n\t List operations \n\n1. Insert at beginning\n2. Insert at end\n3. Delete from beginning\n4. Delete from end\n5. Delete a node\n6. Display list\n7. Reverse list\n8. Insert at position\n9.exit\n\n";
		cout<<"input choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: cout<<"\n Enter the element to add - ";
					cin>>el;
					L1.insertAtBeginning(el);
					
					break;
					
			case 2: cout<<"\n Enter the element to add -";
					cin>>el;
					L1.insertAtEnd(el);
					
					break;
					
			case 3: L1.deleteFromBeginning();
					
					break;
					
			case 4: L1.deleteFromEnd();
					
					break;
					
			case 5: cout<<"\n Enter the key of the node to delete - ";
					cin>>el;
				
					break;
					
			case 6: cout<<"\n The list is ";
					L1.displayList();
					break;
					
			case 7: L1.reverseList();
					
					break;
					
			case 8: cout<<"\n Enter position n the element to add -";
					cin>>pos>>el;
					L1.insertAtPosition(pos,el);
					cout<<"\n New list: ";
					L1.displayList();
					break;
					
			case 9: exit(0);
					
			default: cout<<"\n wrong input";
			
					
		}
	}
	return 0;
}	
