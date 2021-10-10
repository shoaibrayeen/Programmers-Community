//Given a binary tree, find the Minimum node Value in it.

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
    int min_element(node*);
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

int BinaryTree ::min_element(node* temp)
{
    int min = -1;
    stack<node*> s1;
    if (temp != NULL) {
        min = temp->data;
        s1.push(temp);
        while (!s1.empty()) //Using preorder traversal to traverse the tree
        {
            temp = s1.top();
            s1.pop();
            if (temp != NULL) {
                if (temp->data < min)
                    min = temp->data;
                s1.push(temp->right);
                s1.push(temp->left);
            }
        }
    }
    return min;
}

int main()
{
    int op;
    BinaryTree ob;
    cout << "1.insertion";
    cout << "\n2.Minimum Element";
    cout << "\n5.exit";

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
            op = ob.min_element(ob.root);
            cout << "\nMinimum element is : " << op;
        } else if (op == 3)
            exit(0);
        else
            cout << "\nWrong option ";
    }
}
