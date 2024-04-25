// This is a test for bubble sort
#include <stdio.h>


void bubbleSort(int arr[], int size) {
	int temp;
	int swaped = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			showArr(arr, size);
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				if (swaped == 0) {
					swaped = 1;
				}
			}
		}
		if (swaped == 0) {
			break;
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
	//int testArr[5] = {5, 4, 3, 2, 1};
	int testArr[5] = {1, 2, 3, 4, 5};
	int arrSize = sizeof(testArr)/sizeof(int);
	//showArr(testArr, arrSize);
	bubbleSort(testArr, arrSize);
	showArr(testArr, arrSize);
}

