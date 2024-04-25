// This is a queue practice by using linked list method
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} node;

typedef struct queue { 
	node *front;
	node *rear;
} queue;

int init_queue(queue *q) {
	q->front = NULL;
	q->rear = NULL;
}

int enqueue(queue *q, int data) {
	node *new_node = (node *)malloc(sizeof(node));
	new_node->data = data;
	new_node->next = NULL;
	if ((q->front) == NULL && (q->rear) == NULL) {
		(q->front) = new_node;
		(q->rear) = new_node;
	} else {
		q->rear->next = new_node;
		q->rear = new_node;
	}
}

int dequeue(queue *q) {
	if ((q->front) == (q->rear)) {
		if ((q->front) == NULL){
			printf("queue is empty\n");
		} else {
			(q->front) = NULL;
			(q->rear) = NULL;
		}
	} else {
		node *temp = q->front;
		q->front = q->front->next;
		free(temp);
	}
}

int showQueue(queue *q) {
	node *current = q->front;
	while (current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
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
