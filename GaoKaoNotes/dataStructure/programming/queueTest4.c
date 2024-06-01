// c language queue array version, But the range of the queue would getting smaller and smaller which is not good at all!!!  You can use loop to make all the element in the queue move backward "front" step, but it needs O(n) time complexity which is not good enough.

#include <stdio.h>
#include <stdlib.h>

#define MAXQ 100

int queue[MAXQ];
int front = -1;
int tail = -1;
int size = 0;

/*
void Push(int a) {
    if (tail == MAXQ) {
        printf("佇列已滿\n");
    } else {
        queue[++tail] = a;
    }
}
*/

void Push(int a) {
	if (tail == MAXQ && front == 0) {
		if (front == 0) {
			printf("Queue is Full.\n");
		} else {
			for (int i=0; i<(tail-front); i++) {
				queue[i] = queue[front + 1 + i];
				queue[++tail] = a;
			}
		}
	} else {
		queue[++tail] = a;
	}
}

int Pop() {
	if (front == tail) {
		printf("Queue is Empty.");
		return 0;
	} else {
		return queue[++front];
	}
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
