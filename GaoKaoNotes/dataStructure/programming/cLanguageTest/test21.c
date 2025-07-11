// this is a test for double ended queue by using linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *previous;
	struct node *next;
} node;

typedef struct queue {
	node *head;
	node *rear;
} queue;

void head_push(queue *que, int insert_value) {
	node *new_head = (node *)malloc(sizeof(node));
	new_head->value = insert_value;
	if (que->head == NULL) {
		que->head = new_head;
		que->rear = new_head;
		return;
	}
	new_head->next = que->head;
	que->head->previous = new_head;
	que->head = new_head;
	return;
}

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

void head_pop(queue *que) {
	if (que->head == NULL) {
		printf("the queue is already empty\n");
		return;
	}
	node *temp_head = que->head;
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
	node *iteration_node = que->head;
	if (iteration_node == NULL) {
		printf("the queue is empty\n");
		return;
	}
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
	head_push(test_queue, 1);
	show(test_queue);
	head_push(test_queue, 2);
	show(test_queue);
	head_push(test_queue, 3);
	show(test_queue);
	head_push(test_queue, 4);
	show(test_queue);
	head_push(test_queue, 5);
	show(test_queue);
	head_push(test_queue, 6);
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
