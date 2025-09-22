// k-permutation problem, P(n, k) with swap method
#include <stdio.h>
#include <stdlib.h>

#define arr_length 4

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void permute(int nums[arr_length], int start, int k) {
    if (start==k) {
        for (int i=0; i<k; i++) printf("%d->", nums[i]);
        printf("\n");
        return;
    }

    for (int i=start; i<arr_length; i++) {
        swap(&nums[start], &nums[i]);
        permute(nums, start+1, k);
        swap(&nums[start], &nums[i]);
    }
    return;
}

int main() {
    int nums[arr_length] = {1, 2, 3, 4};
    permute(nums, 0, 2);
    return 0;
}
