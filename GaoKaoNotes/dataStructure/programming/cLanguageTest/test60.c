// binomial-coefficient algorithm
#include <stdio.h>
#include <stdlib.h>

int bin_coef_rec(int n, int i) {
    if (i==0 || i==n) return 1;
    return bin_coef_rec(n-1, i-1) + bin_coef_rec(n-1, i);
}

/*
   C(5, 0) = 1 = 5!/(5!*0!);
   C(5, 1) = 5!/(4!*1!); = C(5, 0) * 5 / 1
   C(5, 2) = 5!/(3!*2!); = C(5, 1) * 4 / 2
   */ 
// this method is actually using the factorial idea
int bin_coef_iter(int n, int i) {
    if (i==0 || i==n) return 1;
    int result = 1;
    for (int k=1; k<=i; k++) {
        result *= (n - k + 1) / k;
    }
    return result;
}


int main() {
    printf("%d\n", bin_coef_rec(5, 3));
    printf("%d\n", bin_coef_iter(5, 3));
    return 0;
}
