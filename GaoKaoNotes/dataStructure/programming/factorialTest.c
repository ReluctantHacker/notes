// This is a test for recursive and interative method of factorial
#include <stdio.h>
#include <stdlib.h>

// iterative method
int factorial(int n) {
	int result = 1;
	for (int i=1; i<=n; i++) {
		result = result * i;
	}
	return result;
}

// recursive method
int r_factorial(int n) {
	if (n > 0) {
		return r_factorial(n-1) * n;
	} else {
		return 1;
	}
}

int main() {
	int n = 3;
	int n2 = 3;
	printf("%d!=%d\n", n, factorial(n));
	printf("%d!(recursive)=%d\n", n2, factorial(n2));
}
