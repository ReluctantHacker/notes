// this is a test for double ended queue in circular array method
#include <stdio.h>
#include <stdlib.h>
#define queue_length 6

typedef struct queue {
	int head;
	int rear;
	int array[queue_length];
} queue;

void rear_push(queue *que, int insert_value) {
	que->rear = (que->rear + 1) % queue_length;
	if (que->rear == que->head) {
		printf("the queue is already full\n");
		que->rear = (que->rear - 1 + queue_length) % queue_length;
		return;
	}
	(que->array)[que->rear] = insert_value;
	return;
}

void head_push(queue *que, int insert_value) {
	que->head = (que->head - 1 + queue_length) % queue_length;
	if (que->head == que->rear) {
		printf("the queue is already full\n");
		que->head = (que->head + 1) % queue_length;
		return;
	}
	(que->array)[que->head] = insert_value;
	return;
}

void head_pop(queue *que) {
	if (que->head == que->rear) {
		printf("the queue is already empty\n");
		return;
	}
	que->head = (que->head + 1) % queue_length;
	return;
}

void rear_pop(queue *que) {
	if (que->rear == que->head) {
		printf("the queue is already empty\n");
		return;
	}
	que->rear = (que->rear - 1 +queue_length) % queue_length;
	return;
}

void show(queue *que) {
	if (que->head == que->rear) {
		printf("the queue is empty\n");
		return;
	}
	for (int i=que->head+1; i<=que->rear; i++) {
		printf("%d->", (que->array)[i]);
	}
	printf("\n");
	return;
}

int main() {
	queue *test_queue = (queue *)malloc(sizeof(queue));
	test_queue->head = 0;
	test_queue->rear = 0;
	rear_push(test_queue, 1);
	show(test_queue);
	rear_push(test_queue, 2);
	show(test_queue);
	rear_push(test_queue, 3);
	show(test_queue);
	rear_push(test_queue, 4);
	show(test_queue);
	rear_push(test_queue, 5);
	show(test_queue);
	rear_push(test_queue, 6);
	show(test_queue);
	rear_push(test_queue, 7);
	show(test_queue);
	rear_push(test_queue, 8);
	show(test_queue);
	rear_push(test_queue, 9);
	show(test_queue);

	head_pop(test_queue);
	show(test_queue);
	head_pop(test_queue);
	show(test_queue);
	head_pop(test_queue);
	show(test_queue);
	head_pop(test_queue);
	show(test_queue);
	head_pop(test_queue);
	show(test_queue);
	head_pop(test_queue);
	show(test_queue);
	return 0;
}
