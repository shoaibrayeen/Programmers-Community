#include "iostream"
using namespace std;


class node
{
    public:
    int data;
    node * left;
    node * right;
    node (int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }

};

node * build_bt()
{
    int d;
    cin>>d;
    if(d==-1)
    return NULL;

    node * root = new node(d);
    root->left = build_bt();
    root->right = build_bt();

    return root;

}

void print(node * root)
{
    if(root==NULL)
    return;
    
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}


int height(node * root)
{
    if(root==NULL)
    return 0;

    return max(height(root->left),height(root->right))+1;
}


void print_at_level(node * root,int level)
{
    if(root ==NULL)
    return;

    if(level==1)
    {
    cout<<root->data<<" ";
    return;
    }
    print_at_level(root->left,level-1);
    print_at_level(root->right,level-1);

    return;
}

void print_all_level(node * root)
{
    if(root ==NULL)
    return;

    int h = height(root);
    for(int i=h;i>=1;i--)
    {
        print_at_level(root,i);
        cout<<endl;
    }



}

int main()
{
    cout<<"Enter the nodes of BT, Complete the BT by adding -1, If such node doesn't exist:\n ";
    node * root = build_bt();
    cout<<"Inorder Traversal :";print(root);

    cout<<endl;

    print_all_level(root);
}






/*
INPUT:
1 2 4 -1 -1 -1 3 -1 5 -1 -1

Representation:

        1
    2       3
 4              5

 */
