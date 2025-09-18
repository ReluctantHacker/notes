// permutation c language version
// In this example, i didn't use storage to store the result of every possible path. However, you should definitely implement how to store every paths result because it's highly possible that the result would be used in future
#include <stdio.h>
#include <stdlib.h>

#define arr_length 3

void backtrack(int path[arr_length], int path_depth, int nums[arr_length], int used[arr_length]) {
    if (path_depth==arr_length) {
        for (int i=0; i<arr_length; i++) printf("%d->", path[i]);
        printf("\n");
        return;
    }

    for (int i=0; i<arr_length; i++) {
        if (!used[i]) {
            path[path_depth] = nums[i];
            used[i] = 1;
            backtrack(path, path_depth+1, nums, used);
            used[i] = 0;
        }
    }
    return;
}

void permute(int nums[arr_length]) {
    int path[arr_length];
    int path_depth = 0;
    int used[arr_length];
    for (int i=0; i<arr_length; i++) used[i] = 0;
    backtrack(path, path_depth, nums, used);
    return;
}

int main() {
    int nums[arr_length] = {1, 2, 3};
    permute(nums);
    return 0;
}
