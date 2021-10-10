// Author : Vikram D Singh
// Date :
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void mt(struct Node *root)
{
    if (root == NULL)
        return;
    else
    {
        struct Node *temp;
        mt(root->left);
        mt(root->right);
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}
vector<int> BFS(struct Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            struct Node *node = q.front();
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            ans.push_back(node->data);
        }
    }
    return ans;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    vector<int> v = BFS(root);
    for (auto it : v)
        cout << it << " ";
    cout << endl;
    mt(root);
    vector<int> b = BFS(root);
    for (auto it : b)
        cout << it << " ";

    return 0;
}