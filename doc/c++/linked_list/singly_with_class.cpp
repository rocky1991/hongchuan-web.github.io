#include <iostream>
using namespace std;
class Node {
public:
	Node(int d, Node* n)
		:data(d), next(n){}
	Node(int d)
		:data(d), next(NULL){}
	Node* insert_head(Node *head, int d) {
		cout << "insert " << d << " at the head of the list\n";
		if (head == NULL) {
			head = new Node{d};
		} else {
			Node* temp = new Node{d};
			temp->next = head;
			head = temp;
		}
		return head;
	}
	Node* insert_tail(Node *head, int d) {
		cout << "insert " << d << " at the tail of the list\n";
		if (head == NULL) {
			head = new Node{d};
		} else {
			Node* temp = head;
			while (temp->next != NULL){
				temp = temp->next;
			}
			temp->next = new Node{d};
		}
		return head;
	}
	void print_list(Node *head) {
		cout << "print the list \n";
		if (head == NULL) {
			cout << "list is empty\n";
			return;
		}
		Node* temp = head;
		while (temp->next != NULL) {
			cout << temp->data << ' ';
			temp = temp->next;
		}
		cout << temp->data << endl;
	}
	Node* clear_list(Node *head) {
		cout << "clearing the list\n";
		if (head == NULL) {
			cout << "list is already empty, exit\n";
			return head;
		}
		while (head->next != NULL) {
			Node *temp = head;
			head = head->next;
			delete temp;
		}
		
		return NULL;
	}

private:
	int data;
	Node* next;
};
int main() {
	Node* head = new Node{5, NULL};
	head = head->insert_tail(head, 10);
	head->print_list(head);
	head = head->insert_head(head, 33);
	head->print_list(head);
	head = head->insert_head(head, 55);
	head->print_list(head);
	head = head->clear_list(head);
	head->print_list(head);
	return 0;
}
