#include <stdio.h>
#include <stdlib.h>


typedef struct minHeap {
	int size; // current size, not full size
	int capacity; // full size
	int *arr; // 動態array
} minHeap;


int leftChild(int i) {
	return i*2 + 1;
}

int rightChild(int i) {
	return i*2 + 2;
}

int parent(int i) {
	return (i - 1)/2;
}

int swap(int *arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int minHeapify(minHeap *mh, int s) {
	int smallest = s;
	int lChild = leftChild(smallest);
	int rChild = rightChild(smallest);
	int smallestChild = (mh->arr)[lChild]<(mh->arr)[rChild]?lChild:rChild;
	int realSmallest = (mh->arr)[smallestChild]<(mh->arr)[smallest]?smallestChild:smallest;

	if ((mh->arr)[smallestChild]<(mh->arr)[smallest]) {
		swap((mh->arr), smallestChild, smallest);
		smallest = smallestChild;
		minHeapify(mh, smallest);
	}
}

int insert(minHeap *mh, int n) {
	if ((mh->size)>=(mh->capacity)) {
		printf("out of range\n");
		return 0;
	}
	(mh->size)++;
	int crt_pos = (mh->size) - 1 ;
	(mh->arr)[crt_pos] = n;

	// maintain heap structure
	while (crt_pos>0 && (mh->arr)[crt_pos]<(mh->arr)[parent(crt_pos)]) {
		swap((mh->arr), crt_pos, parent(crt_pos));
		crt_pos = parent(crt_pos);
	}
}

int extract(minHeap *mh) {
	if ((mh->size)<=0) {
		printf("the heap is empty");
	}
	
	int extractNode = mh->arr[0];
	(mh->arr)[0] = (mh->arr)[(mh->size)-1];
	(mh->size)--;
	minHeapify(mh, 0);

}

int main() {
}
