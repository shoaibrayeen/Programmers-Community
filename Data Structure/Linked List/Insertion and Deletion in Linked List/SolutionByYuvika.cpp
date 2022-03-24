#include<iostream>
#include<conio.h>

using namespace std;

template<class T>
class DNode
{
	public:
		T info;
		DNode *next,*prev;
		
		DNode(const T& el, DNode* n=0, DNode* p=0)
		{
			info=el;
			next=n;
			prev=p;
		}
};

template<class T>
class DList
{
	protected:
		DNode<T> *head,*tail;
		
	public:
		DList()
		{
			head=tail=0;
		}
		
		~DList();
		
		bool isEmpty() const;
		void addToHead(T);
		void addToTail(T);
		T delFromHead();
		T delFromTail();
		bool delNode(T);
		bool isInList(T) const;
		void dispList() const;
		int reverseList();
	    int addToPos(int, T);
};


template<class T>
bool DList<T>::isEmpty() const
{
	return head==0;
}


template<class T>
DList<T>::~DList()
{
 for(DNode<T> *p; !isEmpty(); )
 {
 	p=head->next;
 	delete head;
 	head=p;
 }	
}


template<class T>
void DList<T>::addToHead(T el)
{
	head=new DNode<T>(el,head);
	if(tail==0)
		tail=head;
	else
		head->next->prev=head;
}


template<class T>
void DList<T>::addToTail(T el)
{
	tail=new DNode<T>(el,0,tail);
	if(head==0)
		head=tail;
	else
		tail->prev->next=tail;
}


template<class T>
T DList<T>::delFromHead()
{
	if(!isEmpty())
	{
		T el=head->info;
		if(head==tail)
		{
			delete head;
			head=tail=0;
		}
		else
		{
			head=head->next;
			delete head->prev;
			head->prev=0;
		}
		return el;
	}
	cout<<"\n Empty list.";
	return -1;
}


template<class T>
T DList<T>::delFromTail()
{
	if(!isEmpty())
	{
		T el=tail->info;
		if(head==tail)
		{
			delete tail;
			head=tail=0;	
		}	
		else
		{
			tail=tail->prev;
			delete tail->next;
			tail->next=0;
		}
		return el;
	}
	cout<<"\n Empty list.";
	return -1;
}


template<class T>
bool DList<T>::delNode(T el)
{
	if(!isEmpty())
	{
		if(head==tail&&head->info==el)
		{
			delete head;
			head=tail=0;	
		}	
		else if(head->info==el)
		{
			head=head->next;
			delete head->prev;
			head->prev=0;
		}
		else if(tail->info==el)
		{
			tail=tail->prev;
			delete tail->next;
			tail->next=0;
		}
		else
		{
			DNode<T> *temp=head->next;
			while(temp!=0)
			{
				if(temp->info==el)
					break;
				temp=temp->next;
			}
			if(temp==0)
			{
				cout<<"\n No such node.";
				return false;
			}
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			delete temp;
		}
		return true;
	}	
	cout<<"\n Empty list.";
	return false;
}


template<class T>
bool DList<T>::isInList(T el) const
{
	DNode<T> *first=head, *last=tail;
	
	do
	{
		if(first->info==el)
			return true;
		if(last->info==el)
			return true;
		
		first=first->next;
		last=last->prev;
			
	}while((first->prev!=last->next)||(first->prev!=last));
	
	return false;
}


template<class T>
void DList<T>::dispList() const
{
	if(!isEmpty())
	 for(DNode<T> *temp=head; temp!=0; temp=temp->next)
	 	cout<<temp->info<<" ";
	
}


template<class T>
int DList<T>::reverseList()
{
	if(isEmpty())
	{
		cout<<"\n Empty list.";
		return -1;
	}
	if(head!=tail)
	{
		DNode<T> *temp,*trav=head;
		while(trav!=0)
		{
			temp=trav->prev;
			trav->prev=trav->next;
			trav->next=temp;
			
			trav=trav->prev;
		}
		tail=head;
		head=temp->prev;
	}
	return 0;
}



template<class T>
int DList<T>::addToPos(int pos, T el)
{
	if(isEmpty())
	{
		cout<<"\n Empty list.";
		return -1;
	}
	int count;
	DNode<T> *temp;
	
	for(temp=head,count=1; count<pos&&temp->next!=0; temp=temp->next,count++);
	
	if(pos<count||pos>count)
	{
		cout<<"\n Invalid range.";
		return -1;
	}
	if(temp==head)
		addToHead(el);
	else if(temp==tail)
		addToTail(el);
	else
		{
		temp->next=new DNode<T>(el,temp->next,temp);
		temp->next->next->prev=temp->next;
		}
	return 0;
}




int main()
{
	DList<int> L1;
	int choice=0,el;
	while(choice!=10)
	{
		system("cls");
	 	cout<<"\n\t List operations \n\n1.add to head\n2.add to tail\n3.del from head\n4.del from tail\n5.del a node\n6.display\n7.reverse\n8.add to position\n9.search\n10.exit\n\n";
		cout<<"input choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: cout<<"\n Enter the element to add - ";
					cin>>el;
					L1.addToHead(el);
					cout<<"\n New list: ";
					L1.dispList();
					break;
					
			case 2: cout<<"\n Enter the element to add -";
					cin>>el;
					L1.addToTail(el);
					cout<<"\n New list: ";
					L1.dispList();
					break;
					
			case 3: el=L1.delFromHead();
					if(el!=-1)
					{
						cout<<"\n New list after deleting "<<el<<" is ";
						L1.dispList();
					}
					break;
					
			case 4: el=L1.delFromTail();
					if(el!=-1)
					{
						cout<<"\n New list after deleting "<<el<<" is ";
						L1.dispList();
					}
					break;
					
			case 5: cout<<"\n Enter the key of the node to delete - ";
					cin>>el;
					if(L1.delNode(el)!=false)
					{
						cout<<"\n New list after deleting "<<el<<" is ";
						L1.dispList();
					}
					break;
					
			case 6: cout<<"\n The list is ";
					L1.dispList();
					break;
					
			case 7: el=L1.reverseList();
					if(el!=-1)
					{
						cout<<"\n New list after reversing - ";
						L1.dispList();
					}
					break;
					
			case 8: int pos;
					cout<<"\n Enter the element to add - ";
					cin>>el;
					cout<<" Enter the position where to add - ";
					cin>>pos;
					el=L1.addToPos(pos,el);
					if(el!=-1)
					{
						cout<<"\n Updated list - ";
						L1.dispList();				
					}				
					break;
			
			case 9: cout<<"\n Enter the key to search - ";
					cin>>el;
					if(L1.isInList(el))
						cout<<"  Element found.";
					else
						cout<<"  Element not found.";
					break;
					
			case 10: exit(0);
					
			default: cout<<"\n wrong input";
			
					
		}
		getch();
	}
	return 0;
}
