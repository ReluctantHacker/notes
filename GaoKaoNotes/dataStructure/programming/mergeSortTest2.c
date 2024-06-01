#include <stdio.h>
#include <stdlib.h>

int swap(int *arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}


int printArr(int *arr, int size) {
	printf("[");
	for (int i=0; i<size; i++) {
		printf("%d, ", arr[i]);
	}
	printf("]\n");
}


int merge(int *arr, int left, int mid, int right) {
	// create two temp array to store left and right array which will be combine into real array itself
	int n = mid-left+1;
	int m = right-mid;
	int L[n];
	int R[m];
	for (int i=0; i<n; i++) L[i] = arr[left+i];
	for (int j=0; j<m; j++) R[j] = arr[mid+1+j];

	// combine two temp array into the real array
	int i = 0;
	int j = 0;
	int k = left;
	while (i<n && j<m) {
		if (L[i] < R[j]) {
			arr[k] = L[i];
			i++;
		} else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i<n) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j<m) {
		arr[k] = R[j];
		j++;
		k++;
	}
}


int mergeSort(int *arr, int left, int right) {
	int mid = (right + left)/2;
	if (left < right) {
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

int main() {
	int arr[9] = {10, 9, 30, 21, 6, 11, 4, 3, 2};
	mergeSort(arr, 0, 8);
	printArr(arr, 9);
}
