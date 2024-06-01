#include <stdio.h>
#include <stdlib.h>

void swapTree(node *tree) {
	if ((tree->left) == NULL && (tree->left)==NULL) return 0;
	swapTree(tree->left);
	swapTree(tree->right);

	node *temp = (node *)malloc(sizeof(node));
	temp = tree->left;
	tree->left = tree->right;
	tree->right=temp;
}
