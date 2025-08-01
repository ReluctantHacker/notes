// this is a practice for finding how many primes in an given range 
#include <stdio.h>
#include <stdlib.h>

float sqrt(float n) {
    float low = 0;
    float high = n;
    float mid;
    float tolerance = 0.000001;

    while (high - low > tolerance) {
        mid = (high + low) / 2;
        if (mid * mid > n) {
            high = mid;
        } else if (mid * mid < n) {
            low = mid;
        } else {
            return mid;
        }
    }
    return mid;
}

int isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (!(n%i)) return 0;
    }
    return 1;
}

int findPrimeNum(int range) {
    int primeNum = 0;
    for (int i = 2; i <= range; i++) {
        primeNum += isPrime(i);
    }
    return primeNum;
}

int main() {
    int test_range = 250001;
    printf("%d\n", findPrimeNum(test_range));
    return 0;
}

