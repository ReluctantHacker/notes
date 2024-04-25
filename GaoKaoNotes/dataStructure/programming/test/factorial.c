#include <stdio.h>
#include <stdlib.h>

/* 減少if判斷次數, 比較好的寫法*/
int factorial(int n) {
	if (n<=0) {
		return 1;
	}
	return factorial(n-1)*n;



/*
/* if判斷次數較多, 比較差的寫法*/
	if (n>0) {
		return factorial(n-1)*n;
	}
	return 1;
*/
}

int main() {
	// show factorial result
	int n = 3;
	printf("factorial(%d): %d\n", n, factorial(n));
}
