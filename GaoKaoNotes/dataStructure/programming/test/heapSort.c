#include <stdio.h>
#include <stdlib.h>

typedef struct minHeap {
	int size; // current size
	int capacity; // full size
	int *arr;
} minHeap;

int swap(int *arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int parent(int i) {
	return (i-1)/2;
}

int lChild(int i) {
	return 2*i+1;
}

int rChild(int i) {
	return 2*i+2;
}

int smallestChild(int *arr, int i) {
	int lc = lChild(i);
	int rc = rChild(i);
	return arr[lc]<arr[rc]?lc:rc;
}

int insert(minHeap *mh, int v) {
	if ((mh->size)>=(mh->capacity)) return 0;
	int last = (mh->size);
	(mh->arr)[last] = v;
	(mh->size)++;

	// heapify
	while (last > 0 && (mh->arr)[last]<(mh->arr)[parent(last)]) {
		swap((mh->arr), last, parent(last));
		last = parent(last);
	}
}

int extract(minHeap *mh) {
	if (mh->size <= 0) return 0;
	int smallest = 0;
	int extVal = (mh->arr)[smallest];
	(mh->arr)[smallest] = (mh->arr)[(mh->size)-1];
	(mh->size)--;

	// heapify
	int sc = smallestChild((mh->arr), smallest);
	while ((mh->arr)[sc]<(mh->arr)[smallest] && sc<(mh->size)) {
		swap((mh->arr), sc, smallest);
		smallest = sc;
		sc = smallestChild((mh->arr), smallest);
	}
	return extVal;
}

int heapSort(int *arr, int arrSize) {
	// build arr to heap
	minHeap *mh = (minHeap *)malloc(sizeof(minHeap));
	mh->size = 0;
	mh->capacity = arrSize;
	mh->arr = (int *)malloc(sizeof(int)*arrSize);
	for (int i=0; i<arrSize; i++) {
		insert(mh, arr[i]);
	}

	// extract sorted result from heap to final array
	for (int i=0; i<arrSize; i++) {
		arr[i] = extract(mh);
	}
}

int printArr(int *arr, int size) {
	printf("[");
	for (int i=0; i<size; i++) {
		printf("%d, ", arr[i]);	
	}
	printf("]\n");
}

int main() {
	int arr[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
	printf("original array:\n");
	printArr(arr, 9);
	printf("sorted array:\n");
	heapSort(arr, 9);
	printArr(arr, 9);
}
