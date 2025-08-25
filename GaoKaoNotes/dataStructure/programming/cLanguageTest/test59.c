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

    while (a%b) {
        int temp = a;
        a = b;
        b = temp%b;
    }
    return b;
}

int GCD_rec_improved(int a, int b) {
    // the swap code is redundant because GCD would automatically do that, if a%b when b>a, b would automatically be new a and old a itself is the remainder when a = a+b*0, so a%b = a when b>a
    if (a%b) return GCD_rec_improved(b, a%b); // this line calculate a%b twice which is waste
    return b;
}

int GCD_iter_improved(int a, int b) {
    while (a%b) {
        int temp = a%b; // again this line calculate a%b twice which is waste
        a = b;
        b = temp;
    }
    return b;
}

int GCD_rec_ultimate(int a, int b) {
    return b?GCD_rec_ultimate(b, a%b):a; // prevent calculate a%b twice, this is because b is the result of a%b, so it should work
}

int GCD_iter_ultimate(int a, int b) {
    while (b) { // prevent calculate a%b twice
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main() {
    int testVal1 = 21;
    int testVal2 = 6;

    printf("%d\n", GCD_rec(testVal1, testVal2));
    printf("%d\n", GCD_iter(testVal1, testVal2));
    return 0;
}

