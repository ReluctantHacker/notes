// linear search algorithm without sentinel
#include <stdio.h>
#include <stdlib.h>

#define arr_length 7

int linearSearch(int *arr, int target) {
    for (int i=0; i<arr_length; i++) {
        if (arr[i] == target) return i;
    }
    return -1; // index can't be negative, so -1 here means not found
}

int main() {
    int testArr[arr_length] = {7, 6, 5, 4, 3, 2, 1};
    printf("%d\n", linearSearch(testArr, 4));
    return 0;
}
