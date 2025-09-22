// k-permutation problem with heap's algorithm method
#include <stdio.h>
#include <stdlib.h>

#define arr_length 4

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void permute(int nums[arr_length], int n, int k) {
    if (n==arr_length-k) {
        for (int i=0; i<k; i++) printf("%d->", nums[i]);
        printf("\n");
        return;
    }

    for (int i=0; i<n; i++) {
        permute(nums, n-1, k);
        if (n%2) swap(&nums[0], &nums[n-1]);
        else swap(&nums[i], &nums[n-1]);
    }
    return;
}

int main() {
    int nums[arr_length] = {1, 2, 3, 4};
    permute(nums, arr_length, 2);
    return 0;
}
