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


// this iterative method below is using pascal's recursive idea, you have to at least, remember the previous level's element value to make this method works. It only use one array because deeper level always are constructed by previous level
int bin_coef_iter_2(int n, int k) {
    int *arr = (int *)malloc(sizeof(int)*n);
    // initialization of arr
    for (int i=0; i<n; i++) arr[i] = 0;

    arr[0] = 1;
    for (int i=1; i<=n; i++) {
        // update from right to left to avoid over writing needed values
        for (int j=i; j>0; j--) {
            arr[j] = arr[j-1] + arr[j];
        }
    }
    return arr[k];
}

int bin_coef_iter_2_improved(int n, int k) {
    int *arr = (int *)malloc(sizeof(int)*(n+1));
    // initialization of *arr
    for (int i=0; i<=n; i++) arr[i] = 1;
    for (int i=1; i<=n; i++) {
        for (int j=i-1; j>0; j--) {
            arr[j] = arr[j-1] + arr[j];
        }
    }
    return arr[k];
}

int main() {
    printf("%d\n", bin_coef_rec(5, 3));
    printf("%d\n", bin_coef_iter(5, 3));
    printf("%d\n", bin_coef_iter_2(5, 3));
    return 0;
}
