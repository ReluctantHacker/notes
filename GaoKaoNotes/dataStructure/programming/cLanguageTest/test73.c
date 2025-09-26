// permutation with Steinhaus–Johnson–Trotter algorithm, or i call it "largest mobile swap method"
#include <stdio.h>
#include <stdlib.h>

#define arr_length 3

typedef struct element {
    int value;
    int direction;
} element;

void swap(element *a, element *b) {
    element temp = *a;
    *a = *b;
    *b = temp;
    return;
} 

void permute(element nums[arr_length]) {
    while (1) {
        int largest_mobile_index = -1;
        int x = 0;
        for (int i=0; i<arr_length; i++) {
            if (i+nums[i].direction>=0 && i+nums[i].direction<arr_length && nums[i].value>nums[i+nums[i].direction].value && (nums[i].value>nums[largest_mobile_index].value || largest_mobile_index==-1)) {
                largest_mobile_index = i;
                x = 1;
            }
        }
        if (!x) break; 
        int old_largest_mobile_value = nums[largest_mobile_index].value;
        swap(&nums[largest_mobile_index], &nums[largest_mobile_index+nums[largest_mobile_index].direction]);
        for (int i=0; i<arr_length; i++) {
            printf("%d->", nums[i].value);
            if (nums[i].value>old_largest_mobile_value) nums[i].direction*=-1;
        }
        printf("\n");
    }
    return;
}

int main() {
    int seq[arr_length] = {1, 2, 3};
    element nums[arr_length];
    for (int i=0; i<arr_length; i++) {
        nums[i].value = seq[i];
        nums[i].direction = -1;
    }
    permute(nums);
    return 0;
}
