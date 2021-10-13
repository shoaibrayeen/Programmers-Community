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

Node* insertBST(Node* root, int val)
{
    if(root==NULL){
        Node* n = new Node(val);
        return n;
    }
    
    if(val < root->data){
        root->left = insertBST(root->left,val);
    }
    else{
        //if(val > root->data)
        root->right = insertBST(root->right,val);
    }
    return root;
}

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
    Node *root = NULL;
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements: ";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   root = insertBST(root,arr[0]);
   for(int i=1;i<n;i++)
   {
       insertBST(root,arr[i]);
   }

    rightView(root);
}