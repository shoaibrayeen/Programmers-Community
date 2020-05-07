//Given the binary tree and you have to find out the n-th node of inorder traversal.

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
    int nth_element(node *, int);

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
    cout << "where do you wnat to insert to left/right ? (l/r)  ";
    cin >> ch;

    if(ch == 'r')
    {
        if(rt->right == NULL)
        {
            rt->right = temp;
            return ;
        }
        else
            insert(rt->right ,temp);
        }
    else
    {
        if(rt->left==NULL)
        {
            rt->left=temp;
            return ;
        }
        else
            insert(rt->left,temp);
    }

}

int BinaryTree :: nth_element(node *temp , int n)
{
    stack <node *> s1;
    int count =0;

    while(! s1.empty() ||  temp != NULL)             //inorder traversal
    {
       if(temp != NULL)
       {
            s1.push(temp);
            temp = temp->left;
       }
       else
       {
            count ++;
            temp = s1.top();
            s1.pop();
            if(count == n)
               return temp->data;
            temp = temp->right;
       }
    }

    return -1;
}

int main()
{
    int op , n;
    BinaryTree ob;
    cout << "1.insertion";
    cout << "\n2.Print nth Element";
    cout << "\n5.exit";

    while(1)
    {
        cout << "\nEnter operation ";
        cin >> op;
        if(op==1)
        {
            node *temp = ob.create();
            if(ob.root == NULL)
                ob.root = temp;
            else
                ob.insert(ob.root,temp);
        }
        else if(op == 2)
        {
            cout << "Enter nth number ";
            cin >> n;
            op = ob.nth_element(ob.root, n);

            if(op != -1)
                cout << "\nElement is : " << op;
            else
                cout << "\n Not Found";

        }
        else if(op == 3)
            exit(0);
        else
            cout << "\nWrong option ";

    }
}
