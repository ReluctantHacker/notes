// this is the correct version of bubble sort with swap
#include <stdio.h>
#include <stdlib.h>

#define arr_length 7

void bubbleSort(int *arr) {
    for (int i=0; i<arr_length; i++) {
        int swap = 0;
        for (int j=0; j<arr_length-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if (swap == 0) return;
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
    int testArr[arr_length] = {11, 8, 7, 5, 3, 2, 1};
    bubbleSort(testArr);
    show(testArr);
    return 0;
}
