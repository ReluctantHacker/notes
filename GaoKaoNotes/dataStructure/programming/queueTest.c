// this is a queue practice by using array method
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

typedef struct queue {
	int data_list[LENGTH];
	int front;
	int rear;
} queue;

int init_queue(queue *q) {
	q->front = -1;
	q->rear = -1;
}

int enqueue(queue *q, int data) {
	if ((q->rear) < LENGTH) {//sizeof(q->data_list)/sizeof(int)) {
		(q->rear)++;
		(q->data_list)[q->rear] = data;
	} else {
		printf("The queue is full.\n");
		printf("%d\n", sizeof(q->data_list)/sizeof(int));
		printf("%d\n", q->rear);
	}
}

int dequeue(queue *q) {
	if ((q->rear) == (q->front)) {
		printf("The queue is empty\n");
	} else {
		for (int i=(q->front)+1; i<(q->rear); i++) {
			(q->data_list)[i] = (q->data_list)[i+1];
		}
		(q->rear)--;
	}
}

int showQueue(queue *q) {
	for (int i=(q->front)+1; i<(q->rear)+1; i++) {
		printf("%d\n", (q->data_list)[i]);
	}
	printf("\n");
}

int main() {
	queue q;
	init_queue(&q);
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);
	enqueue(&q, 5);
	showQueue(&q);

	dequeue(&q);
	showQueue(&q);

}
