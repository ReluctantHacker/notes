// this is a practice for stack in c language with array method
#include <stdio.h>
#include <stdlib.h>

#define length 10

typedef struct stack {
	int stack_array[length];
	int top; // it should -1 when created
} stack;

int push(stack *s, int data) {
	if ((s->top)<length-1) {
		(s->top)++;
		(s->stack_array)[s->top] = data;
	}
}

int pop(stack *s) {
	if ((s->top) > -1) {
		(s->top)--;
	}
}

int showStack(stack *s) {
	for (int i=0; i<(s->top)+1; i++) {
		printf("%d\n", (s->stack_array)[i]);
	}
	printf("\n");
}

int main() {
	stack *s = (stack *)malloc(sizeof(stack));
	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);

	showStack(s);
	
	pop(s);
	showStack(s);
}
