#include <iostream>
using namespace std;

int size, front = -1, rear = -1, val, ele;

int Enqueue(int ele, int queue[]) {
	if(rear == size - 1) {
		cout<<"Queue is Overflow!"<<endl;
	}
	else {
		if(front == -1) {
			front = 0;
		}
			rear++;
			queue[rear] = ele;
	}
	return 0;
}

int Dequeue(int queue[]) {
	if(front == -1 || front > rear) {
		cout<<"Queue is Underflow!"<<endl;
	}
	else {
		cout<<"Element deleted from queue: "<<queue[front]<<endl;
		front++;
		if(front > rear) {
			front = rear = -1;
		}
	}
	return 0;
}

int Display(int queue[]) {
	if(front == -1) {
		cout<<"Queue is empty!"<<endl;
	}
	else {
		cout<<"Elements of Queue: "<<endl;
		for(int i = front; i <= rear; i++) {
			cout<<queue[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

int main()
{
	cout<<"Enter size of queue : "<<endl;
	cin>>size;
	int queue[size];
	cout<<"1: Enqueue"<<endl;
	cout<<"2: Dequeue"<<endl;
	cout<<"3: Display Queue"<<endl;
	cout<<"4: Exit"<<endl;
	do {
		cout<<"Enter choice: "<<endl;
		cin>>val;
		switch(val) {
			case 1: cout<<"Enter element to insert: "<<endl;
				cin>>ele;
				Enqueue(ele, queue);
				break;
			case 2: Dequeue(queue);
				break;
			case 3: Display(queue);
				break;
			case 4: break;
			default: cout<<"Invalid choice!!!"<<endl;
		}
	} while(val != 4);
	return 0;
}
