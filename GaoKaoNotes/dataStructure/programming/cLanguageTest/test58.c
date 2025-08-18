// fibonacci number
#include <stdio.h>
#include <stdlib.h>

// iterative version
int fibonacciIter(int n) {
    if (n<2) return n;
    int a = 0, b = 1;
    while (n-- > 1) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int fib_rec(int n) {
    if (n<2) return n;
    return fib_rec(n-1) + fib_rec(n-2);
}

int main() {
    int testVal = 4;
    printf("%d\n", fibonacciIter(testVal));
    printf("%d\n", fibonacciRec(testVal));
    return 0;
}
