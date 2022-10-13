/* 
the lowest common ancestor of two nodes v and w in a tree or directed acyclic graph T 
is the lowest node that has both v and w as descendants,
where we define each node to be a descendant of itself. 
*/

#include<iostream>
#include<deque>
#include<vector>
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
 
    void bfs_level( node* root){
        deque<node*>  dq;
        dq.push_back(root);
        dq.push_back(NULL);
 
        while(!dq.empty()){
            node* f=dq.front();
 
            if(f==NULL){
                cout<<endl;
                dq.pop_front();
                if(!dq.empty()){
                    dq.push_back(NULL);
                }
            }
            else{
                cout<<f->data<<" ";
                dq.pop_front();
                if(f->left){
                    dq.push_back(f->left);
                }
                if(f->right){
                    dq.push_back(f->right);
                }
            }
        }
        return;
    }
 
class custom{
    public:
        bool left_key1;
        bool right_key2;
        node* value;    // store the value of LCA
};
 
custom* helper(node* root, node* p , node* q){
    // base case
    if( root==NULL){
        return NULL;
    }
 
    // recursive case
    custom* left_ans=helper(root->left,p,q);
    if(left_ans!=NULL && left_ans->value!=NULL){
        return left_ans;
    }
    custom* right_ans=helper(root->right,p,q);
    if(right_ans!=NULL && right_ans->value!=NULL){
        return right_ans;
    }
    custom* result = new custom();
    if(left_ans!=NULL && right_ans!=NULL){
        result->value=root;
        result->left_key1=true;
        result->right_key2=true;
        return result;
    }
    else if (root->data == p->data){
        result->left_key1=true;
        result->right_key2= ( left_ans ? left_ans->right_key2 : false) || (right_ans?right_ans->right_key2:false);
        if(result->left_key1 && result->right_key2){
            result->value=root;
        }
        return result;
    }
     else if (root->data == q->data){
        result->right_key2=true;
        result->left_key1= ( left_ans ? left_ans->left_key1 : false) || (right_ans?right_ans->left_key1:false);
        if(result->left_key1 && result->right_key2){
            result->value=root;
        }
        return result;
    }
    else if( left_ans){
        return left_ans;
    }
    else if( right_ans){
        return right_ans;
    }
    return NULL;
}
 
 
int main(){
   node * root=buildtree();
    bfs_level(root);
    node* p=buildtree();
    cout<<endl;
    bfs_level(p);
    node* q=buildtree();
    cout<<endl;
    bfs_level(q);
    custom* result_ancestor=helper(root,p,q);
    cout<<endl<<result_ancestor->value->data;
 
 
}
