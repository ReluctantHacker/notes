#include <stdio.h>
#include <stdlib.h>
#define length 5

typedef struct node {
	int value;
	struct node *left_child;
	struct node *right_child;
} node;

void BSTBuild(node **root, int insert_value) {
	if ((*root) == NULL) {
		(*root) = (node *)malloc(sizeof(node));
		(*root)->value = insert_value;
		(*root)->left_child = NULL;
		(*root)->right_child = NULL;
	}

	if (insert_value <= (*root)->value) {
		BSTBuild((&(*root)->left_child), insert_value);
	} else {
		BSTBuild((&(*root)->right_child), insert_value);
	}
}

void preorderTraversal(node *root) {
	if (root == NULL) return;
	printf("%d->", root->value);
	preorderTraversal(root->left_child);
	preorderTraversal(root->right_child);
}

void inorderTraversal(node *root) {
	if (root == NULL) return;
	inorderTraversal(root->left_child);
	printf("%d->", root->value);
	inorderTraversal(root->right_child);
}

int main() {
	int testArray[length] = {1, 2, 3, 4, 5};
	node *root = NULL;
	for (int i=0; i<length; i++) {
		BSTBuild(&root, testArray[i]);
	}
	preorderTraversal(root);
	inorderTraversal(root);
}
