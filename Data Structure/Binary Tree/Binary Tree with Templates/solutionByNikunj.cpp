/**
* @file <Source.cpp>
*
* @author  <Nikunj Rathod>
* @version <1.0>
*
* change log
* name      date
* Templatize Binary Search Tree
*
*/
#include<random>
#include"Tree.h"

std::mt19937 rEng{ std::random_device{}() };
std::uniform_int_distribution<unsigned int> dist{ 1,10 };

int main(int argc, const char* argv[]) {

	//Int teplate
	Tree<int> tree;
	for (int i = 0; i < 20; i++) {
		auto x = dist(rEng);
		std::cout << "inserting " << x << "\n";
		tree.insertNode(x);
	}
	std::cout << "\n\nInt template ";
	std::cout << "\n In order \n";
	tree.inOrderTraversal();

	std::cout << "\n pre-orcer\n";
	tree.preOrderTraversal();

	std::cout << "\n post-order\n";
	tree.postOrderTraversal();

	std::cout << "\n\n";

	//float teplate
	Tree<float> tree2;
	tree2.insertNode(1.2);
	tree2.insertNode(1.3);
	tree2.insertNode(1.1);
	tree2.insertNode(1.7);
	std::cout << "Float template ";
	std::cout << "\n In order \n";
	tree2.inOrderTraversal();

	std::cout << "\n pre-orcer\n";
	tree2.preOrderTraversal();

	std::cout << "\n post-order\n";
	tree2.postOrderTraversal();
	std::cout << "\n\n";


	//char teplate
	Tree<char> tree3;
	tree3.insertNode('a');
	tree3.insertNode('c');
	tree3.insertNode('d');
	tree3.insertNode('e');
	std::cout << "CHar template ";
	std::cout << "\n In order \n";
	tree3.inOrderTraversal();

	std::cout << "\n pre-orcer\n";
	tree3.preOrderTraversal();

	std::cout << "\n post-order\n";
	tree3.postOrderTraversal();
	std::cout << "\n\n";

	//string teplate
	Tree<std::string> tree4;
	tree4.insertNode("aaa");
	tree4.insertNode("bbb");
	tree4.insertNode("cea");
	tree4.insertNode("daa");
	std::cout << "String template ";
	std::cout << "\n In order \n";
	tree4.inOrderTraversal();

	std::cout << "\n pre-orcer\n";
	tree4.preOrderTraversal();

	std::cout << "\n post-order\n";
	tree4.postOrderTraversal();
	std::cout << "\n\n";
}