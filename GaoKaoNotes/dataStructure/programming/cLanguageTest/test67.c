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
        /*
           🔁 Why Two Swaps?
Yes, the second swap undoes the first. But the deeper reason is this:
Backtracking needs to explore all possibilities without permanently altering the state.

In this case, the state is the nums array. When you swap elements to generate a new permutation, you’re modifying that array. But once you’ve explored that path, you need to restore the array to its previous state so you can try other paths.

🧠 Think of It Like a Decision Tree
Let’s say your array is {1, 2, 3} and you're at start = 0. You want to try placing each of the three numbers at position 0:
- Swap nums[0] with nums[0] → {1, 2, 3}
- Recurse with start = 1
- After recursion, swap back → {1, 2, 3}
- Swap nums[0] with nums[1] → {2, 1, 3}
- Recurse with start = 1
- After recursion, swap back → {1, 2, 3}
- Swap nums[0] with nums[2] → {3, 2, 1}
- Recurse with start = 1
- After recursion, swap back → {1, 2, 3}
Without the second swap, the array would stay modified, and you'd be building permutations on top of a corrupted base, leading to wrong results.

🧩 Analogy: Trying on Clothes
Imagine you're trying on outfits:
- You put on a shirt (swap).
- You try different pants with it (recursive calls).
- Then you take off the shirt (swap back) to try a different one.
You wouldn’t keep layering clothes without removing the previous one, right? That’s what the second swap does—it cleans up so the next choice starts fresh.

✅ Summary
- The first swap chooses an element to fix at the current position.
- The recursive call explores permutations with that choice.
- The second swap restores the array so the next iteration can try a different element.
It’s like saying: “Let’s try this… okay, now undo that and try something else.”
If you want, I can walk you through a full trace of one permutation path step-by-step. It's pretty satisfying once you see it unfold.
*/
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    permute(arr, 0, n - 1);
    return 0;
}
