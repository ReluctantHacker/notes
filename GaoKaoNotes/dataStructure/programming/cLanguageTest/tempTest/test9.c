// this is a practice for priority queue with heap array
#include <stdio.h>
#include <stdlib.h>
#define array_length 6

typedef struct heap {
    int rear;
    int array[array_length];
} heap;

void heapify_up(heap *hp, int largest) {
    if (largest <= 0) return;
    int parent = (largest + 1) / 2 - 1;
    if ((hp->array)[largest] > (hp->array)[parent]) {
        int temp = (hp->array)[largest];
        (hp->array)[largest] = (hp->array)[parent];
        (hp->array)[parent] = temp;
        heapify_up(hp, parent);
    }
    return;
}

void heapify_down(heap *hp, int largest) {
    if (largest >= hp->rear) return;
    int left_child = largest*2 + 1;
    int right_child = largest*2 + 2;
    int old_largest = largest;
    if ((hp->array)[left_child] > (hp->array)[largest] && left_child <= hp->rear) {
        largest = left_child;
    }
    if ((hp->array)[right_child] > (hp->array)[largest] && right_child <= hp->rear) {
        largest = right_child;
    }
    if (largest == old_largest) return;
    int temp = (hp->array)[largest];
    (hp->array)[largest] = (hp->array)[old_largest];
    (hp->array)[old_largest] = temp;
    heapify_down(hp, largest);
    return;
} 

void enqueue(heap *hp, int insert_value) {
    if (hp->rear >= array_length - 1) {
        printf("the heap is already full\n");
        return;
    }
    (hp->rear)++;
    (hp->array)[hp->rear] = insert_value;
    heapify_up(hp, hp->rear);
    return;
}

void dequeue(heap *hp) {
    if (hp->rear < 0) {
        printf("the heap is already empty\n");
        return;
    }
    int dequeue_value = (hp->array)[0];
    printf("%d\n", dequeue_value);
    (hp->array)[0] = (hp->array)[hp->rear];
    (hp->rear)--;
    heapify_down(hp, 0);
    return;
}

void show(heap *hp) {
    for (int i = 0; i <= hp->rear; i++) {
        printf("%d->", (hp->array)[i]);
    }
    printf("\n");
    return;
}

int main() {
    heap *test_heap = (heap *)malloc(sizeof(heap));
    test_heap->rear = -1; // initialization

    enqueue(test_heap, 2); 
    enqueue(test_heap, 1); 
    enqueue(test_heap, 11); 
    enqueue(test_heap, 5); 
    enqueue(test_heap, 7); 
    enqueue(test_heap, 6); 
    enqueue(test_heap, 14); 
    enqueue(test_heap, 3); 

    show(test_heap);
    dequeue(test_heap);
    show(test_heap);
    dequeue(test_heap);
    show(test_heap);
    dequeue(test_heap);
    show(test_heap);
    dequeue(test_heap);
    show(test_heap);
    dequeue(test_heap);
    show(test_heap);
    dequeue(test_heap);
    show(test_heap);
    dequeue(test_heap);
    show(test_heap);
    dequeue(test_heap);
    show(test_heap);
    return 0;
}
