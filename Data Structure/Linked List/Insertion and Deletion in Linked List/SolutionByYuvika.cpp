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
		
		SNode(T el,SNode *ptr=0)
		{
			info=el;
			next=ptr;
		}
};

template<class T>
class SList
{
	private:
		SNode<T> *head, *tail;
	public:
		SList()
		{
			head=tail=0;
		}
		
		~SList();
		
		bool isEmpty() const;
		void addToHead(T);
		void addToTail(T);
		T delFromHead();
		T delFromTail();
		bool delNode(T);
		bool isInList(T) const;
		void dispList() const;
		int reverseList();
					
};

template<class T>
bool SList<T>::isEmpty() const
{
	return head==0;
}


template<class T>
SList<T>::~SList()
{
 for(SNode<T> *p; !isEmpty(); )
 {
 	p=head->next;
 	delete head;
 	head=p;
 }	
}

template<class T>
void SList<T>::addToHead(T el)
{
	head=new SNode<T>(el,head);
	if(tail==0)
		tail=head;
}

template<class T>
void SList<T>::addToTail(T el)
{
	if(tail!=0)
	{
		tail->next=new SNode<T>(el);
		tail=tail->next;
	}
	else
		head=tail=new SNode<T>(el);
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
	if(head==tail)
		head=tail=0;
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
	if(head==tail)
	{
		delete tail;
		head=tail=0;
	}
	else
	{
		SNode<T>* pred;
		for(pred=head; pred->next!=tail; pred=pred->next);
		delete tail;
		tail=pred;
		tail->next=0;
	}
	return el;
}


template<class T>
bool SList<T>::delNode(T el)
{
	if(!isEmpty())
	{
		if(head==tail&&el==head->info)
		{
			delete head;
			head=tail=0;
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
				if(temp->next==tail)
					tail=temp;
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
bool SList<T>::isInList(T el) const
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
void SList<T>::dispList() const
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
	if(head!=tail)
	{
		SNode<T> *current=head,*pred=0,*succ,*temp;
		
		while(current!=0)
		{
			succ=current->next;
			current->next=pred;
			pred=current;
			current=succ;
		}
		// swapping head n tail
		cout<<head->info<<" "<<tail->info<<endl;
		/*temp=head;
		cout<<"temp=head "<<temp->info<<endl;
		head=tail;
		cout<<"head=tail "<<head->info<<endl;
		tail=temp;
		cout<<"tail=temp "<<tail->info<<endl;*/
		tail=head;
		head=pred;
	}
	return 0;
}



int main()
{
	SList<int> L1,L2,L3;
	int choice=0,el;
	while(choice!=9)
	{
		system("cls");
	 	cout<<"\n\t List operations \n\n1.add to head\n2.add to tail\n3.del from head\n4.del from tail\n5.del a node\n6.display\n7.reverse\n8.exit\n\n";
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
			
			case 8: exit(0);
					
			default: cout<<"\n wrong input";
			
					
		}
		getch();
	}
	return 0;
}	
