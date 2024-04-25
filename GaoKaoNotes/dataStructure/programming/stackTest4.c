// stack practice with linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
} Node;

int push(Node **head, int data) {
	Node *new_head = (Node *)malloc(sizeof(Node));
	new_head->next = *head;
	new_head->data = data;
	*head = new_head;
}

int pop(Node **head) {
	Node *temp = (*head);
	(*head) = (*head)->next;
	free(temp);
}

void showStack(Node *head) {
	Node *temp = head;
	while ((temp) != NULL) {
		printf("%d\n", (temp)->data);
		temp = temp->next;
	}
	printf("\n");
}

int main() {
	Node *head = NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	showStack(head);
	pop(&head);
	showStack(head);
}
