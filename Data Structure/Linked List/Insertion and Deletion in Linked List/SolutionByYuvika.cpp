#include<iostream>
//#include<stdlib.h>
//#include<process.h>
#include<conio.h>

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
		bool isCurrenNodeEmpty(SNode*);
		void addToHead(T);
		void addToTail(T);
		void addAtNth(int,T);
		int length();
		void addAtNthFromEnd(int, T);
		T delFromHead(); // return type void
		T delFromTail(); // return type void
		bool delNode(T); // use search - void
		bool isInList(T) ; // rename Search  - bool
		void dispList() ;
		int reverseList(); // void			
};

template<class T>
bool SList<T>::isEmpty()
{
	return head==NULL;
}

template<class T>
bool SList<T>::isCurrentNodeEmpty(Snode* currentNode)
{
	return currentNode==NULL;
}

template<class T>
void SList<T>::addToHead(T el)
{
	// write this method again
	//head=new SNode<T>(el,head);
}

template<class T>
void SList<T>::addToTail(T el)
{
	if(head!=NULL)
	{
		SNode<T> *temp=new SNode<T>(el); //change this
		SNode<T> *tail=head;
		while(tail->next)
			tail=tail->next;
		tail->next=temp;
	}
	else
		head=new SNode<T>(el);
}

template<class T>
T SList<T>::delFromHead()
{
	if(isEmpty())
	{
		cout<<"\n The list is empty!";
		return -1;
	}
	T el=head->info;
	SNode<T> *temp=head;
	if(head->next==NULL)
		head=NULL;
	else
	head=head->next;
	
	delete temp;
	return el;
}

template<class T>
T SList<T>::delFromTail()
{
	if(isEmpty())
	{
		cout<<"\n The list is empty!";
		return -1;
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
	return el;
}


template<class T>
bool SList<T>::delNode(T el)
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
				return false;
			}	
		}
	}
	else
	{
		cout<<"\n The list is empty!";
		return false;
	}
	return true;
}


template<class T>
bool SList<T>::isInList(T el)
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
void SList<T>::dispList()
{
	if(!isEmpty())
		for(SNode<T> *trav=head; trav!=0; trav=trav->next)
		{
			cout<<trav->info<<" ";	
		}
}


template<class T>
int SList<T>::reverseList()
{
	if(head==0)
	{
		cout<<"\n List empty!";
		return -1;
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
		dispList();
	}
	return 0;
}


template<class T>
void SList<T>::addAtNth(int pos, T el)
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
	
	SNode<T> *newNode = new SNode<T>(el,temp->next);
	temp->next = newNode;
	
	return;
}


int main()
{
	SList<int> L1,L2,L3;
	int choice=0,el,pos;
	while(choice!=9)
	{
		system("cls");
	 	cout<<"\n\t List operations \n\n1.add to head\n2.add to tail\n3.del from head\n4.del from tail\n5.del a node\n6.display\n7.reverse\n8.add at nth\n9.exit\n\n";
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
					
			case 8: cout<<"\n Enter position n the element to add -";
					cin>>pos>>el;
					L1.addAtNth(pos,el);
					cout<<"\n New list: ";
					L1.dispList();
					break;
					
			case 9: exit(0);
					
			default: cout<<"\n wrong input";
			
					
		}
		getch();
	}
	return 0;
}	
