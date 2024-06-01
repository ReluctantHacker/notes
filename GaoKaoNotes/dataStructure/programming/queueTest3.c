// c language queue array version, But the range of the queue would getting smaller and smaller which is not good at all!!!  We need to find another method to deal with this problem.

#include <stdio.h>
#include <stdlib.h>

#define MAXQ 100

int queue[MAXQ];
int front = -1;
int tail = -1;
int size = 0;

void Push(int a) {
    if (tail == MAXQ) {
        printf("佇列已滿\n");
    } else {
        queue[++tail] = a;
    }
}

int Pop() {
    return queue[++front];
}

int getFront() {
    return queue[front + 1];
}

int getSize() {
    return size;
}

int getTail() {
    return queue[tail];
}

int isempty() {
    if (front == tail) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    for (int i = 0; i < 100; i++) {
        size += 1;
        Push(rand() % 100);
    }

    printf("佇列最前面的資料為：%d\n", getFront());
    printf("佇列最後面的資料為：%d\n", getTail());
    printf("佇列的總數為：%d\n\n", getSize());

    while (!isempty()) {
        printf("佇列刪除的資料為：%d\n", Pop());
    }
    //-----------------------------------------------

    for (int i = 0; i < 100; i++) {
        size += 1;
        Push(rand() % 100);
    }

    printf("佇列最前面的資料為：%d\n", getFront());
    printf("佇列最後面的資料為：%d\n", getTail());
    printf("佇列的總數為：%d\n\n", getSize());

    while (!isempty()) {
        printf("佇列刪除的資料為：%d\n", Pop());
    }
	
    return 0;
}
