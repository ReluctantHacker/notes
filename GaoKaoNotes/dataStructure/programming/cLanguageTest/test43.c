// this is a practice for creating a function that can find the square root of any given number by using binary search algorithm method
#include <stdio.h>
#include <stdlib.h>

float sqrt(float n) {
    float low = 0;
    float high = n;
    float mid;
    float tolerance = 0.000001;

    while (high-low > tolerance) {
        mid = (high+low) / 2;
        if (mid*mid > n) {
            high = mid;
        } else if (mid*mid < n) {
            low = mid;
        } else {
            return mid;
        }
    }
    return mid;
}

int main() {
    float test_value = 9;
    printf("sqrt(%f): %f\n", test_value, sqrt(test_value));
    return 0;
}
