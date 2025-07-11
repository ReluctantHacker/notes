// this is a test for queue practice, normal method
#include <stdio.h>
#include <stdlib.h>
#define queue_length 5

typedef struct queue {
	int head;
	int rear;
	int array[queue_length];
} queue;


void enqueue(queue *que, int input_value) {
	if (que->head >= queue_length-1) {
		if (que->rear == 0) { // real full
			printf("the queue is full.\n");
			return;
		} else { // fake full
			for (int i=0; i<=((que->rear)-(que->head)); i++) {
				(que->array)[i] = (que->array)[(que->rear)+i];
			}
		}
	}
	(que->head)++;
	(que->array)[que->head] = input_value;
	if (que->rear == -1) que->rear = 0;
	return;
}

void dequeue(queue *que) {
	if (que->rear == que->head) {
		que->head = -1;
		que->rear = -1;
		return;
	}
	if (que->head == -1 && que->rear == -1) {
		printf("the queue is empty\n");
		return;
	}
	(que->rear)++;
	return;
}

void show(queue *que) {
	if (que->rear == -1 && que->head == -1) {
		printf("the queue is empty\n");
		return;
	}
	for (int i=que->rear; i<=que->head; i++) {
		printf("%d->", (que->array)[i]);
	}
	printf("\n");
	return;
}


int main() {
	queue *test_queue = (queue *)malloc(sizeof(queue));
	// initialization
	test_queue->head = -1;
	test_queue->rear = -1;
	// queue building
	enqueue(test_queue, 1);
	enqueue(test_queue, 2);
	enqueue(test_queue, 3);
	enqueue(test_queue, 4);
	enqueue(test_queue, 5);
	show(test_queue);
	enqueue(test_queue, 6);
	show(test_queue);
	dequeue(test_queue);
	show(test_queue);
	dequeue(test_queue);
	show(test_queue);
	dequeue(test_queue);
	show(test_queue);
	dequeue(test_queue);
	show(test_queue);
	dequeue(test_queue);
	show(test_queue);
	return 0;
}
