/*

Implementation of the TRIE data structure to store strings.

Motivation :

Given an array of N strings, and an array of Q queries, check for each query if it
it present in the array or not.

*/

#include<iostream>
#include<unordered_map>

using namespace std;

class node {
public:
	char ch;
	bool terminal;
	unordered_map<char, node*> childMap;

	node(char ch) {
		this->ch = ch;
		this->terminal = false;
	}
};

class trie {
	node* root;
public:
	trie() {
		root = new node('\0');
	}

	void insert(string word) {
		node* temp = root;
		for(char ch : word) {
			// check if the temp node contains ch as a child node or not
			if(!temp->childMap.count(ch)) {
				// temp node does not contain a child node with the value ch
				
				// create a new node with ch as value
				node* n = new node(ch);

				// update the childMap of the temp node
				temp->childMap[ch] = n;
			}
			// update temp to point to the child node
			temp = temp->childMap[ch];
		}
		temp->terminal = true;
	}

	bool search(string word) {
		node* temp = root;
		for(char ch : word) {
			if(!temp->childMap.count(ch)) {
				// ch is not a child of the temp node
				return false;
			}
			temp = temp->childMap[ch];
		}
		return temp->terminal;
	}
};

int main() {

	trie t;

	string S[] = {"code", 
				  "coder", 
				  "coding", 
				  "news", 
				  "newspaper", 
				  "newton"};

	for(string s : S) {
		t.insert(s);
	}

	string Q[] = {"code",
				  "codejam",
				  "codingblocks",
				  "news",
				  "new",
				  "newsdesk",
				  "newsletter"};

	for(string q : Q) {
		t.search(q) ? cout << q << " : true" << endl : cout << q << " : false" << endl;
	}



	return 0;
}
