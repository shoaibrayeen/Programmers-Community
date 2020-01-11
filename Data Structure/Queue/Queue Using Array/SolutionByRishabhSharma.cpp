#include<bits/stdc++.h>
using namespace std;

int q[1000] ={0},f=0,e=0;

void Enqueu(int n){
	if(e==100)
		cout<<"Overflow Condition "<<endl;
	else
		q[e++]=n;
}
int Dequeue()
{
	if(f==e){
		cout<<"Underflow Condition "<<endl;
		return 0;
	}
	else
	{
		return q[f++];

	}
}
int main()
{
	int ch;
	cout<<"Queue using Array "<<endl;
	do{
		
		cout<<"1 Insertion into Queue "<<endl;
		cout<<"2 Deletion from Queue "<<endl;
		cout<<"3 Exit "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			    {
			    	cout<<"Enter the number to add in Queue "<<endl;
			    	int n ;
			    	cin>>n;
			    	Enqueu(n);
			    }
			    break;
			case 2:
			{
				cout<<"The Deleted number "<<Dequeue()<<endl;

			}
			break;

		}
	}while(ch!=3);
}
