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
		SNode<T>* tail();
		SNode<T>* initialize(T);
		bool isCurrentNodeEmpty(SNode<T>*);
		void insertAtBeginning(T);
		void insertAtEnd(T);
		void insertAtPosition(int,T);
		void insertAtPositionFromEnd(int, T);
		void deleteFromBeginning();
		void deleteFromEnd();
		void deleteANode(T);
		void deleteAtPosition(int); 
		void deleteAtPositionFromEnd(int);
		bool search(T);
		void displayList() ;
		void reverseList();
		void sortList();
		SNode<T>* sortedInsert(T, SNode<T>*);
		SNode<T>* midNode(SNode<T>*, SNode<T>*);
		SList<T>* mergeTwoSortedLists(SList<T>*, SList<T>*);
		SList<T>* mergeSort(SNode<T>*, SNode<T>*);
};

template<class T>
bool SList<T>::isEmpty()
{
	return head==NULL;
}

template<class T>
SNode<T>* SList<T>::tail()
{
	SNode<T>* temp=head;
	if(isEmpty()){
		return temp;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	return temp;
}

template<class T>
int SList<T>::length() {
    	int length = 0;
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
	else {
		head=initialize(el);
	}
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
		if(this->search(el)) {
			SNode<T> *temp=head;
			if(temp->next==NULL&&el==temp->info)
			{
				head=NULL;
			}
			else if(el==temp->info)
			{
				head = head->next;
				delete temp;
			}
			else
			{
				SNode<T> *targetNode = NULL;
				for(temp=head; temp->next!= NULL && !(temp->next->info==el);temp=temp->next);
				if(temp->next!= NULL)
				{
					targetNode=temp->next;
					temp->next=temp->next->next;
					delete targetNode;
				}	
			}
			cout<<"\n New list after deleting "<<el<<" is ";
			this->displayList();
		}
		else {
			cout << "\nValue does not exist in the List\n";
		}
	}
	else
	{
		cout<<"\n The list is empty!";
		return;
	}

}


template<class T>
bool SList<T>::search(T el)
{
	if(!isEmpty())
	 for(SNode<T> *temp=head; temp->next != NULL; temp=temp->next)
	 {
	 	if(temp->info==el)
	 	 return true;
	 }
	 return false;
}


template<class T>
void SList<T>::displayList()
{
	if(!isEmpty()) {
		for(SNode<T> *trav=head; trav != NULL; trav=trav->next)
		{
			cout<<trav->info<<" ";	
		}
	}
}


template<class T>
void SList<T>::reverseList()
{
	if(head==NULL)
	{
		cout<<"\n List empty!";
		return;
	}
	if(head->next != NULL)
	{
		SNode<T> *current=head,*pred=NULL,*succ=NULL;

		while(current!=NULL)
		{
			succ=current->next;
			current->next=pred;
			pred=current;
			current=succ;
		}
		head = pred;
	}
	this->displayList();
}


template<class T>
void SList<T>::insertAtPosition(int pos, T el)
{
	SNode<T> *temp=head;
	int i = 1;

    if(pos == 1) {
        this->insertAtBeginning(el);
        return;
    }
	while(i<pos-1)
	{
	    i++;
		temp=temp->next;

		if(temp==NULL)
		{
			cout<<"invalid position";
			return;
		}
	}

	SNode<T> *newNode = initialize(el);
	newNode->next = temp->next;
	temp->next = newNode;

	cout<<"\n New list after inserting "<<el<<" is ";
	this->displayList();
}


template<class T>
void SList<T>::sortList(){
	if(isEmpty()) {
	    cout << "\nList is empty\n";
	    return;
	}
	SNode<T>* temp=head;
	SNode<T>* sortedHead=NULL;
	while(temp!=NULL){
		sortedHead = sortedInsert(temp->info, sortedHead);
		temp=temp->next;
	}
	cout<<"\n Sorted list is :\t";
	for(SNode<T> *trav=sortedHead; trav != NULL;)
	{
		cout<<trav->info<<" ";	
		SNode<T> *deleteNode = trav;
		trav=trav->next;
		delete deleteNode;
	}
}

template<class T>
SNode<T>* SList<T>::sortedInsert(T element, SNode<T>* sortedHead)
{
    SNode<T>* newNode = initialize(element);
	if(sortedHead==NULL || sortedHead->info > newNode->info){
		
		newNode->next = sortedHead;
		sortedHead = newNode;
	}
	else{
		SNode<T>* curr = sortedHead;
		while(curr->next!=NULL && curr->next->info < newNode->info){
			curr=curr->next;
		}
		newNode->next = curr->next;
		curr->next = newNode;
	}
	return sortedHead;
}		

template<class T>
SNode<T>* SList<T>::midNode(SNode<T>* head, SNode<T>*tail)
{
	SNode<T>* slow=head;
	SNode<T>* fast=head;
	
	while(fast!=tail || fast!=tail->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	 return slow;
}

template<class T>
SList<T>* SList<T>::mergeSort(SNode<T>* head, SNode<T>* tail){
	SList<T> *baseList, *firstSortedHalf, *secondSortedHalf, *sortedList;
	
	if(head==tail){
		baseList.insertAtEnd(head->info);
		return baseList;
	}
	
	SNode<T>* mid = midNode(head,tail);
	firstSortedHalf=mergeSort(head,mid);
	secondSortedHalf=mergeSort(mid,tail);
	sortedList=mergeTwoSortedLists(firstSortedHalf, secondSortedHalf);
}

template<class T>
SList<T>* SList<T>::mergeTwoSortedLists(SList<T>* list1, SList<T>* list2){
	
	SNode<T>* ptr1=list1.head;
	SNode<T>* ptr2=list2.head;
	
	SList<T>* result;
	
	while(ptr1!=NULL && ptr2!=NULL){
		if(ptr1->info < ptr2->info){
			result.insertAtEnd(ptr1->info);
			ptr1=ptr1->next;
		}
		else{
			result.insertAtEnd(ptr2->info);
			ptr2=ptr2->next;
		}
	}
	while(ptr1!=NULL){
		result.insertAtEnd(ptr1->info);
		ptr1=ptr1->next;
	}
	while(ptr2!=NULL){
		result.insertAtEnd(ptr2->info);
		ptr2=ptr2->next;
	}
	
	return result;
}


int main()
{
	SList<int> L1,L2,L3;
	int choice=0,el,pos;
	while(choice!=10)
	{
	 	cout<<"\n\t List operations \n\n1. Insert at beginning\n2. Insert at end\n3. Delete from beginning\n4. Delete from end\n5. Delete a node\n6. Display list\n7. Reverse list\n8. Insert at position\n9. Sort List\n10. Merge Sort11. exit\n\n";
		cout<<"input choice : ";
		cin>>choice;

		switch(choice)
		{
			case 1: cout<<"\n Enter the element to add - ";
					cin>>el;
					L1.insertAtBeginning(el);
                    cout << "\n length\t:\t" <<L1.length();
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
            		case 9: L1.sortList();
                    		break;
			
			case 10: SNode<T>* tail = L1.tail();
				L1.mergeSort(L1->head, tail);
				break;
			case 11: exit(0);

			default: cout<<"\n wrong input";


		}
	}
	return 0;
}
