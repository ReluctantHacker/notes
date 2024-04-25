#include <stdio.h>
#include <stdlib.h>

int hanoi(int n) { // total n disks
	if (n == 1) {
		return 1;
	} else {
		return hanoi(n-1) * 2 + 1;
	}
}	

int main() {
	int n = 10;
	printf("hanoi(%d): %d\n", n, hanoi(n));
}
