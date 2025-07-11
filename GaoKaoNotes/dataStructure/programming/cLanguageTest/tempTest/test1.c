// this is a test for double ended queue with cicular array
#include <stdio.h>
#include <stdlib.h>
#define queue_length 6

typedef struct queue {
	int head;
	int rear;
	int array[queue_length];
} queue;

void rear_enqueue(queue *que, int insert_value) {
	que->rear = (que->rear + 1) % queue_length;
	if (que->rear == que->head) {
		printf("the queue is already full\n");
		que->rear = (que->rear - 1 + queue_length) % queue_length;
		return;
	}
	(que->array)[que->rear] = insert_value;
	return;
}

void head_enqueue(queue *que, int insert_value) {
	que->head = (que->head - 1 + queue_length) % queue_length;
	if (que->head == que->rear) {
		printf("the queue is already full\n");
		que->head = (que->head + 1) % queue_length;
		return;
	}
	(que->array)[que->head] = insert_value;
	return ;
}

void head_dequeue(queue *que) {
	if (que->head == que->rear) {
		printf("the queue is already empty\n");
		return;
	}
	que->head = (que->head + 1) % queue_length;
	return;
}

void rear_dequeue(queue *que) {
	if (que->rear == que->head) {
		printf("the queue is already empty\n");
		return;
	}
	que->rear = (que->rear - 1 + queue_length) % queue_length;
	return;
}

void show(queue *que) {
	if (que->head == que->rear) {
		printf("the queue is empty\n");
		return;
	}
	int i = que->head;
	while(i != que->rear) {
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

}
