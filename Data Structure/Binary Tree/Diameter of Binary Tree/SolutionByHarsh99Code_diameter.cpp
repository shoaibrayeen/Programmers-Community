
/*
  Program Description - This program return diameter of tree using fast technique.
  
*/


#include<iostream>
        using namespace std;
 
        class node {
            public:
                int data;
                node* left;
                node* right;
 
                node(int data){
                    this->data=data;
                    left=NULL;
                    right=NULL;
                }
        };
 
        node* buildtree(){
            int d;
            cin>>d;
 
            if(d==-1){
                return NULL;
            }
            node* root=new node(d);
            root->left=buildtree();
            root->right=buildtree();
            return root;
 
        }
        void print(node * root ){
            if(root==NULL){
                return;
            }
            cout<<root->data<<" ";
            print(root->left);
            print(root->right);
            return;
        }
         int height(node* root){
             if(root==NULL){
                 return 0;
             }
             int left_subtree=height(root->left);
             int right_subtree=height(root->right);
             return max(left_subtree,right_subtree) + 1 ;
         }
 
         int diameter( node* root){
             if(root==NULL){
                 return 0;
             }
             int h1=height(root->left);
             int h2=height(root->right);
             int option_1=h1+h2;
             int option_2=diameter(root->left);
             int option_3=diameter(root->right);
             return max(option_1,max(option_2,option_3));
         }
        class my_pair{
                public: 
                    int height;
                    int diameter;
        };
 
        my_pair diameter_fast(node* root){
            my_pair pp;
            if(root==NULL){
                pp.diameter=pp.height=0;
                return pp;
            }
            // otherwise
            my_pair left=diameter_fast(root->left);
            my_pair right=diameter_fast(root->right);
 
            pp.height=max(left.height,right.height) + 1;
            pp.diameter=max( left.height+right.height ,max(left.diameter , right.diameter));
            return pp;
        }
 
        int main(){
            node* root=buildtree();
            print(root);
            my_pair p = diameter_fast(root);
            cout<<endl;
            cout<<p.height<<endl;
            cout<<p.diameter;
 
        }
