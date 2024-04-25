#include <stdio.h>
#include <stdlib.h>

// iterative method
int fibonacci(int n) {
	int result_r = 1;
	int result_l = 0;
	for (int i=0; i<n; i++) {
		int temp = result_l;
		result_l = result_r;
		result_r = result_r + temp;
	}
	return result_l;
}

// recursive method
int r_fibonacci(int n) {
	if (n > 1) {
		return r_fibonacci(n-1) + r_fibonacci(n-2);
	} else if (n == 1) {
		return 1;
	} else if (n <= 0) {
		return 0;
	}
	
}

int main() {
	int n = 10;
	printf("fibonacci(%d): %d\n", n, fibonacci(n));
	printf("fibonacci(%d) recursively: %d\n", n, r_fibonacci(n));
}

