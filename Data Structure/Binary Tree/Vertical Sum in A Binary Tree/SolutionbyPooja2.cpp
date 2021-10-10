/*
    Given a Binary Tree, find vertical sum of the nodes that are in same vertical line. Print all sums through different vertical lines.
*/

#include <iostream>
#include <map>
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
    void vertical_sum(node*);
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

void vertical_sum_cal(node* temp, int hd, auto& map)
{
    if (temp != NULL) {
        vertical_sum_cal(temp->left, hd - 1, map);

        map[hd] += temp->data;

        vertical_sum_cal(temp->right, hd + 1, map);
    }
}

void BinaryTree ::vertical_sum(node* root)
{
    map<int, int> Map;

    vertical_sum_cal(root, 0, Map);

    for (auto it = Map.begin(); it != Map.end(); it++) {
        cout << it->second << " ";
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
