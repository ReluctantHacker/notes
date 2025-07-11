// this is a test for priority queue by using array with loop in dequeue(SIMPLEST)
#include <stdio.h>
#include <stdlib.h>
#define queue_length 7 

typedef struct queue {
    int size;
    int arr[queue_length];
} queue;

void enqueue(queue *que, int insert_value) {
    if (que->size >= queue_length) {
        printf("the queue is already full\n");
        return;
    }
    (que->size)++;
    (que->arr)[que->size-1] = insert_value;
    return; 
}

void dequeue(queue *que) {
    if (que->size <= 0) {
        printf("the queue is already empty\n");
        return;
    }
    int maxIndex = 0;
    for (int i = 0; i < que->size-1; i++) {
        if ((que->arr)[i] >= (que->arr)[maxIndex]) {
            maxIndex = i; 
        }
    }
    printf("%d\n", (que->arr)[maxIndex]);
    (que->size)--;
    for (int i = maxIndex; i <= que->size-1; i++) {
        (que->arr)[i] = (que->arr)[i+1];
    }
    return;
}

void showQueue(queue *que) {
    if (que->size <= 0) {
        printf("the queue is already empty\n");
        return;
    }
    for (int i = 0; i <= que->size-1; i++) {
        printf("%d->", (que->arr)[i]);
    }
    printf("\n");
    return;
}

int main() {
    queue *test_queue = (queue *)malloc(sizeof(queue));
    // initialization
    test_queue->size = 0;
    
    enqueue(test_queue, 3);
    enqueue(test_queue, 26);
    enqueue(test_queue, 1);
    enqueue(test_queue, 18);
    enqueue(test_queue, 700);
    enqueue(test_queue, 12);

    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    dequeue(test_queue);
    return 0;
}
