#include <bits/stdc++.h>
using namespace std;

// Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int maxLevel = 0;
void leftHelper(Node* root, vector<int>& res, int level)
{
    if (root == NULL)
        return;

    if (maxLevel < level) {
        res.push_back(root->data);
        maxLevel = level;
    }
    leftHelper(root->left, res, level + 1);
    leftHelper(root->right, res, level + 1);
}

vector<int> leftView(Node* root)
{
    maxLevel = 0;
    vector<int> res;
    leftHelper(root, res, 1);
    return res;
}

Node* generateTree()
{
    queue<Node*> q;
    Node* root = NULL;

    int data;
    cout << "Enter root node's value : ";
    cin >> data;

    if (data == -1)
        return root;
    root = new Node(data);
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        int lchild, rchild;

        cout << "Enter left child of " << curr->data << " : ";
        cin >> lchild;
        if (lchild != -1) {
            curr->left = new Node(lchild);
            q.push(curr->left);
        }

        cout << "Enter right child of " << curr->data << " : ";
        cin >> rchild;
        if (rchild != -1) {
            curr->right = new Node(rchild);
            q.push(curr->right);
        }
    }
    return root;
}

int main()
{
    vector<int> res = leftView(generateTree());
    for (int& v : res) {
        cout << v << " ";
    }
    return 0;
}
