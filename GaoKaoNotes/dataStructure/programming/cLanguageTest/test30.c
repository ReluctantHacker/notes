// this is a test for double ended queue(also call doubled ended stack, or stack-queue-hybrid) I figure that the structure of head_push and rear_push should symmetric(so as head_pop and rear_pop)
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *next;
	struct node *previous;
} node;

typedef struct queue {
	node *head;
	node *rear;
} queue;

void rear_push(queue *que, int insert_value) {
	node *new_rear = (node *)malloc(sizeof(node));
	new_rear->value = insert_value;
	if (que->rear == NULL) {
		que->rear = new_rear;
		que->head = new_rear;
		return;
	}
	que->rear->next = new_rear;
	new_rear->previous = que->rear;
	que->rear = new_rear;
	return;
}

void head_push(queue *que, int insert_value) {
	node *new_head = (node *)malloc(sizeof(node));
	new_head->value = insert_value;
	if (que->head == NULL) {
		que->head = new_head;
		que->rear = new_head;
		return;
	}
	que->head->previous = new_head;
	new_head->next = que->head;
	que->head = new_head;
	return;
}

void head_pop(queue *que) {
	if (que->head == NULL) {
		printf("the queue is already empty\n");
		return;
	}
	node *temp_head= que->head;
	que->head = que->head->next;
	free(temp_head);
	if (que->head == NULL) {
		que->rear = NULL;
		return;
	}
	que->head->previous = NULL;
	return;
}

void rear_pop(queue *que) {
	if (que->rear == NULL) {
		printf("the queue is already empty\n");
		return;
	}
	node *temp_rear = que->rear;
	que->rear = que->rear->previous;
	free(temp_rear);
	if (que->rear == NULL) {
		que->head = NULL;
		return;
	}
	que->rear->next = NULL;
	return;
}

void show(queue *que) {
	if (que->head == NULL) {
		printf("the queue is empty\n");
		return;
	}
	node *iteration_node = que->head;
	while(iteration_node != NULL) {
		printf("%d->", iteration_node->value);
		iteration_node = iteration_node->next;
	}
	printf("\n");
	return;
}

int main() {
	queue *test_queue = (queue *)malloc(sizeof(queue));
	// initialization
	test_queue->head = NULL;
	test_queue->rear = NULL;

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
	return 0;
}

