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
	for (int j = lo; j < hi; j++) {
		if (arr[j] <= arr[hi]) {
			swap(arr, i, j);
			i++;
		}
	}
	swap(arr, i, hi);
	return i;
}

/* 練習時的寫法, 其實差不多啦
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
*/


int partition2(int *arr, int lo, int hi) {
	int pivot = (lo+hi)/2;
	int i = lo;
	int j = hi;
	while (i <= j) {
		if (arr[i]>arr[pivot] && arr[j]<arr[pivot]) swap(arr, i, j);

		if (arr[i]<=arr[pivot]) i++;

		if (arr[j]>=arr[pivot]) j--;
	}
	int new_pivot = (i+j)/2; // arr[i]<=arr[pivot], arr[j]>=arr[pivot], 有可能把=的情況也算進去, 但其實我們沒有要把=的情況算進去(因為我們要找的小於pivot有幾個, 所以你不能把等於pivot也算進去, 這樣會多算一個, pivot如果包含在i的遍歷中, 那就不會在j的遍歷中, 所以兩個像家除2, 可以剛好把多出的1變成0.5, 在c語言整數型態中自動去除0.5, 所以這多出來的1就被拿掉了
	swap(arr, pivot, new_pivot);
	return new_pivot;
}

void quickSort(int arr[], int lo, int hi) {
	if (lo < hi) {
		int p = partition2(arr, lo, hi);	
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
	//int testArr[5] = {4, 3, 2, 1, 5};
	int testArr[9] = {4, 2, 1, 5, 3, 7, 9, 12, 3};
	int arrSize = sizeof(testArr)/sizeof(int);
	quickSort(testArr, 0, arrSize - 1);
	showArr(testArr, arrSize);
}
