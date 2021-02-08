#include <iostream>

using namespace std;

class SinglyListNode {
public:
	SinglyListNode(int d, SinglyListNode* n)
		:data(d), next(n) {}
	void set_data(int d) { data = d; }
	void set_next(SinglyListNode* n) { next = n; }
	SinglyListNode* insert_node(SinglyListNode *head, int d) {
		//SinglyListNode* temp;
		if (head == NULL) {
			head->set_data(d);
			head->set_next(NULL);
		}
		return head;
	}
	void print_nodes(SinglyListNode *head) {
		SinglyListNode *temp = head;
		while(temp->next != NULL) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
private:
	int data;
	SinglyListNode* next;
};

int main() {
	SinglyListNode *head = NULL;
	head->insert_node(head, 5);
	head->print_nodes(head);
	return 0;
}
