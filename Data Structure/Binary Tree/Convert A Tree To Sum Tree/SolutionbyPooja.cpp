/*

    Given a Binary Tree where each node has positive and negative values. Convert this to a tree where each node contains the sum of the left and right sub trees in the
     original tree. The values of leaf nodes are changed to 0.
*/

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct node{

   node *left;
   node *right;
   int data;
};

class BinaryTree{

    public:
        node *root;
        BinaryTree(){
            root = NULL;
        }

        node* create_node(int);
        void insertion(node *, node *);
        void convert_tree_to_sum();
        int sum_node(node *);
        void print();



};

node* BinaryTree :: create_node(int ele){

    node *temp = new node();
    temp -> left = NULL;
    temp -> right = NULL;
    temp -> data = ele;

    return temp;
}

void BinaryTree :: insertion(node *rt, node *temp){

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

void BinaryTree :: print()
{
    if(root == NULL)
        cout << "\nTree is empty";

    else{

        stack <node *> s1;
        node *temp = root;
        s1.push(temp);

        while(!s1.empty())
        {
            temp = s1.top();
            s1.pop();
            if(temp != NULL)
            {
                cout << temp -> data << " ";
                s1.push(temp -> right);
                s1.push(temp -> left);
            }
        }


    }
}

int BinaryTree :: sum_node (node *temp)
{
    stack <node *> s1;
    int sum = 0;
    s1.push(temp);

    while(! s1.empty())
    {
            temp = s1.top();
            s1.pop();
            if(temp != NULL)
            {
                sum += temp -> data;
                s1.push(temp -> right);
                s1.push(temp -> left);
            }
    }
    return sum;
}

void BinaryTree :: convert_tree_to_sum(){

     queue <node *> q1;
     node *temp;
     int a = 0, b = 0;

     if(root != NULL)
     {
        q1.push(root);
        while(! q1.empty())
        {
            temp = q1.front();
            q1.pop();

            if(temp -> left != NULL)
            {
                a = sum_node(temp -> left);
                q1.push(temp -> left);
            }

            if(temp -> right != NULL)
            {
                b = sum_node(temp -> right);
                q1.push(temp -> right);
            }
            temp -> data = a + b;
            if(temp -> left == NULL && temp -> right == NULL)
                temp -> data = 0;
        }
     }

}

int main()
{
    int ch, ele;
    BinaryTree ob;

    cout << "1.Input tree";
    cout << "\n2.Convert to Sum tree";
    cout << "\n3.Exit";

    while(1)
    {
        cout << "\nEnter choice  ";
        cin >> ch;

        if(ch == 1)
        {
            cout << "\nEnter data ";
            cin >> ele;
            node *temp = ob.create_node(ele);
            if(ob.root == NULL)
                ob.root = temp;
            else
                ob.insertion(ob.root, temp);
        }
        else if(ch == 2)
        {
            ob.convert_tree_to_sum();
            cout << "\nSum Tree is : " ;
            ob.print();
        }
        else if(ch == 3)
            exit(0);
        else
            cout << "\nWrong option";

    }
}
