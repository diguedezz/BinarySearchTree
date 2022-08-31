#include <iostream>
using namespace std;

class Node{
	private:
		
		Node *left, *right;
		int key;

	public:
		Node(int key){
			this->key = key;
			this->left = nullptr;
			this->right = nullptr;
		}

		// getters & setters
    	int getKey(){return this->key;}
    	Node* getLeft(){return this->left;}
    	node* getRight(){return this->right;}
    	void setKey(int key){this->key = key;}
    	void setLeft(Node* left){this->left = left;}
    	void setRight(Node* Right){this->right = right;}
}