// linear search algorithm with sentinel
#include <stdio.h>
#include <stdlib.h>

#define arr_length 7

int linearSearch(int *arr, int target) {
    int last = arr[arr_length-1];
    arr[arr_length-1] = target;

    int i = 0;
    while (arr[i] != target) i++;
     
    if (i!=arr_length-1) return i;
    if (target==last) return arr_length-1;
    return -1;
}

int main() {
    int testArr[arr_length] = {7, 6, 5, 4, 3, 2, 1};
    printf("%d\n", linearSearch(testArr, 3));
    return 0;
}
