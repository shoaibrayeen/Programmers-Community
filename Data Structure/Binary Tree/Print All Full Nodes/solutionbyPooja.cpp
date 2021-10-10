//Given a binary tree, print all nodes which are full nodes. Full Nodes are nodes which has both left and right children as non-empty.

#include <iostream>
#include <queue>
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
    void full_node();
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

    while (1) {
        cout << "where do you wnat to insert  left/right ? (l/r)  ";
        cin >> ch;

        if (ch == 'r' && rt->right == NULL) {
            rt->right = temp;
            break;
        } else if (ch == 'l' && rt->left == NULL) {
            rt->left = temp;
            break;
        } else {
            if (ch == 'r')
                rt = rt->right;
            else
                rt = rt->left;
        }
    }
}

void BinaryTree ::full_node()
{
    queue<node*> q1;
    node* temp;

    if (root != NULL) {
        q1.push(root);
        while (!q1.empty()) {
            temp = q1.front();
            q1.pop();

            if (temp->left != NULL && temp->right != NULL)
                cout << temp->data << " ";

            if (temp->left != NULL)
                q1.push(temp->left);

            if (temp->right != NULL)
                q1.push(temp->right);
        }
    }
}

int main()
{
    int op;
    BinaryTree ob;
    cout << "1.insertion";
    cout << "\n2.Print Full Nodes";
    cout << "\n5.exit";

    while (1) {
        cout << "\nEnter operation ";
        cin >> op;
        if (op == 1) {
            node* temp = ob.create();
            if (ob.root == NULL)
                ob.root = temp;
            else
                ob.insert(ob.root, temp);
        } else if (op == 2)
            ob.full_node();
        else if (op == 3)
            exit(0);
        else
            cout << "\nWrong option ";
    }
}
