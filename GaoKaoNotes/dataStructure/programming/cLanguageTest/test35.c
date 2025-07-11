// this is a test for priority queue with normal array (the simplest method)
#include <stdio.h>
#include <stdlib.h>
#define array_length 6

typedef struct queue {
    int size; // present size
    int array[array_length];
} queue;

void enqueue(queue *que, int insert_value) {
    (que->size)++;
    (que->array)[que->size-1] = insert_value;
    return;
}

int dequeue(queue *que) {
    if (que->size <= 0) {
        printf("the queue is empty\n");
        return 0;
    }
    int maxIndex = 0;
    for (int i = 0; i < (que->size); i++) {
        if ((que->array)[maxIndex] < (que->array)[i]) {
            maxIndex = i;
        }
    }
    int dequeue_result = (que->array)[maxIndex];
    for (int i = maxIndex; i < (que->size) - 1; i++) {
        (que->array)[i] = (que->array)[i+1];
    }
    (que->size)--;
    printf("%d\n", dequeue_result);
    return dequeue_result;
}

int main() {
    queue *test_queue = (queue *)malloc(sizeof(queue));
    // initialization
    test_queue->size = 0;

    enqueue(test_queue, 5);
    enqueue(test_queue, 16);
    enqueue(test_queue, 1);
    enqueue(test_queue, 3);
    enqueue(test_queue, 10);
    enqueue(test_queue, 6);
    enqueue(test_queue, 2);

    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    return 0;
}

