/**
* @file <solutionByNikunj.cpp>
*
* @author  <Nikunj Rathod>
* Templatize Binary Search Tree
*
*
*/
#include <iostream>
#include <string>

template <typename T>
class Tree {
public:
    void insertNode(T data)
    {
        insertNodeHelper(&rootPtr, data);
    }
    void preOrderTraversal() const
    {
        preOrderHelper(rootPtr);
    }
    void inOrderTraversal() const
    {
        inOrderHelper(rootPtr);
    }
    void postOrderTraversal() const
    {
        postOrderHelper(rootPtr);
    }

private:
    struct TreeNode {
        TreeNode(T d)
            : data { d }
        {
        }

        TreeNode* leftPtr { nullptr };
        TreeNode* rightPtr { nullptr };

        T data;
    };

private:
    TreeNode* rootPtr { nullptr };

    //returns true if data is in the tree, false if it is not
    bool contains(TreeNode* ptr) const
    {
        if (ptr == NULL)
            return true;
        else
            return false;
    }

    //returns true if the tree is empty, false if it is not.
    bool isEmpty(TreeNode* ptr) const
    {
        if (ptr == NULL)
            return true;
        else
            return false;
    }

    void insertNodeHelper(TreeNode** ptr, T value)
    {
        if (*ptr == nullptr) {
            *ptr = new TreeNode(value);
        } else {
            if (value < (*ptr)->data) {
                insertNodeHelper(&((*ptr)->leftPtr), value);
            } else {
                if ((*ptr)->data < value) {
                    insertNodeHelper(&((*ptr)->rightPtr), value);
                } else {
                    std::cout << value << "is a duplicate\n";
                }
            }
        }
    }

    void inOrderHelper(TreeNode* ptr) const
    {
        if (ptr) {

            inOrderHelper(ptr->leftPtr);
            std::cout << ptr->data << " ";
            inOrderHelper(ptr->rightPtr);
        }
    }

    void preOrderHelper(TreeNode* ptr) const
    {
        if (ptr) {
            std::cout << ptr->data << " ";
            inOrderHelper(ptr->leftPtr);
            inOrderHelper(ptr->rightPtr);
        }
    }

    void postOrderHelper(TreeNode* ptr) const
    {
        if (ptr) {

            inOrderHelper(ptr->leftPtr);
            inOrderHelper(ptr->rightPtr);
            std::cout << ptr->data << " ";
        }
    }
};
int main(int argc, const char* argv[])
{

    //int template
    Tree<int> tree;

    int a[5] = {};
    std::cout << "\n Enter 5 integers: \n";
    for (int i = 0; i < 5; i++) {
        std::cin >> a[i];
        tree.insertNode(a[i]);
    }

    std::cout << "\n In order \n";
    tree.inOrderTraversal();

    std::cout << "\n pre-orcer\n";
    tree.preOrderTraversal();

    std::cout << "\n post-order\n";
    tree.postOrderTraversal();

    //float template
    std::cout << "\n\n";
    Tree<float> tree2;
    float b[5] = {};
    std::cout << "\n Enter 5 floats: \n";
    for (int i = 0; i < 5; i++) {
        std::cin >> b[i];
        tree2.insertNode(b[i]);
    }
    std::cout << "Float template ";
    std::cout << "\n In order \n";
    tree2.inOrderTraversal();

    std::cout << "\n pre-orcer\n";
    tree2.preOrderTraversal();

    std::cout << "\n post-order\n";
    tree2.postOrderTraversal();
    std::cout << "\n\n";

    //char template
    Tree<char> tree3;
    char c[5] = {};
    std::cout << "\n Enter 5 characters: \n";
    for (int i = 0; i < 5; i++) {
        std::cin >> c[i];
        tree3.insertNode(c[i]);
    }
    std::cout << "CHar template ";
    std::cout << "\n In order \n";
    tree3.inOrderTraversal();

    std::cout << "\n pre-orcer\n";
    tree3.preOrderTraversal();

    std::cout << "\n post-order\n";
    tree3.postOrderTraversal();
    std::cout << "\n\n";

    //string template
    Tree<std::string> tree4;
    std::string d[5] = {};
    std::cout << "\n Enter 5 string: \n";
    for (int i = 0; i < 5; i++) {
        std::cin >> d[i];
        tree4.insertNode(d[i]);
    };
    std::cout << "String template ";
    std::cout << "\n In order \n";
    tree4.inOrderTraversal();

    std::cout << "\n pre-orcer\n";
    tree4.preOrderTraversal();

    std::cout << "\n post-order\n";
    tree4.postOrderTraversal();
    std::cout << "\n\n";
    std::cout << "\n\n";
    return 0;
}