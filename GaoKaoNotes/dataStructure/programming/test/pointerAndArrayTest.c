// array of pointer | pointer of array?

#include <stdio.h>
#include <stdlib.h>

int main() {
	// array of pointer
	int *arr[3];

	// pointer of array
	int (*arr)[3];

	// array of pointer with dynamic method
	int **arr = (int **) malloc(sizeof(int)*5);
}
