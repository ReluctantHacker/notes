// insertion sort test
#include <stdio.h>

void insertionSort(int arr[], int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j > 0 ; j--) {
			if (arr[j] < arr[j-1]) {
				// swap
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			} else {
				break;
			}
		}
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
	int testArr[5] = {5, 4, 3, 2, 1};
	int arrSize = sizeof(testArr)/sizeof(int);
	insertionSort(testArr, arrSize);
	showArr(testArr, arrSize);
}
