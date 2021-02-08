#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;

};

Node* insert_head(Node* head, int d) {
	if (head == NULL) {
		head = new Node{d, NULL};
	} else {
		Node* temp = new Node{d, head};
		head = temp;
	}
	return head;
}
Node* insert(Node* head, int d) {
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
 
	Node* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		delete temp;
	}
	return head;
}
void print_singly_list(Node* head) {
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

	cout << "print list \n";
	print_singly_list(head);
	head = insert_head(head, 258);
	head = insert_head(head, 32);
	cout << "print list\n";
	print_singly_list(head);
	cout << "delete list\n";
	head = clear_list(head);
	cout << "print list \n";
	print_singly_list(head);

	return 0;
}
