// this is a test for linked list stack, and with linked list we don't have to define stack length anymore
#include <stdio.h>
#include <stdlib.h>

// linked list node
typedef struct node {
	int value;
	struct node *next;
} node;

typedef struct stack{
	node *rear;
} stack;


void push(stack *stk, int push_value) {
	node *new_rear = (node *)malloc(sizeof(node));
	new_rear->value = push_value;
	new_rear->next = stk->rear;
	stk->rear = new_rear;
	return;
}

void pop(stack *stk) {
	if (stk->rear == NULL) {
		printf("the stack is empty\n");
		return;
	}
	node *temp_node = stk->rear;
	stk->rear = stk->rear->next;
	free(temp_node);
	return;
}

void show(stack *stk) {
	node *iteration_node = stk->rear;
	while(iteration_node != NULL) {
		printf("%d->", (iteration_node)->value);
		iteration_node = iteration_node->next;
	}
	printf("\n");
	return;
}

int main() {
	stack *test_stack = (stack *)malloc(sizeof(stack));
	push(test_stack, 1);
	show(test_stack);
	push(test_stack, 2);
	show(test_stack);
	push(test_stack, 3);
	show(test_stack);
	push(test_stack, 4);
	show(test_stack);
	push(test_stack, 5);
	show(test_stack);
	push(test_stack, 6);
	show(test_stack);
	pop(test_stack);
	show(test_stack);
	pop(test_stack);
	show(test_stack);
	pop(test_stack);
	show(test_stack);
	pop(test_stack);
	show(test_stack);
	pop(test_stack);
	show(test_stack);
	pop(test_stack);
	show(test_stack);
	pop(test_stack);
	show(test_stack);
	return 0;
}
