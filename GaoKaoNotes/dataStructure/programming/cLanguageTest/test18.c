// this is a test for queue linked list practice
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

void enqueue(queue *que, int input_value) {
	node *new_node = (node *)malloc(sizeof(node));
	new_node->value = input_value;
	new_node->next = NULL;
	if (que->head != NULL) {
		que->head->next = new_node;
	} else {
		que->rear = new_node;
	}
	que->head = new_node;
	return;
}

void dequeue(queue *que) {
	if (que->rear == NULL) {
		printf("the queue is already empty\n");
		return;
	}
	node *temp_node = que->rear;
	que->rear = que->rear->next;
	if (que->rear == NULL) que->head = NULL;
	free(temp_node);
	return;
}

void show(queue *que) {
	node *iteration_node = que->rear;
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
	return 0;
}
