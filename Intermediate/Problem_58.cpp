/*

Implementation of the TRIE data structure to store non-negative integers.

Assume integer has 32-bit representation.

*/

#include<iostream>

using namespace std;

class node {
public:
	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1
	bool terminal;

	node() {
		this->left = this->right = NULL;
	}

};

class trie {
	node* root;
public:
	trie() {
		root = new node();
	}

	void insert(int x) {
		node* temp = root;
		for(int i=31; i>=0; i--) {
			int bit = (1<<i)&x;
			if(!bit) {
				// ith bit of x is 0, check if temp has a left child or not
				if(!temp->left) {
					// temp does not have a left child
					node* n = new node;
					temp->left = n;
				}
				temp = temp->left;
			} else {
				// ith bit of x is 1, check if temp has a right child or not
				if(!temp->right) {
					// temp does not have a right child
					node* n = new node;
					temp->right = n;
				}
				temp = temp->right;
			}
		}
		temp->terminal = true;
	}

	bool search(int x) {
		node* temp = root;
		for(int i=31; i>=0; i--) {
			int bit = (1<<i)&x;
			if(!bit) {
				// ith bit is 0, check if temp node has a left child or not
				if(!temp->left) return false;
				temp = temp->left;
			} else {
				// ith bit is 1, check if temp node has a right child or not
				if(!temp->right) return false;
				temp = temp->right;
			}
		}
		return temp->terminal;

	}
};

int main() {

	int A[] = {2, 5, 8, 10, 25};
	int n = sizeof(A) / sizeof(int);

	trie t;
	for(int i=0; i<n; i++) {
		t.insert(A[i]);
	}

	int Q[] = {1, 2, 3, 4, 5};
	int m = sizeof(Q) / sizeof(int);

	for(int i=0; i<m; i++) {
		t.search(Q[i]) ? cout << Q[i] << " : true " << endl : cout << Q[i] << " : " << "false" << endl;
	}

	return 0;
}
