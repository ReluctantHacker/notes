#include <stdio.h>
#include <stdlib.h>

int swap(int *arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}


int partition(int *arr, int lo, int hi) {
	int pivot = hi;
	int i = lo;
	for (int j=i; j<hi; j++) {
		if (arr[j]<arr[pivot]) {
			swap(arr, j, i);
			i++;
		}
	}
	swap(arr, i, pivot);
	pivot = i;
	return pivot;
}

int partition2(int *arr, int lo, int hi) {
	int pivot = (lo+hi)/2;
	int i = lo;
	int j = hi;
	while (i <= j) {
		if (arr[i]>arr[pivot] && arr[j]<arr[pivot]) swap(arr, i, j);

		if (arr[i]<=arr[pivot]) i++;

		if (arr[j]>=arr[pivot]) j--;
	}
	int new_pivot = (i+j)/2;
	swap(arr, pivot, new_pivot);
	return new_pivot;
}

int quickSort(int *arr, int lo, int hi) {
	printArr(arr, hi-lo+1);
	if (hi>lo) {
		int pivot = partition2(arr, lo, hi);
		quickSort(arr, lo, pivot-1);
		quickSort(arr, pivot+1, hi);
	}
}


int printArr(int *arr, int n) {
	printf("[");
	for (int i=0; i<n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("]\n");
}

int main() {
	int arr[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
	quickSort(arr, 0, 8);
	printArr(arr, 9);
}

