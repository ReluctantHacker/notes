// factorial iterative and recursive methods
#include <stdio.h>
#include <stdlib.h>

int factorialIter(int n) {
    int result = 1;
    for (int i=2; i<=n; i++) {
        result *= i;
    }
    return result;
}

int factorialRec(int n) {
    if (n==1 || n==0) return 1;
    return factorialRec(n-1)*n;
}

int main() {
    int testValue = 4;
    printf("%d\n", factorialIter(testValue));
    printf("%d\n", factorialRec(testValue));
    return 0;
}
