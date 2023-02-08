#include <iostream>
#include <iomanip>
using namespace std;

class Node;
Node* createNode(int d);

class Node {
private:
	int data;
	Node* left;
	Node* right;
public:
	Node(int &x) {
		data = x;
		left = nullptr;
		right = nullptr;
	}
	Node() : left(nullptr), right(nullptr), data(-1) {};

	void insertNode(Node* &root, int d) {
		if (root->data == d) {
			cout << "Cannot insert duplicate node." << endl;
		}
		else {
			if (d > root->data) {
				if (root->right == nullptr) {
					root->right = createNode(d);
				}
				else
					insertNode(root->right, d);
			}
			else if (d < root->data) {
				if (root->left == nullptr) {
					root->left = createNode(d);
				}
				else
					insertNode(root->left, d);
			}
		}
	}

	void display(const std::string& prefix, const Node* node, bool isLeft)
	{
		if (node != nullptr)
		{
			std::cout << prefix;
			std::cout << (isLeft ? "|--" : "L--");
			// print the value of the node
			std::cout << node->data << std::endl;
			// enter the next tree level - left and right branch
			display(prefix + (isLeft ? "|   " : "    "), node->right, true);
			display(prefix + (isLeft ? "|   " : "    "), node->left, false);
		}
	}

	void display(const Node* node)
	{
		display("", node, false);
	}

	void deleteAlgo(Node*& root, int& d) {

	}

	void deleteNode(Node* root, int d) {
		if (root != nullptr) {

			if (root->data == d) {

			}
			else {
				if (d < root->data && root->left != nullptr) {

				}
			}
		}
		else
			cout << "Tree is empty" << endl;
	}

};

Node* createNode(int d) {
	Node* newNode = new Node(d);
	return newNode;
}

int main() {
	Node* root = createNode(14);
	root->display(root);
	root->insertNode(root, 5);
	root->insertNode(root, 20);
	cout << "after inserting 5 and 20" << endl;
	root->display(root);

	root->insertNode(root, 6);
	cout << "after inserting 6" << endl;
	root->display(root);

	root->insertNode(root, 4);
	cout << "after inserting 4" << endl;
	root->display(root);

	root->insertNode(root, 21);
	cout << "after inserting 21" << endl;
	root->display(root);

	int x = 19;
	root->insertNode(root, x);
	cout << "after inserting " << x << endl;
	root->display(root);


}