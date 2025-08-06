// this is a practice for selection sort
#include <stdio.h>
#include <stdlib.h>

#define arr_length 7

void selectionSort(int *arr) {
    for (int i=0; i<arr_length; i++) {
        int largest = 0;
        for (int j=0; j<arr_length-i; j++) {
            if (arr[j] > arr[largest]) {
                largest = j;
            }
        }
        int temp = arr[arr_length-1-i];
        arr[arr_length-1-i] = arr[largest];
        arr[largest] = temp;
    }
    return;
}

void show(int *arr) {
    for (int i=0; i<arr_length; i++) {
        printf("%d->", arr[i]);
    }
    printf("\n");
    return;
}

int main() {
    int testArr[arr_length] = {11, 7, 8, 11, 5, 6, 1};
    selectionSort(testArr);
    show(testArr);
    return 0;
}

