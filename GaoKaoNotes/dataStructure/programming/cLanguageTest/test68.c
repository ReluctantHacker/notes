// heap's algorithm, c language version
#include <stdio.h>
#include <stdlib.h>

#define arr_length 4

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void permute(int nums[arr_length], int n) {
    if (n==1) {
        for (int i=0; i<arr_length; i++) printf("%d->", nums[i]);
        printf("\n");
        return;
    }
       
    for (int i=0; i<n; i++) {
        permute(nums, n-1);
        // the 2 rules below doesn't matter if n is odd or even unless it would switch when n changes
        if (n%2) swap(&nums[0], &nums[n-1]);
        else swap(&nums[0], &nums[n-1]);
    }
    return;
}

int main() {
    int nums[arr_length] = {1, 2, 3, 4};
    permute(nums, arr_length);
    return 0;
}
