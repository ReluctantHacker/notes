// this is a test for for loop and while loop
#include <stdio.h>
#include <stdlib.h>

void for_test(int end_i) {
	for (int i=0; ; i++) {
		printf("%d->", i);
		if (i == end_i) break;
	}
	printf("\n");
	return;
}

void while_test(int end_i) {
	int i = 0;
	while (i != end_i) {
		printf("%d->", i);
		i++;
	}
	printf("\n");
	return;
}

int main() {
	int test_end_i = 10;
	for_test(test_end_i);
	while_test(test_end_i);
	return 0;
}
