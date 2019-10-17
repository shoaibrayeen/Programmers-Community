//A C++ code to detect a loop in a singly Linked List.
#include<bits/stdc++.h>
using namespace std;

bool isLoop(Node* head){
	Node* slowptr=head;
	Node* fastptr=head;

	while(fast!=NULL && fast->next!=NULL){
		slowptr=slowptr->next;
		fastptr=fastptr->next->next;
	}
	if(slowptr==fastptr){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	Node* head=NULL;
	cin>>head;
	if(isLoop(head)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

	return 0;
}