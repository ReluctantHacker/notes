// this is a practice for finding how many prime number in a given range. using the trial division
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float i_sqrt(float n) { // math.h already has sqrt()
    float high = n;
    float low = 0;
    float mid;
    float tolerance = 0.000001;

    while ((high-low) > tolerance) {
        mid = (high+low)/2;
        if (mid == high || mid == low) return mid;
        if (mid*mid > n) {
            high = mid;
        } else if (mid*mid < n) {
            low = mid;
        } else {
            return round(mid);
        }
    }
    return round(mid);
}

int isPrime(int n) {
    for (int i=2; i<=i_sqrt(n); i++) {
        if (!(n%i)) return 0;
    }
    return 1;
}

int findPrimeNum(int n) {
    int primeNum = 0;
    for (int i=2; i<=n; i++) {
        primeNum += isPrime(i);
    }
    return primeNum;
}

int main() {
    int testPrimeNum = findPrimeNum(250001);
    printf("%d\n", testPrimeNum);
    return 0;
}
