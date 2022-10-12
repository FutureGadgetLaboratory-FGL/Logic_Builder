#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = NULL;
	}
};

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}
void removeDuplicates(Node* head)
{
	unordered_map<int, bool> track;
	Node* temp = head;
	while (temp) {
		if (track.find(temp->data) == track.end()) {
			cout << temp->data << " ";
		}
		track[temp->data] = true;
		temp = temp->next;
	}
}

int main()
{
	Node* head = NULL;

	/* Created linked list will be
	11->11->11->13->13->20 */
	push(&head, 20);
	push(&head, 13);
	push(&head, 13);
	push(&head, 11);
	push(&head, 11);
	push(&head, 11);

	cout << "Linked list before duplicate removal ";
	printList(head);

	cout << "\nLinked list after duplicate removal ";
	removeDuplicates(head);

	return 0;
}

