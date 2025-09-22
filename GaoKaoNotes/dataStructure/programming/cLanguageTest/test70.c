// k-permutation problem, permute all the possible permutation of P(n, k)
// used[] method
#include <stdio.h>
#include <stdlib.h>

#define arr_length 4 

void backtrack(int path[arr_length], int path_depth, int nums[arr_length], int used[arr_length], int k) {
    if (path_depth==k) {
        for (int i=0; i<k; i++) printf("%d->", path[i]);
        printf("\n");
        return;
    }

    for (int i=0; i<arr_length; i++) {
        if (!used[i]) {
            path[path_depth] = nums[i];
            used[i] = 1;
            backtrack(path, path_depth+1, nums, used, k);
            used[i] = 0;
        }
    }
    return;
}

void permute(int nums[arr_length], int k) {
    int path[arr_length];
    int path_depth = 0;
    int used[arr_length];
    for (int i=0; i<arr_length; i++) used[i] = 0;
    backtrack(path, path_depth, nums, used, k);
    return;
}

int main() {
    int nums[arr_length] = {1, 2, 3, 4};
    permute(nums, 3);
    return 0;
}
