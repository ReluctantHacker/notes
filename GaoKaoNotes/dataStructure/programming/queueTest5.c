// c language queue array version, But the range of the queue would getting smaller and smaller which is not good at all!!!  You can use loop to make all the element in the queue move backward "front" step, but it needs O(n) time complexity which is not good enough. So we use another skill called "Circular Array"
// The method below called "n-1" method for circular array because "front" position would never have any data!!

#include <stdio.h>
#include <stdlib.h>

#define MAXQ 100

int queue[MAXQ];
int front = 0;
int tail = 0;


void Push(int a) {
	tail = (tail + 1) % MAXQ;
	if (front == tail) {
		tail = (tail - 1) % MAXQ;
		printf("Queue is Full.");
	} else {
		queue[tail] = a;
	}
}

int Pop() {
	int temp = front;
	if (front == tail) {
		printf("Queue is Empty.");
	} else {
		front = (front + 1) % MAXQ;
	}
	return queue[temp];
}


int getFront() {
    return queue[front + 1];
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
        Push(rand() % 100);
    }
    return 0;
}
