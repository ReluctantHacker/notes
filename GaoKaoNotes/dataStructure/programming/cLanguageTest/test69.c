// c language insertion permutation provided by copilot

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 3
#define MAX_PERMS 100

void print_permutation(int *perm, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", perm[i]);
    }
    printf("\n");
}

void insertion_permutations(int *arr, int n) {
    int perms[MAX_PERMS][MAX_N];  // buffer to hold permutations
    int count = 1;                // number of permutations
    perms[0][0] = arr[0];         // start with first element

    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int new_count = 0;
        int temp[MAX_PERMS][MAX_N];

        for (int p = 0; p < count; p++) {
            for (int pos = 0; pos <= i; pos++) {
                // Insert current element at position 'pos'
                for (int k = 0; k < pos; k++) {
                    temp[new_count][k] = perms[p][k];
                }
                temp[new_count][pos] = current;
                for (int k = pos; k < i; k++) {
                    temp[new_count][k + 1] = perms[p][k];
                }
                new_count++;
            }
        }

        // Copy temp back to perms
        for (int p = 0; p < new_count; p++) {
            memcpy(perms[p], temp[p], sizeof(int) * (i + 1));
        }
        count = new_count;
    }

    // Print all permutations
    for (int i = 0; i < count; i++) {
        print_permutation(perms[i], n);
    }
}

int main() {
    int arr[MAX_N] = {1, 2, 3};
    insertion_permutations(arr, MAX_N);
    return 0;
}
