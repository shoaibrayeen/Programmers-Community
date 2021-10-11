#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void rightView(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        
        for(int i=0;i<n;i++){
            Node* t = q.front();
            q.pop();

            if(i==n-1){
                cout<<t->data<<" ";
            }

            if(t->left){
                q.push(t->left);
            }
            if(t->right){
                q.push(t->right);
            }
        }
        
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->right = new Node(8);

    rightView(root);
}