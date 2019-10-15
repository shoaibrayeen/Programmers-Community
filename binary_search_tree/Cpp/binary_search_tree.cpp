#include <iostream>
using namespace std;

/*
Class for defining a node in binary search tree
Has -
int val 	  - Value of the node
node * left   - Pointer to the left node
node * right  - Pointer to the right node
*/
class node {
	public:
	/*
	Constructor for node
	Parameters:
	int v - sets value of node to v.
	 */

	explicit node(int v) {
		this->val = v;
		this->left = NULL;
		this->right = NULL;
	}

	/*
	Getter functions
	*/
	int get_val() {
		return val;
	}

	node * get_left() {
		return left;
	}

	node * get_right() {
		return right;
	}

	/*
	Setter functions
	*/
	void set_val(int v) {
		this->val = v;
	}

	void set_left(node * l) {
		this->left = l;
	}

	void set_right(node * r) {
		this->right = r;
	}

	private:
	int val;
	node * left;
	node * right;
};


/*
Class for defining Binary search tree

Has -
node * root - Node pointer to the root of the tree
*/
class BST {
	public:
	/*
	Class' public member functions
	*/
	BST() {
		this->root = NULL;
	}

	node * search(int v) {
		return search_util(root, v);
	}

	void insert(int v) {
		if(root == NULL) root=insert_util(root, v);
		else
			insert_util(root, v);
	}

	void inorder_traversal() {
		inorder_util(root);
	}

	void preorder_traversal() {
		preorder_util(root);
	}

	void postorder_traversal() {
		postorder_util(root);
	}

	void delete_node(int v) {
		root = delete_node_util(root, v);
	}

	private:
	node * root;

	/*
	Class' private member functions
	*/
	node * search_util(node * t, int v) {
		if(t == NULL || t->get_val() == v) return t;
		else if (v < t->get_val())
			return search_util(t->get_left(), v);
		else
			return search_util(t->get_right(), v);
	}

	node * insert_util(node * t, int v) {
		if(t == NULL) return new node(v);

		if(v < t->get_val()) {
			t->set_left(insert_util(t->get_left(), v));
		} else if (v > t->get_val()) {
			t->set_right(insert_util(t->get_right(), v));
		}

		return t;
	}

	void inorder_util(node * t) {
		if(t != NULL) {
			inorder_util(t->get_left());
			cout << t->get_val() << "\n";
			inorder_util(t->get_right());
		}
	}

	void preorder_util(node * t) {
		if(t != NULL) {
			cout << t->get_val() << "\n";
			preorder_util(t->get_left());
			preorder_util(t->get_right());
		}
	}

	void postorder_util(node * t) {
		if(t != NULL) {
			postorder_util(t->get_left());
			postorder_util(t->get_right());
			cout << t->get_val() << "\n";
		}
	}

	node * max_node(node * t) {
		if(t == NULL) return t;

		node * curr = t;
		while(curr->get_right())
			curr = curr->get_right();
		return curr;
	}

	node * delete_node_util(node * t, int v) {
		if (t == NULL) return t;

		else if (v < t->get_val())	t->set_left(delete_node_util(t->get_left(), v));
		else if (v > t->get_val())	t->set_right(delete_node_util(t->get_right(), v));

		// Case where t->get_val() == v
		// This is the node to be deleted.
		else {	// Ignore CPPLintBear
			// There can be following cases:
			// 1) Node has No child or 1 child
			// 2)  Node has No child or 1 child

			// Case 1 -  Node has No child or 1 child
			if(t->get_left() == NULL) {
				node * tmp = t->get_right();
				free(t);
				return tmp;
			} else if (t->get_right() == NULL) {
				node * tmp = t->get_left();
				free(t);
				return tmp;
			}

			// Case 2 -  Node has No child or 1 child

			// Find inorder predecessor
			node * tmp = max_node(t->get_left());

			// set the value
			t->set_val(tmp->get_val());

			// delete the predecessor
			t->set_left(delete_node_util(t->get_left(), tmp->get_val()));
		}

		return t;
	}
};


int main() {
	BST b;
	// {1, 2, 9, 293, 41, 15, 52, 3, 121, 7, 1223, 3449, 15, 1 };
	b.insert(1);
	b.insert(2);
	b.insert(9);
	b.insert(293);
	b.insert(41);
	b.insert(15);
	b.insert(52);
	b.insert(3);
	b.insert(121);
	b.insert(7);
	b.insert(3449);
	b.insert(1223);
	b.insert(15);
	b.insert(1);

	cout << "Traversals of Tree after inserting values: \n";
	cout << "{1, 2, 9, 293, 41, 15, 52, 3, 121, 7, 1223, 3449, 15, 1}\n";

	cout << "Preorder traversal:\n";
	b.preorder_traversal();

	cout << "Inorder traversal:\n";
	b.inorder_traversal();

	cout << "Postorder traversal:\n";
	b.postorder_traversal();


	int search_key = 52;

	node * t = b.search(search_key);
	if(t != NULL) {
		cout << "Key value " << search_key << " is present in tree.\n";
	} else {
		cout << "Key value " << search_key << " is NOT present in tree.\n";
	}


	b.delete_node(52);
	b.delete_node(121);
	b.delete_node(293);

	cout << "Deleting values: 52, 121, 293 from the tree.\n";

	t = b.search(search_key);
	if(t != NULL) {
		cout << "Key value " << search_key << " is present in tree.\n";
	} else {
		cout << "Key value " << search_key << " is NOT present in tree.\n";
	}

	cout << "Traversals of Tree after deleting values: 52, 121, 293.\n";

	cout << "Preorder traversal:\n";
	b.preorder_traversal();

	cout << "Inorder traversal:\n";
	b.inorder_traversal();

	cout << "Postorder traversal:\n";
	b.postorder_traversal();



	return 0;
}
