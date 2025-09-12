#include <stdio.h>

// Swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Recursive function to generate permutations
void permute(int *arr, int start, int end) {
    if (start == end) {
        // Print the current permutation
        for (int i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(&arr[start], &arr[i]);         // Choose
        permute(arr, start + 1, end);       // Explore
        swap(&arr[start], &arr[i]);         // Unchoose (backtrack)
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    permute(arr, 0, n - 1);
    return 0;
}
