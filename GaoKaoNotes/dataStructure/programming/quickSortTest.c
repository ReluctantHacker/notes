// quick sort  test
#include <stdio.h>


void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int arr[], int lo, int hi) {
	// for arr[hi] is the pivot
	int i = lo;
	int temp;
	for (int j = lo; j < hi; j++) {
		if (arr[j] <= arr[hi]) {
			swap(arr, i, j);
			i++;
		}
	}
	swap(arr, i, hi);
	return i;
}

void quickSort(int arr[], int lo, int hi) {
	if (lo < hi) {
		int p = partition(arr, lo, hi);	
		quickSort(arr, lo, p -1);
		quickSort(arr, p + 1, hi);
	}
}

void showArr(int arr[], int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d,", arr[i]);
	}
	printf("]\n");
}

int main() {
	int testArr[5] = {4, 3, 2, 1, 5};
	int arrSize = sizeof(testArr)/sizeof(int);
	quickSort(testArr, 0, arrSize - 1);
	showArr(testArr, arrSize);
}
