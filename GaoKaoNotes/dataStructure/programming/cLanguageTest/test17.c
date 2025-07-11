// queue with linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	node *next;
} node;

typedef struct queue {
	node *head;
	node *rear;
} queue;

void enqueue(queue *que, int insert_value) {
	node *new_head = (node *)malloc(sizeof(node));
	new_head->value = insert_value;
	que->head->next = new_head;
	que->head = new_head;
	return;
}

void dequeue(queue *que) {
	if (que->rear == NULL) {
		printf("already empty\n");
		return;
	}
	node *temp_rear = que->rear;
	que->rear = que->rear->next;
	free(temp_rear);
	return; 
}

void show(queue *que) {

}

int main() {
	queue *test_queue = malloc
	return 0;
}



