#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *left,*right;
};

Node *newnode(int data)
{
	Node *temp=new Node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
/*
Node *lca(Node *root,int a,int b)
{
	if(!root)
		return NULL;
	
	if(root->data>a &&root->data>b)
		return lca(root->left,a,b);
	
	else if(root->data<a && root->data<b)
		return lca(root->right,a,b);
	else
		return root;
	
}*/

//iterative
Node *lca(Node *root,int a,int b)
{
	while(root)
	{
		
		if(root->data>a && root->data>b)
			root=root->left;
	
		else if(root->data<a && root->data<b)
			root=root->right;
		else
			break;
			
	}	
	 
	return root;
}

int main()
{
	Node *root = newnode(20);  
    root->left = newnode(8);  
    root->right = newnode(22);  
    root->left->left = newnode(4);  
    root->left->right = newnode(12);  
    root->left->right->left = newnode(10);  
    root->left->right->right = newnode(14); 
    
    root=lca(root,10,14);
    cout<<root->data;
}
