// This is a practice for linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node;

void insertAtHead(Node **head, int new_data) {
	Node *new_head = (Node *)malloc(sizeof(Node));
	new_head->data = new_data;
	new_head->next = *head;
	*head = new_head;
}

void insertAtEnd(Node **head, int new_data) {
	Node *new_end = (Node *)malloc(sizeof(Node));
	new_end->data = new_data;
	new_end->next = NULL;
	// Travesal
	Node **current_node = head;
	while (*current_node != NULL) {
		current_node = &((*current_node)->next);
	}
	*current_node = new_end;
}

Node *delete(Node **head, int delete_data) {
	// find the int x position in the list
	Node **current_node = head;
	Node **prev_node = NULL;
	while ((*current_node)->data != delete_data && *current_node != NULL) {
		prev_node = current_node;
		current_node = &((*current_node)->next);
	}
	if (*current_node == NULL) {
		return *current_node;
	} else {
		(*prev_node)->next = (*current_node)->next;
		//*current_node = NULL;
		//free(*current_node);
		return *current_node;
	}
}


void printList(Node *head) {
	while(head != NULL) {
		printf("%d\n", head->data);
		head = head->next;
	}
	printf("\n");
}

int main() {
	// create null head
	Node *head = NULL;

	insertAtHead(&head, 1);
	insertAtHead(&head, 2);
	insertAtHead(&head, 3);
	insertAtEnd(&head, 4);
	insertAtEnd(&head, 5);
	insertAtEnd(&head, 6);
	insertAtEnd(&head, 10);
	insertAtHead(&head, 11);
	printList(head);

	Node *deleted_node = delete(&head, 6);
	free(deleted_node);
	printList(head);

}

