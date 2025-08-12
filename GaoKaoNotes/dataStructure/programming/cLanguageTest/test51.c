// this is a linear search test for using sentinel
#include <stdio.h>
#include <stdlib.h>

#define arr_length 7

int linearSearch_m1(int *arr, int target) {
    int i = 0;
    int last = arr[arr_length-1];
    arr[arr_length-1] = target;
    while (arr[i]!=target) i++;
    arr[arr_length-1] = last; // you have to change the array back to the original because you don't want to actually change the array
    if (i!=(arr_length-1)) return i;
    if (last==target) return i;
    return -1; // not found
}


// this result of m1 and m2 should be exactly the same. those logic are trying to find the first met target number. the m2 is more beautiful and elegant without redundant branch
int linearSearch_m2(int *arr, int target) {
    int last = arr[arr_length-1];
    int i = 0;
    arr[arr_length-1] = target;
    while (arr[i]!=target) i++;
    arr[arr_length-1] = last; 
    if (i!=(arr_length-1) || last==target) return i;
    return -1;
}

int main() {
    int testArr[arr_length] = {7, 6, 5, 4, 3, 2, 1};
    printf("%d\n", linearSearch_m1(testArr, 8));
    printf("%d\n", linearSearch_m2(testArr, 8));
    return 0;
}

