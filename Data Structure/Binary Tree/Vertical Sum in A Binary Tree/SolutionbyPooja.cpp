/*
    Given a Binary Tree, find vertical sum of the nodes that are in same vertical line. Print all sums through different vertical lines.
*/

#include <iostream>
using namespace std;

struct node {
    node* left;
    int data;
    node* right;
};

struct list {
    list* left;
    list* right;
    int data;
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
    void vertical_sum(node*);
    void vertical_sum_cal(node*, list*, char);
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

void BinaryTree ::vertical_sum_cal(node* temp, list* LL, char ch)
{
    if (temp != NULL) {
        if (ch == 'l' && LL->left == NULL) {
            list* LL1 = new list();
            LL1->data = temp->data;
            LL1->right = LL;
            LL->left = LL1;
            LL1->left = NULL;
            LL = LL1;

        } else if (ch == 'r' && LL->right == NULL) {
            list* LL1 = new list();
            LL1->data = temp->data;
            LL1->left = LL;
            LL->right = LL1;
            LL1->right = NULL;
            LL = LL1;

        } else {
            if (ch == 'r')
                LL->right->data += temp->data;
            else if (ch == 'l')
                LL->left->data += temp->data;
            else
                LL->data += temp->data;
        }

        vertical_sum_cal(temp->left, LL, 'l');
        vertical_sum_cal(temp->right, LL, 'r');
    }
}

void BinaryTree ::vertical_sum(node* root)
{
    list* temp = new list();
    temp->data = 0;
    temp->left = NULL;
    temp->right = NULL;

    vertical_sum_cal(root, temp, 'c');

    while (temp->left != NULL)
        temp = temp->left;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->right;
    }
}

int main()
{
    int op;
    BinaryTree ob;
    cout << "1.insertion";
    cout << "\n2.vertical sum";
    cout << "\n3.exit";

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
            ob.vertical_sum(ob.root);
        } else if (op == 3)
            exit(0);
        else
            cout << "\nWrong option ";
    }
}
