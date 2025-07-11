// this is a test for queue
#include <stdio.h>
#include <stdlib.h>
#define queue_length 5

typedef struct queue {
	int head; // initialization value: -1
	int rear; // initialization value: -1
	int array[queue_length];
} queue;


void enqueue(queue *que, int input_value) {
	if ((que->head) >= queue_length-1 && (que->rear) == 0) {
		if ((que->rear) == 0) { // real full
			printf("out of range\n");
			return;
		} else { // fake full
			for (int i=0; i<=(que->head)-(que->rear); i++) {
				(que->array)[i] = (que->array)[(que->rear)+i];
			}
			que->head = (que->head)-(que->rear);
			que->rear = 0;
		}
	}
	(que->head)++;
	(que->array)[que->head] = input_value;
	return;
}

void dequeue(queue *que) {
	if ((que->rear) == (que->head) && (que->rear) != -1) {
		que->rear = -1;
		que->head = -1;
		return;
	}
	if ((que->rear) > (que->head)) {
		printf("already empty\n");
		return;
	}
	(que->rear)++;
}

void showQueue(queue *que) {
	for (int i=que->rear; i<=que->head; i++) {
		printf("%d->", (que->array)[i]);
	}
	printf("\n");
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
	showQueue(test_queue);
	return 0;
}
