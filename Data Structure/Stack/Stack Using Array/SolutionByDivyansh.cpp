#include <iostream>
using namespace std;

int size, ele, val, top=-1;

int push(int ele, int stack[]) 
{
	if(top >= size-1) {
		cout<<"Stack Overflow!"<<endl;
	}
	else {
		top++;
		stack[top] = ele;
	}
	return 0;
}

int pop(int stack[]) 
{
	if(top <= -1) {
		cout<<"Stack Underflow!"<<endl;
	}
	else {
		cout<<"Element popped : "<<stack[top]<<endl;
		top--;
	}
	return 0;
}

int display(int stack[])
{
	if(top >= 0) {
		cout<<"Elements in Stack : "<<endl;
		for(int i=top; i>=0; i--) {
			cout<<stack[i]<<" ";
		}
	}
	else {
		cout<<"Stack is empty!"<<endl;
	}
	cout<<"\n";
	return 0;
}

int main()
{
	cout<<"Enter size of stack : "<<endl;
	cin>>size;
	int stack[size];
	cout<<"1: Push in stack"<<endl;
	cout<<"2: Pop from stack"<<endl;
	cout<<"3: Display stack"<<endl;
	cout<<"4: Exit"<<endl;
	do {
		cout<<"Enter choice: "<<endl;
		cin>>val;
		switch(val) {
			case 1: cout<<"Enter element to push: "<<endl;
				cin>>ele;
				push(ele,stack);
				break;
			case 2: pop(stack);
				break;
			case 3: display(stack);
				break;
			case 4: break;
			default: cout<<"Invalid choice"<<endl;
		}
	} while(val != 4);
	return 0;
}
