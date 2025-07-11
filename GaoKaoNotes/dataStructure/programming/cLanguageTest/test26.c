// this is a test for finding the key same structure of for loop and while loop
#include <stdio.h>
#include <stdlib.h>

void for_loop(int end_iteration) {
	int i = 0;
	for(; i<end_iteration; ) {
		printf("%d->", i);
		i++;
	}
	printf("\n");
	return;
}

void while_loop(int end_iteration) {
	int i = 0;
	while(i<end_iteration) {
		printf("%d->", i);
		i++;
	}
	printf("\n");
	return;
}

int main() {
	int test_end_iteration = 10;
	for_loop(test_end_iteration);
	while_loop(test_end_iteration);
	return 0;
}
