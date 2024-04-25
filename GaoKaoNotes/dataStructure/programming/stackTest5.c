// stack practice with linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node;

typedef struct stack {
	struct Node *head;
} stack;

int init_stack(stack *s) {
	s->head = NULL;
}

int push(stack *s, int data) {
	Node *new_head = (Node *)malloc(sizeof(Node));
	new_head->data = data;
	new_head->next = s->head;
	s->head = new_head;
}

int pop(stack *s) {
	Node *temp = s->head;
	s->head = s->head->next;
	free(temp);


//	Node *temp = (*head);
//	(*head) = (*head)->next;
//	free(temp);
}

void showStack(stack *s) {
	Node *temp = s->head;
	while (temp != NULL) {
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("\n");

//	Node *temp = head;
//	while ((temp) != NULL) {
//		printf("%d\n", (temp)->data);
//		temp = temp->next;
//	}
//	printf("\n");
}

int main() {
	stack s;
	init_stack(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	push(&s, 4);
	showStack(&s);

	pop(&s);
	showStack(&s);




//	Node *head = NULL;
//	push(&head, 1);
//	push(&head, 2);
//	push(&head, 3);
//	showStack(head);
//	pop(&head);
//	showStack(head);
}
