//Given A Binary Tree and you need to Check If Two Trees are Identical or Not

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
bool identical_tree(node* temp1, node* temp2)
{
    queue<node*> q1, q2;

    if (temp1 != NULL && temp2 != NULL) {
        q1.push(temp1);
        q2.push(temp2);

        while (!q1.empty() && !q2.empty()) //using Breadth first search to traverse the tree
        {
            temp1 = q1.front();
            temp2 = q2.front();

            q1.pop();
            q2.pop();

            if (temp1->data != temp2->data)
                return 0;
            if (temp1->left != NULL && temp2->left != NULL) {
                q1.push(temp1->left);
                q2.push(temp2->left);
            }

            if (temp1->right != NULL && temp2->right != NULL) {
                q1.push(temp1->right);
                q2.push(temp2->right);
            }
        }
        return 1;
    }

    return 0;
}

int main()
{
    char ch;
    BinaryTree ob[2];

    for (int i = 0; i < 2; i++) {
        cout << "Want to enter node for " << i + 1 << " Bianry Tree ? (y/n) ";
        cin >> ch;

        while (ch == 'y') {

            node* temp = ob[i].create();
            if (ob[i].root == NULL)
                ob[i].root = temp;
            else
                ob[i].insert(ob[i].root, temp);

            cout << "Want to enter more node ? (y/n) ";
            cin >> ch;
        }
    }

    bool check = identical_tree(ob[0].root, ob[1].root);
    if (check == 1)
        cout << "\nTrees are identical ";
    else
        cout << "\nTrees are not identical ";
    return 0;
}
