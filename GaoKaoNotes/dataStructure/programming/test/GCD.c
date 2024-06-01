#include <stdio.h>
#include <stdlib.h>

int GCD(int n, int m) {
	if (m % n != 0) {
		return GCD(m % n, n);
	}
	return n;

}

int main() {
	// show the result
	int n = 28;
	int m = 49;
	printf("GCD(%d, %d): %d\n", n, m, GCD(n, m));
}
