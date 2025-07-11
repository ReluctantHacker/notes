// this is a second practice for queue in linked list 2
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *next;
} node;

typedef struct queue {
	node *head;
	node *rear;
} queue;

void enqueue(queue *que, int insert_value) {
	node *new_rear = (node *)malloc(sizeof(node));
	new_rear->value = insert_value;
	if (que->rear == NULL) {
		que->head = que->rear = new_rear;
		return;
	}
	que->rear->next = new_rear;
	que->rear = new_rear;
	return;
}

void dequeue(queue *que) {
	if (que->head == NULL) {
		printf("the queue is empty\n");
		return;
	}
	node *temp_head = que->head;
	que->head = que->head->next;
	if (que->head == NULL) que->rear = NULL;
	free(temp_head);
}

void show(queue *que) {
	node *iteration_node = que->head;
	while (iteration_node != NULL) {
		printf("%d->", iteration_node->value);
		iteration_node = iteration_node->next;
	}
	printf("\n");
	return;
}

int main() {
	queue *test_queue = (queue *)malloc(sizeof(queue));
	test_queue->head = NULL;
	test_queue->rear = NULL;
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
	dequeue(test_queue);
	show(test_queue);
	dequeue(test_queue);
	show(test_queue);
	return 0;
}
