// this is a test for circular linked list for implementing queue
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
    que->rear->next = new_rear;
    new_rear->next = que->head;
    que->rear = new_rear;
    return;
}

void dequeue(queue *que) {
    if (que->head == NULL) {
        printf("the queue is already empty\n");
        return;
    }
    if (que->head->next == que->head) {
        free(que->head);
        que->head = NULL;
        que->rear = NULL;
        return;
    }
    node *temp_head = que->head;
    que->head = que->head->next;
    free(temp_head);
    que->rear->next = que->head;
    return;
}

void show(queue *que) {
    if (que->head == NULL) {
        printf("the queue is empty\n");
        return;
    }
    node *iteration_node = que->head;
    while (iteration_node != que->rear) {
        printf("%d->", iteration_node->value);
        iteration_node = iteration_node->next;
    }
    printf("%d\n", iteration_node->value);
    return;
}

int main() {
    queue *test_queue = (queue *)malloc(sizeof(queue));
    // initialization
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
    enqueue(test_queue, 7);
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
    return 0;
}

