//Given a Binary Tree, find sum of all left leaves in it.

#include<iostream>
#include<stack>
using namespace std;

struct node
{
    node *left;
    int data;
    node *right;
};

class BinaryTree
{
    public:
    node *root;

    BinaryTree()
    {
        root = NULL;
    }
    node  *create();
    void insert(node *,node *);
    int sum_of_left_leaves(node *, char);

};

node *BinaryTree::create()
{
    node *temp = new node();

    cout << "\nEnter data ";
    cin >> temp->data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}
void BinaryTree::insert(node *rt,node *temp)
{
    char ch;

    while(1)
    {
        cout << "where do you wnat to insert  left/right ? (l/r)  ";
        cin >> ch;

        if(ch == 'r' && rt->right == NULL)
        {
            rt->right = temp;
            break;
        }
        else if(ch == 'l' && rt->left == NULL)
        {
            rt->left = temp;
            break;
        }
        else
        {
            if(ch == 'r')
                rt = rt->right;
            else
                rt = rt->left;
        }

    }

}

int BinaryTree ::sum_of_left_leaves(node *temp, char ch)
{
    static int sum = 0;
    if(temp != NULL)
    {
        if(ch == 'l' && temp -> right == NULL && temp -> left == NULL)
                sum += temp -> data;
        sum_of_left_leaves(temp -> left, 'l');
        sum_of_left_leaves(temp -> right, 'n');

    }
    return sum;
}

int main()
{
    int op;
    BinaryTree ob;
    cout << "1.insertion";
    cout << "\n2.Sum of left leaves";
    cout << "\n5.exit";

    while(1)
    {
        cout << "\nEnter operation ";
        cin >> op;
        if(op==1)
        {
            node *node = ob.create();
            if(ob.root == NULL)
                ob.root = node;
            else
                ob.insert(ob.root,node);
        }
        else if(op == 2)
        {
            op = ob.sum_of_left_leaves(ob.root, 'n');
            cout << "\nSum of left leaves are : " << op;
            exit(0);
        }
        else if(op == 3)
            exit(0);
        else
            cout << "\nWrong option ";

    }
}
