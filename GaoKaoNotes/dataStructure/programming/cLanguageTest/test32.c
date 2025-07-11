// this is a test for bubble sort for an array
#include <stdio.h>
#include <stdlib.h>
#define array_length 10

void bubbleSort(int sorting_array[]) {
    for (int i = 0; i < array_length-1; i++) {
        for (int j = 0; j < array_length-1-i; j++) {
            if (sorting_array[j] > sorting_array[j+1]) {
                int temp = sorting_array[j];
                sorting_array[j] = sorting_array[j+1];
                sorting_array[j+1] = temp;
            }
        }
    }
    return;
}

void bubbleSort2(int *sorting_array) {
    for (int i = 0; i < array_length - 1; i++) {
        for (int j = 0; j < array_length -1 - i; j++) {
            if (sorting_array[j] > sorting_array[j+1]) {
                int temp = sorting_array[j];
                sorting_array[j] = sorting_array[j+1];
                sorting_array[j+1] = temp;
            }
        }
    }
    return;
}

void showArray(int array[]) {
    for (int i = 0; i < array_length; i++) {
        printf("%d->", array[i]);
    }
    printf("\n");
    return;
}

int main() {
    int testArray[array_length] = {4, 6, 2, 1, 7, 22, 1, 10, 7, 3};
    bubbleSort2(testArray);
    showArray(testArray);
}
