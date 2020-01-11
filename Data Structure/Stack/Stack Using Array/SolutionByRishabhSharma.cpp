#include<bits/stdc++.h>
using namespace std;

int s[10000]= {0},top=-1;

void push(int x)
{
	top++;
	if(top==10000)
		cout<<"Overflow Condition ";
	else
		s[top]=x;
}
int pop()
{
	if(top<0)
		cout<<"Underflow Condition ";
	else
		return s[top--];
	return 0;
}

int main()
{
	int ch;
	do{
		cout<<"Stack using Array "<<endl;
		cout<<"1 Add a number "<<endl;
		cout<<"2 Delete a number "<<endl;
		cout<<"3 Exit "<<endl;
		cin>>ch;

		switch(ch)
		{
			case 1:
			   {
			   	int x;
			   	cout<<"Enter the number "<<endl;
			   	cin>>x;

			   	push(x);
			   }
			   break;

			case 2:
			{
				cout<<"Deleted Nmber "<<pop()<<endl;

			}
		}
	}while(ch!=3);
}
