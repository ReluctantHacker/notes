// Selection sort test
#include <stdio.h>

void selectionSort(int arr[], int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		int max_pos = 0;
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[max_pos] < arr[j+1]) {
				max_pos = j + 1;
			}
		}
		temp = arr[size-1-i];
		arr[size-1-i] = arr[max_pos];
		arr[max_pos] = temp;
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
	selectionSort(testArr, arrSize);
	showArr(testArr, arrSize);
}
