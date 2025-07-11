// this is a tset for trying to understand if the creation of some struct is NULL or not
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int valeu;
	struct node *left_child;
	struct node *right_child;
} node;

int main() {
	node *test_node = (node *)malloc(sizeof(node));
	if (test_node->left_child == NULL) {
		printf("yes\n");
	} else {
		printf("no\n");
	}
	return 0;
}	
