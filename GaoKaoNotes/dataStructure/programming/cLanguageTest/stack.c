#include <stdio.h>
#include <stdlib.h>
#define length 5

typedef struct stack {
	int top; // initialization value is -1
	int array[length];
} stack;

void push(stack *s, int push_value) {
	if (s->top >= length - 1) {
		printf("out out range\n");
		return;
	}
	(s->top)++;
	s->array[s->top] = push_value;
}

void pop(stack *s) {
	if (s->top <= -1) {
		printf("already empty\n");
		return;
	}
	(s->top)--;
}

void show_stack(stack *s) {
	if (s->top <= -1) {
		printf("the stack is empty\n");
		return;
	}
	for (int i=0; i<=(s->top); i++) {
		printf("%d->", (s->array)[i]);
	}
}

void main() {
	stack *test_stack = (stack *)malloc(sizeof(stack));
	// initialization of stack
	test_stack->top = -1;
	push(test_stack, 1);
	push(test_stack, 2);
	push(test_stack, 3);
	push(test_stack, 4);
	show_stack(test_stack);
}
