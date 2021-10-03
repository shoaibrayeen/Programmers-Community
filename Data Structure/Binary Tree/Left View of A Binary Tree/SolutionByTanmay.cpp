#include <bits/stdc++.h>
using namespace std;

// Tree Node
class Node
{
  public:
    int data;
    Node* left;
    Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


int maxLevel = 0;
void leftHelper(Node *root, vector<int> &res, int level)
{
    if (root==NULL) return;
    
    if (maxLevel < level)
    {
        res.push_back(root->data);
        maxLevel = level;
    }
    leftHelper(root->left, res, level+1);
    leftHelper(root->right, res, level+1);

}

vector<int> leftView(Node *root)
{
    maxLevel = 0;
    vector<int> res;
    leftHelper(root, res, 1);
    return res;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(40);
    vector<int> res = leftView(root);
    for (int &v:res)
    {
        cout<<v<<" ";        
    }
    return 0;
}
