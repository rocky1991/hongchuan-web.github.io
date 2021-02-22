#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;

};

Node* insert_head(Node* head, int d) {
	cout << "insert node to the front of the list, node value is " << d << endl;
	
	if (head == NULL) {
		head = new Node{d, NULL};
	} else {
		Node* temp = new Node{d, head};
		head = temp;
	}
	return head;
}
Node* insert(Node* head, int d) {
	cout << "insert node to the end of the list, node value is " << d << endl;
	if (head == NULL) {
		head = new Node{d, NULL};
	} else {
		Node* temp = new Node;
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = new Node;
		temp = temp->next;
		temp->data = d;
		temp->next = NULL;
	}
	return head;	
}
Node* clear_list(Node* head) {
 	cout << "clear list\n";
 
	Node* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		delete temp;
	}
	return head;
}
void print_singly_list(Node* head) {
	cout << "print list\n";
	if (head == NULL) {
		cout << "list is empty\n";
	} else {
	Node* temp = head;
	cout << temp->data << ' ';
	while (temp->next != NULL) {
	
		temp = temp->next;
		cout << temp->data << ' ';
	}
	cout << endl;
	}
}
int main() {
	Node *head = NULL;
	
	head = insert(head, 10);
	head = insert(head, 100);
	head = insert(head,11);
	head = insert(head,15);

	print_singly_list(head);
	head = insert_head(head, 258);
	head = insert_head(head, 32);
	print_singly_list(head);
	head = clear_list(head);
	print_singly_list(head);

	return 0;
}
