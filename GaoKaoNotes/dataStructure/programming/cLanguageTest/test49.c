// insertion sort with key algorithm, this one should be generally faster than the test48.c due to reduced swaps.
#include <stdio.h>
#include <stdlib.h>

#define arr_length 7

void insertionSort(int *arr) {
    for (int i=0; i<arr_length-1; i++) {
        int j = i+1;
        int key = arr[j];
        while (j>0 && key<arr[j-1]) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
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
    int testArr[arr_length] = {7, 6, 5, 4, 3, 2, 1};
    insertionSort(testArr);
    show(testArr);
    return 0;
}

