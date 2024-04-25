#include <stdio.h>
#include <stdlib.h>

// n means the n-th term
int fibonacci(int n) {
	if (n <= 2) {
		return 1;
	}
	return fibonacci(n-2) + fibonacci(n-1);


	/*
	if (n > 2) {
		return fibonacci(n-2) + fibonacci(n-1);
	}
	return 1;
	*/
}

int main() {
	// show the fibonnaci resultl
	int n = 8;
	printf("fibonnaci(%d): %d\n", n, fibonacci(n));
}	
