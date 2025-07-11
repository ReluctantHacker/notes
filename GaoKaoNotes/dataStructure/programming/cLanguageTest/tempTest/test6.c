// this is a practice for queue with circular linked list
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
        new_rear->next = new_rear;
        que->rear = new_rear;
        que->head = new_rear;
        return;
    }
    new_rear->next = que->head;
    que->rear->next = new_rear;
    que->rear = new_rear;
    return;
}

void dequeue(queue *que) {
    if (que->head == NULL) {
        printf("the queue is already empty\n");
        return;
    }
    node *temp_head = que->head;
    if (que->head->next == que->head) {
        que->head = NULL;
        que->rear = NULL;
        free(temp_head);
        return;
    }
    que->head = que->head->next;
    que->rear->next = que->head;
    free(temp_head);
    return;
}

void show(queue *que) {
    if (que->head == NULL && que->rear == NULL) {
        printf("the queue is empty\n");
        return;
    }
    node *iteration_node = que->head;
    while (iteration_node->next != que->head) {
        printf("%d->", iteration_node->value);
        iteration_node = iteration_node->next;
    }
    printf("%d\n", iteration_node->value);
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
