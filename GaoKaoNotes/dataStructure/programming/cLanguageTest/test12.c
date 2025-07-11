// this is a practice for circular queue n-1
#include <stdio.h>
#include <stdlib.h>
#define queue_length 5

typedef struct queue {
	int head;
	int rear;
	int array[queue_length];
} queue;

void enqueue(queue *que, int input_value) {
	que->head = (que->head + 1) % queue_length;
	if (que->head == que->rear) {
		printf("the queue is full\n");
		que->head = (que->head + queue_length - 1) % queue_length;
		return;
	}
	(que->array)[que->head] = input_value;
	return;
}

void dequeue(queue *que) {
	if (que->rear == que->head) {
		printf("the queue is empty\n");
		return;
	}
	que->rear = (que->rear + 1) % queue_length;
	return;
}

void show(queue *que) {
	if (que->rear == que->head) {
		printf("the queue is empty.\n");
		return;
	}
	for (int i=que->rear+1; i<=que->head; i++) {
		printf("%d->", (que->array)[i]);
	}
	printf("\n");
	return;
}

int main() {
	// initialization
	queue *test_queue = (queue *)malloc(sizeof(queue));
	test_queue->head = 0;
	test_queue->rear = 0;
	// queue building
	enqueue(test_queue, 1);
	enqueue(test_queue, 2);
	enqueue(test_queue, 3);
	enqueue(test_queue, 4);
	enqueue(test_queue, 5);
	show(test_queue);
	enqueue(test_queue, 5);
	show(test_queue);
	dequeue(test_queue);
	dequeue(test_queue);
	dequeue(test_queue);
	dequeue(test_queue);
	dequeue(test_queue);
	dequeue(test_queue);
	return 0;
}
