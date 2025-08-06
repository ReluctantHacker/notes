// this is a practice for double ended queue with circular array algorithm
#include <stdio.h>
#include <stdlib.h>

#define array_length 7

typedef struct queue {
    int head;
    int rear;
    int array[array_length];
} queue;

void rear_enqueue(queue *que, int enValue) {
    que->rear = (que->rear + 1) % array_length;
    if (que->rear == que->head) {
        printf("the queue is already full\n");
        que->rear = (que->rear - 1 + array_length) % array_length;
        return;
    }
    (que->array)[que->rear] = enValue;
    return;
}

void head_enqueue(queue *que, int enValue) {
    int input_head = que->head; // because the head would be always empty so the the enValue should be in the head+1 slot position
    que->head = (que->head - 1 + array_length) % array_length;
    if (que->head == que->rear) {
        printf("the queue is already full\n");
        que->head = (que->head + 1) % array_length;
        return;
    }
    (que->array)[input_head] = enValue;
    return;
}

void head_dequeue(queue *que) {
    if (que->head == que->rear) {
        printf("the queue is already empty\n");
        return;
    }
    que->head = (que->head + 1) % array_length;
    return;
}

void rear_dequeue(queue *que) {
    if (que->rear == que->head ) {
        printf("the queue is already empty\n");
        return;
    }
    que->rear = (que->rear - 1 + array_length) % array_length;
    return;
} 

void show(queue *que) {
    if (que->head == que->rear) {
        printf("the queue is empty\n");
        return;
    }
    int i = que->head;
    while (i != que->rear) {
        i = (i + 1) % array_length;
        printf("%d->", (que->array)[i]);
    }
    printf("\n");
    return;
}

int main() {
    queue *test_queue = (queue *)malloc(sizeof(queue));

    // initialization
    test_queue->head = 0;
    test_queue->rear = 0;

    // implement
    rear_enqueue(test_queue, 3);
    show(test_queue);
    head_enqueue(test_queue, 11);
    show(test_queue);
    rear_enqueue(test_queue, 7);
    show(test_queue);
    head_enqueue(test_queue, 1);
    show(test_queue);
    rear_enqueue(test_queue, 10);
    show(test_queue);
    head_enqueue(test_queue, 9);
    show(test_queue);

    head_dequeue(test_queue);
    show(test_queue);
    rear_dequeue(test_queue);
    show(test_queue);
    head_dequeue(test_queue);
    show(test_queue);
    rear_dequeue(test_queue);
    show(test_queue);
    rear_dequeue(test_queue);
    show(test_queue);
    head_dequeue(test_queue);
    show(test_queue);

    head_enqueue(test_queue, 14);
    show(test_queue);
    rear_enqueue(test_queue, 13);
    show(test_queue);
    head_enqueue(test_queue, 23);
    show(test_queue);

    return 0;
}

