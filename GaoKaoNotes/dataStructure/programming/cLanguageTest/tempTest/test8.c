// this is a test for using heap to build priority queue. max-heap
#include <stdio.h>
#include <stdlib.h>
#define array_length 10

typedef struct heap {
    int size;
    int array[array_length];
} heap;

void heapify_up(heap *hp, int largest) {
    if (largest == 0) return;
    int parent = (largest + 1) / 2 - 1;
    if ((hp->array)[parent] > (hp->array)[largest]) {
        int temp = (hp->array)[parent];
        (hp->array)[parent] = (hp->array)[largest];
        (hp->array)[largest] = temp;
        heapify_up(hp, parent);
    }
    return;
}

void heapify_down(heap *hp, int largest) {
    if (largest >= hp->size) return;
    int left_child = largest*2 + 1;
    int right_child = largest*2 + 2;
    if ((hp->array)[largest] > (hp->array)[left_child]) {
        int temp = (hp->array)[largest];
        (hp->array)[largest] = (hp->array)[left_child];
        (hp->array)[left_child] = temp;
        heapify_down(hp, left_child);
    } else if ((hp->array)[largest] > (hp->array)[right_child]) {
        int temp = (hp->array)[largest];
        (hp->array)[largest] = (hp->array)[right_child];
        (hp->array)[right_child] = temp;
        heapify_down(hp, right_child);
    } else {
        return;
    }
    return;
}

int main() {
    int test_array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < array_length; i++) {

    }
    heap *test_heap = (heap *)malloc(sizeof(heap)); 
    test_heap = 
    return 0;
}
