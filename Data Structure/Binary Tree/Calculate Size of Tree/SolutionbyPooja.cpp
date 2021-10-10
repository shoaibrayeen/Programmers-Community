/*
   Given A Binary Tree and you need to calculate the size of the tree.

          Size of a tree = Size of left subtree + 1 + Size of right subtree
*/

#include <iostream>
#include <stack>

using namespace std;

struct node {
    node* left;
    int data;
    node* right;
};

class BinaryTree {
public:
    node* root;

    BinaryTree()
    {
        root = NULL;
    }
    node* create();
    void insert(node*, node*);
    int size_of_tree(node*);
};

node* BinaryTree::create()
{
    node* temp = new node();

    cout << "\nEnter data ";
    cin >> temp->data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void BinaryTree::insert(node* rt, node* temp)
{
    char ch;
    cout << "where do you wnat to insert to left/right ? (l/r)  ";
    cin >> ch;

    if (ch == 'r') {
        if (rt->right == NULL) {
            rt->right = temp;
            return;
        } else
            insert(rt->right, temp);
    } else {
        if (rt->left == NULL) {
            rt->left = temp;
            return;
        } else
            insert(rt->left, temp);
    }
}

int BinaryTree ::size_of_tree(node* temp)
{
    if (temp == NULL)
        return 0;
    else {
        int hleft = size_of_tree(temp->left);
        int hright = size_of_tree(temp->right);

        return (hleft + hright + 1);
    }
}

int main()
{
    int op;
    BinaryTree ob;
    cout << "1.insertion ";
    cout << "\n2.Size of Tree ";
    cout << "\n5.exit ";

    while (1) {
        cout << "\nEnter operation ";
        cin >> op;
        if (op == 1) {
            node* node = ob.create();
            if (ob.root == NULL)
                ob.root = node;
            else
                ob.insert(ob.root, node);
        } else if (op == 2) {
            op = ob.size_of_tree(ob.root);
            cout << "\nSize of tree is " << op;
        } else if (op == 3)
            exit(0);
        else
            cout << "\nWrong option ";
    }
}
