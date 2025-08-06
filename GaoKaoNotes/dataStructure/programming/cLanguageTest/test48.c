// this is a practice for insertion sort algorithm
#include <stdio.h>
#include <stdlib.h>

#define arr_length 6

void insertionSort(int *arr) {
    for (int i=1; i<arr_length; i++) {
        for (int j=i; arr[j]<arr[j-1] && j>0; j--) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
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
    int testArr[arr_length] = {7, 4, 2, 5, 3, 11};
    insertionSort(testArr);
    show(testArr);
    return 0;
}

