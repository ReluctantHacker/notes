// this is a test for stack
#include <stdio.h>
#include <stdlib.h>
#define stack_length 5

typedef struct stack {
	int top;
	int array[stack_length];
} stack; 


void push(stack *stk, int push_value){
	if (stk->top >= stack_length-1) {
		printf("stack out of range, value '%d' doesn't get into stack\n", push_value);
		return;
	}
	(stk->top)++;
	(stk->array)[stk->top] = push_value;
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
	for (int i=0; i<=(stk->top); i++) {
		printf("%d->", (stk->array)[i]);
	}
	printf("\n");
	return;
}

int main() {
	stack *test_stack = (stack *)malloc(sizeof(stack));
	// initialization
	test_stack->top = -1;
	push(test_stack, 1);
	push(test_stack, 2);
	push(test_stack, 3);
	push(test_stack, 4);
	push(test_stack, 5);
	push(test_stack, 6); // this should be failed and show "out of range"
	show(test_stack);
	pop(test_stack);
	pop(test_stack);
	pop(test_stack);
	pop(test_stack);
	pop(test_stack);
	pop(test_stack);
	show(test_stack);

	return 0;
}
	
