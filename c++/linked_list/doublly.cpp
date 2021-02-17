#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
}

class DLinkedList{
publlic:
	DLinkedList(Node* d)
		:head(d){}
	Node* insert_head(int d);
	Node* insert_tail(int d);
	void print_list();
	void clear_list();
private:
	Node* head;
}
int main() {
	return 0;
}
Node* DLinkedList::insert_head(int d) {
}
Node* DLinkedList::insert_tail(int d) {
}
void DLinkedList::insert_tail() {
}
void DLinkedList::clear_list() {
}
