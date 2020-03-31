//Find Sum of All Nodes in Given Binary tree.

#include <iostream>
#include <stack>
using namespace std;

struct node{
    node *left;
    node *right;
    int data;
};

class BinaryTree{

    public:
        node *root;

        BinaryTree()
        {
            root = NULL;
        }

        node* create_node(int);
        void insertion(node *);
        int cal_sum(node *);
};

node* BinaryTree :: create_node(int ele)
{
    node* temp = new node();
    temp->data = ele;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void BinaryTree :: insertion( node* temp)
{
    node *temp2 , *prev;

    if( root == NULL)
        root = temp;
    else
    {
        temp2 = root;
        while(temp2 != NULL)
        {
            prev = temp2;
            if( temp2->data > temp->data)
                temp2 = temp2->left;
            else
                temp2 = temp2->right;

        }
        if( prev->data > temp->data )
            prev->left = temp;
        else
            prev->right = temp;
    }
}

int BinaryTree :: cal_sum(node *temp)
{
    stack <node *> s1 ;
    int sum = 0;

    if(temp != NULL)
    {
        s1.push(temp);
        while( !s1.empty() )                //using iterative preorder to traverse the tree;
        {
            temp = s1.top();
            s1.pop();
            if(temp != NULL)
            {
                sum += temp->data;
                s1.push(temp->right);
                s1.push(temp->left);
            }
        }
    }
    return sum;
}




int main()
{
    int op;
    int ele;
    BinaryTree ob;

    cout << "\n1.Insertion ";
    cout << "\n2. Sum of node";
    cout << "\n3. Exit\n ";

    while(1)
    {
        cout << "\nEnter operation ";
        cin >> op;

        if(op == 1)
        {
            cout << "\nEnter data ";
            cin >> ele;
            node *temp = ob.create_node(ele);
            ob.insertion(temp);

        }
        else if(op == 2)
        {
            cout << "\nSum is : ";
            ele = ob.cal_sum(ob.root);
            cout << ele;
        }
        else if(op == 3)
            exit(0);
        else
            cout << " Wrong choice\n ";

    }
}
