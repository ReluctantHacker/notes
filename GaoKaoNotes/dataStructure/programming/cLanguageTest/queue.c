#include <stdio.h>
#include <stdlib.h>
#define queue_length 5

typedef struct queue {
	int head;
	int rear;
	int array[queue_length];
} queue;

void enqueue(queue *q, int inserted_value) {
	(q->head) = ((q->head)+1)%queue_length;
	if ((q->head)==(q->rear)) {
		printf("Queue is full");
		(q->head) = ((q->head)-1)%queue_length; // back 1 step
	} else {
		(q->array)[q->head] = inserted_value;
	}
}

void dequeue(queue *q) {
	(q->rear) = ((q->rear)+1)%queue_length;
	if ((q->rear)==(q->head)) {
		printf("Queue is empty");
		(q->
}
