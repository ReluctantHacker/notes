#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// 定義堆疊的結構
typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

// 初始化堆疊
void initialize(Stack *stack) {
    stack->top = -1;
}

// 檢查堆疊是否為空
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// 檢查堆疊是否已滿
int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// 將元素壓入堆疊
void push(Stack *stack, char value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->data[++stack->top] = value;
}

// 從堆疊彈出元素
char pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

// 獲取堆疊頂部的元素，但不彈出
char peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is Empty\n");
        exit(1);
    }
    return stack->data[stack->top];
}

// 檢查運算符的優先級
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else if (op == '^') {
	return 3;
    }
    return 0;
}

// 自定義的字符串反轉函數
void strrev(char str[]) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// 將中序表達式轉換為前序表達式
void infixToPrefix(char infix[], char prefix[]) {
    Stack stack;
    initialize(&stack);

    int infixLength = strlen(infix);
    int prefixIndex = 0;

    // 從右到左掃描中序表達式
    for (int i = infixLength - 1; i >= 0; i--) {
        char c = infix[i];

        // 如果是運算符
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            // 彈出堆疊中所有優先級大於或等於當前運算符的元素
            while (!isEmpty(&stack) && precedence(peek(&stack)) >= precedence(c)) {
                prefix[prefixIndex++] = pop(&stack);
            }
            // 將當前運算符壓入堆疊
            push(&stack, c);
        }
        // 如果是)括號
        else if (c == ')') {
            push(&stack, c);
        }
        // 如果是(括號
        else if (c == '(') {
	    while (!isEmpty(&stack) && peek(&stack) != ')') {
	    	prefix[prefixIndex++] = pop(&stack);
	    }
	    pop(&stack);
        }
        // 如果是操作數，直接輸出到前序表達式
        else {
            prefix[prefixIndex++] = c;
        }
    }

    // 彈出堆疊中剩餘的所有元素
    while (!isEmpty(&stack)) {
        prefix[prefixIndex++] = pop(&stack);
    }

    // 將前序表達式反轉得到正確的結果
    strrev(prefix);
}



int main() {
    char infix[MAX_SIZE];
    char prefix[MAX_SIZE];

    printf("Enter an infix expression: ");
    fgets(infix, MAX_SIZE, stdin);
    infix[strcspn(infix, "\n")] = '\0'; // Remove newline character

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}
