#pragma once
#include<iostream>

template <typename T> 
class Tree {
public:
	void insertNode(T data) {
		insertNodeHelper(&rootPtr, data);
	}
	void preOrderTraversal() const {
		preOrderHelper(rootPtr);
	}
	void inOrderTraversal() const {
		inOrderHelper(rootPtr);
	}
	void postOrderTraversal() const {
		postOrderHelper(rootPtr);
	}
private:
	struct TreeNode {
		TreeNode(T d) : data{ d } {}

		TreeNode *leftPtr{ nullptr };
		TreeNode *rightPtr{ nullptr };

		T data;
	};
private:
	TreeNode* rootPtr{ nullptr };

	//returns true if data is in the tree, false if it is not
	bool contains(TreeNode* ptr) const {
		if (ptr == NULL)
			return true;
		else
			return false;
	}

	//returns true if the tree is empty, false if it is not.
	bool isEmpty(TreeNode* ptr) const {
		if (ptr == NULL)
			return true;
		else
			return false;
	}

	void insertNodeHelper(TreeNode** ptr,  T value) {
		if (*ptr == nullptr) {
			*ptr = new TreeNode(value);
		}
		else {
			if (value < (*ptr)->data) {
				insertNodeHelper(&((*ptr)->leftPtr), value);
			}
			else {
				if ((*ptr)->data < value) {
					insertNodeHelper(&((*ptr)->rightPtr), value);
				}
				else {
					std::cout << value << "is a duplicate\n";
				}
			}
		}
	}

	void inOrderHelper(TreeNode* ptr) const {
		if (ptr) {

			inOrderHelper(ptr->leftPtr);
			std::cout << ptr->data << " ";
			inOrderHelper(ptr->rightPtr);
		}
	}

	void preOrderHelper(TreeNode* ptr) const {
		if (ptr) {
			std::cout << ptr->data << " ";
			inOrderHelper(ptr->leftPtr);
			inOrderHelper(ptr->rightPtr);
		}
	}

	void postOrderHelper(TreeNode* ptr) const {
		if (ptr) {

			inOrderHelper(ptr->leftPtr);
			inOrderHelper(ptr->rightPtr);
			std::cout << ptr->data << " ";
		}
	}
};

