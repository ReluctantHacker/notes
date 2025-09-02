// ackermann function test
#include <stdio.h>
#include <stdlib.h>

int Ackermann(int m, int n) {
    if (m==0) return n+1;
    if (n==0) return Ackermann(m-1, 1);
    return Ackermann(m-1, Ackermann(m, n-1));
}

int main() {
    for (int i=0; i<15; i++) {
        printf("Show ackermann result(m=1): %d\n", Ackermann(1, i));
    }
    printf("-------------------------------\n");
    for (int i=0; i<15; i++) {
        printf("Show ackermann result(m=2): %d\n", Ackermann(2, i));
    }
    printf("-------------------------------\n");
    for (int i=0; i<15; i++) {
        printf("Show ackermann result(m=3): %d\n", Ackermann(3, i));
    }
    return 0;
}



