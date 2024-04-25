#include <stdio.h>
#include <stdlib.h>

int stack_length = 10;
int stack[10];
int top = -1; // -1 means empty stack

int push(int *s, int data) {
	if (top >= stack_length-1) return 0; // 超過最大長度了
	top++;
	s[top] = data;
	return 1;
}

int pop(int *s) {
	if (top <= -1) return 0; // 超過最小長度
	top--;
	return 1;
}

int printStack(int *s) {
	for (int i=0; i<top+1; i++) {
		printf("%d\n", s[i]);
	}
	printf("\n");
}


int main() {
	push(stack, 11);
	push(stack, 2);
	push(stack, 6);
	push(stack, 77);
	printStack(stack);
	pop(stack);
	printStack(stack);
}
