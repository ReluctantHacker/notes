// this is a test for queue by circucular array for a better show loop function
#include <stdio.h>
#include <stdlib.h>
#define queue_length 6

typedef struct queue {
	int head;
	int rear;
	int array[queue_length];
} queue;

void enqueue(queue *que, int insert_value) {
	que->rear = (que->rear + 1) % queue_length;
	if (que->rear == que->head) {
		printf("the queue is already full\n");
		que->rear = (que->rear - 1 + queue_length) % queue_length;
		return;
	}
	(que->array)[que->rear] = insert_value;
	return;
}

void dequeue(queue *que) {
	if (que->head == que->rear) {
		printf("the queue is already empty\n");
		return;
	}
	que->head = (que->head + 1) % queue_length;
	return;
}

void show(queue *que) {
	if (que->head == que->rear) {
		printf("the queue is empty\n");
		return;
	}
	int i = que->head;
	for (; i!=que->rear; ) {
		i = (i + 1) % queue_length;
		printf("%d->", (que->array)[i]);
	}
	printf("\n");
	return;
}

int main() {
	queue *test_queue = (queue *)malloc(sizeof(queue));
	test_queue->head = 0;
	test_queue->rear = 0;

	enqueue(test_queue, 1);
	show(test_queue);
	enqueue(test_queue, 2);
	show(test_queue);
	enqueue(test_queue, 3);
	show(test_queue);
	enqueue(test_queue, 4);
	show(test_queue);
	enqueue(test_queue, 5);
	show(test_queue);
	enqueue(test_queue, 6);
	show(test_queue);
	enqueue(test_queue, 7);
	show(test_queue);
	return 0;
}
