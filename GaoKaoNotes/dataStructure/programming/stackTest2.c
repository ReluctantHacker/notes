#include <stdio.h>
#include <stdlib.h>

#define length 10

typedef struct stack {
	int data[length];
	int top;
} stack;

int stack_init(stack *s) {
	(s->top) = -1; // -1 is empty
}	

int push(stack *s, int data) {
	if ((s->top) < length - 1) {
		(s->top)++;
		(s->data)[(s->top)] = data;
	}
}	

int pop(stack *s) {
	if ((s->top) > -1) {
		(s->top)--;
	}
}

int showStack(stack *s) {
	for (int i=0; i<(s->top); i++) {
		printf("%d\n", (s->data)[i]);
	}
	printf("\n");
}

int main() {
//	stack *s;
//	s->top=-1;

//	stack s;
//	s.top = -1;

	stack *s = (stack *)malloc(sizeof(stack));
	s->top = -1;

	stack_init(s);
	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);
	showStack(s);
}
