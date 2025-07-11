// This is a test for stack building
#include <stdio.h>
#include <stdlib.h>
#define stack_length 5

typedef struct stack {
	int top;
	int array[stack_length];
} stack;

void push(stack *stk, int input_value) {
	if (stk->top >= stack_length-1) {
		printf("already full\n");
		return;
	}
	(stk->top)++;
	(stk->array)[stk->top] = input_value;
	return;
}

void pop(stack *stk) {
	if (stk->top < 0) {
		printf("already empty\n");
		return;
	}
	(stk->top)--;
	return;
}

void show(stack *stk) {
	if (stk->top == -1) {
		printf("nothing left in stack, the stack is empty.\n");
		return;
	}	
	for (int i=0; i<=(stk->top); i++) {
		printf("%d->", (stk->array)[i]);
	}
	printf("\n");
	return;
}

int main() {
	stack *test_stack = (stack *)malloc(sizeof(stack));
	// initiailization
	test_stack->top = -1;
	push(test_stack, 1);
	push(test_stack, 2);
	push(test_stack, 3);
	push(test_stack, 4);
	push(test_stack, 5);
	push(test_stack, 5);
	show(test_stack);
	return 0;
}
