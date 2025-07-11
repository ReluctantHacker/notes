// this is a priority queue practice by using array. This example is kinda special because it's the SIMPLEST priority queue which uses the element of array itself as the data and priority in the same time. In this method I let for loop in the enqueue
#include <stdio.h>
#include <stdlib.h>
#define queue_length 6

typedef struct queue {
    int size;
    int arr[queue_length];
} queue;

void bubbleSort(int *sorting_array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (sorting_array[j] > sorting_array[j+1]) {
                int temp = sorting_array[j];
                sorting_array[j] = sorting_array[j+1];
                sorting_array[j+1] = temp;
            }
        }
    }
    return;
}

void enqueue(queue *que, int input_value) {
    if (que->size >= queue_length) { 
        printf("the queue is already full.\n");
        return;
    }
    (que->size)++;
    (que->arr)[que->size-1] = input_value;
    bubbleSort(que->arr, que->size);
    return;
}

void dequeue(queue *que) {
    if (que->size <= 0) {
        printf("the queue is already empty\n");
        return;
    }
    printf("%d is take off from the queue\n", (que->arr)[que->size-1]); 
    (que->size)--;
    return;
}

void showQueue(queue *que) {
    if (que->size <= 0) {
        printf("the queue is empty\n");
        return;
    }
    for (int i = 0; i <= que->size - 1; i++) {
        printf("%d->", (que->arr)[i]); 
    }
    printf("\n");
    return;
}

int main() {
    queue *test_queue = (queue *)malloc(sizeof(queue));
    // initialization
    test_queue->size = 0;
    enqueue(test_queue, 1);
    showQueue(test_queue);
    enqueue(test_queue, 2);
    showQueue(test_queue);
    enqueue(test_queue, 3);
    showQueue(test_queue);
    enqueue(test_queue, 4);
    showQueue(test_queue);
    enqueue(test_queue, 5);
    showQueue(test_queue);
    enqueue(test_queue, 6);
    showQueue(test_queue);
    enqueue(test_queue, 7);
    showQueue(test_queue);
    enqueue(test_queue, 8);
    showQueue(test_queue);


    dequeue(test_queue);
    showQueue(test_queue);
    dequeue(test_queue);
    showQueue(test_queue);
    dequeue(test_queue);
    showQueue(test_queue);
    dequeue(test_queue);
    showQueue(test_queue);
    dequeue(test_queue);
    showQueue(test_queue);
    dequeue(test_queue);
    showQueue(test_queue);
    dequeue(test_queue);
    showQueue(test_queue);
    dequeue(test_queue);
    showQueue(test_queue);
    dequeue(test_queue);
    showQueue(test_queue);
    return 0;
}

