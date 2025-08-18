// greatest common divisor including iterative method and recursive method
#include <stdio.h>
#include <stdlib.h>

int GCD_rec(int a, int b) {
    // swap if b>a
    if (b>a) {
        int temp = b;
        b = a;
        a = temp;
    }

    // real GCD_rec implement
    if (a%b==0) return b;
    return GCD_rec(b, a%b);
} 

int GCD_iter(int a, int b) {
    // swap if b>a
    if (b>a) {
        int temp = b;
        b = a;
        a = temp;
    }

    while ((a%b)!=0) {
        int temp = a;
        a = b;
        b = temp%b;
    }
    return b;
}

int main() {
    int testVal1 = 21;
    int testVal2 = 6;

    printf("%d\n", GCD_rec(testVal1, testVal2));
    printf("%d\n", GCD_iter(testVal1, testVal2));
    return 0;
}

