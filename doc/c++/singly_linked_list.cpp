#include <iostream>
using namespace std;
typedef struct node{
	int value;
	struct node *next;
}Node;


Node add_first(Node head, Node a_node){

	Node temp;
	temp->next = head;
	return temp;
}

void print_all_nodes(Node head){
	Node temp;
	temp = head;
	while (head->next != NULL){
		cout << temp.value << " ";
		temp = head->next;
	}
}

int main(){
	Node head;
	head.value = 0;
	head->next = NULL;
	
	print_all_nodes(head);
	return 0;	
}
