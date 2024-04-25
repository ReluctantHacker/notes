#include <stdio.h>
#include <stdlib.h>

int binomialCoeff(int n, int k) {
	if (k==0 || k==n) {
		return 1;
	}
		return binomialCoeff(n-1, k) + binomialCoeff(n-1, k-1);
}

int main() {
	int n = 4;
	int m = 3;
	printf("binomialCoeff(%d, %d): %d\n", n, m, binomialCoeff(n, m));
}
