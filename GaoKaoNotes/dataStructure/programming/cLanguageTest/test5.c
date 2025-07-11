// this is a test for queue practice with circular method
#include <stdio.h>
#include <stdlib.h>
#define queue_length 5

typedef struct queue {
	int head;
	int rear;
	int array[queue_length];
} queue;


void enqueue(queue *que, int input_value) {
	(que->head) = ((que->head)+1)%queue_length;
	if ((que->head) == (que->rear)) {
		printf("already full\n");
		(que->head) = ((que->head)+queue_length-1)%queue_length;
		return;
	}
	(que->array)[que->head] = input_value;
	return;
}

void dequeue(queue *que) {
	if (que->head == que->rear) {
		que->head = -1;
		que->rear = -1;
		return;
	}
	if (que->head == -1 && que->rear == -1) {
		printf("already empty\n");
		return;
	}
	(que->head) = ((que->head)+1)%queue_length;
	return;
}

void show(queue *que) {
	if (que->head == -1 && que->rear == -1) {
		printf("nothing left\n");
		return;
	}
	for (int i=que->rear; i<=que->head; i++) {
		printf("%d->", (que->array)[i]);
	}
	return;
}

int main() {
	queue *test_queue = (queue *)malloc(sizeof(queue));
	// initialization
	test_queue->head = -1;
	test_queue->rear = -1;
	enqueue(test_queue, 1);
	enqueue(test_queue, 2);
	enqueue(test_queue, 3);
	enqueue(test_queue, 4);
	enqueue(test_queue, 5);
	enqueue(test_queue, 6);
	show(test_queue);
	return 0;
}
