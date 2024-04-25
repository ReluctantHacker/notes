#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10
// array method

typedef struct stack{
	int array[LENGTH];
	int top;
} stack;

int push(stack *s, int data) {
	(s->top)++;
	if ((s->top) > LENGTH-1) {
		printf("stack is full.");
		return 0;
	}
	(s->array)[s->top] = data;
	return 1;
}

int pop(stack *s) {
	if ((s->top) < 0) {
		printf("stack is empty");
		return 0;
	}
	s->top--;
	return 1;
}

int peek(stack *s) {
	if (s->top < 0) {
		printf("stack is empty");
		return 0;
	}
	printf("show the top element: %d\n", (s->array)[s->top]);
}

int size(stack *s) {
	return (s->top)+1;
}

int show(stack *s) {
	for (int i=0; i<=(s->top); i++) {
		printf("%d, ", (s->array)[i]);
	}
}

int main() {
	stack *s = (stack *)malloc(sizeof(stack));
	s->top = -1; // initialization
	push(s, 3);
	push(s, 2);
	push(s, 4);
	show(s);
}


