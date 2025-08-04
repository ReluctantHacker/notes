// this is a practice for finding how many prime in a given range by using simplest method
#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    for (int i=2; i<=n/2; i++) {
        if (!(n%i)) return 0;
    }
    return 1;
}

int findPrimeNum(int range) {
    int primeNum = 0;
    for (int i=2; i<=range; i++) {
        primeNum += isPrime(i);
    }
    return primeNum;
} 

int main() {
    int testPrimeNum = findPrimeNum(250001);
    printf("%d\n", testPrimeNum);
    return 0;
}
