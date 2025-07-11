// this is a test for stack in linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *next;
} node;

typedef struct stack {
	node *top; // this has to be the head of the linked list
} stack; 

void push(stack *stk, int insert_value) {
	node *new_top = (node *)malloc(sizeof(node));
	new_top->value = insert_value;
	new_top->next = stk->top;
	stk->top = new_top;
	return;
}

void pop(stack *stk) {
	if (stk->top == NULL) {
		printf("the stack is already empty\n");
		return;
	}
	node *temp_top = stk->top;
	stk->top = stk->top->next;
	free(temp_top);
	return;
}

void show(stack *stk) {
	if (stk->top == NULL) {
		printf("the stack is empty\n");
		return;
	}
	node *iteration_node = stk->top;
	while(iteration_node != NULL) {
		printf("%d->", iteration_node->value);
		iteration_node = iteration_node->next;
	}
	printf("\n");
	return;
}

int main() {
	stack *test_stack = (stack *)malloc(sizeof(stack));
	test_stack->top = NULL; // initialization

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
	push(test_stack, 7);
	show(test_stack);
	push(test_stack, 8);
	show(test_stack);
	push(test_stack, 9);
	show(test_stack);
	push(test_stack, 10);
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
	pop(test_stack);
	show(test_stack);


	push(test_stack, 3);
	show(test_stack);
	push(test_stack, 4);
	show(test_stack);
	push(test_stack, 5);
	show(test_stack);
	push(test_stack, 6);
	show(test_stack);
	push(test_stack, 7);
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

