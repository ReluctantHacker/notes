#include <stdio.h>
#include <stdlib.h>
#define length 5

typedef struct node {
	int value;
	struct node *left_child;
	struct node *right_child;
} node;


void BSTBuild(node **root, int inserting_value) {
	if ((*root) == NULL) {
		(*root) = (node *)malloc(sizeof(node));
		(*root)->value = inserting_value;
		(*root)->left_child = NULL;
		(*root)->right_child = NULL;
		return;
	}
	if (inserting_value <= (*root)->value) {
		BSTBuild(&((*root)->left_child), inserting_value);
	} else {
		BSTBuild(&((*root)->right_child), inserting_value);
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

int main () {
		
	node *root = NULL;

	int treeValueArray[length] = {1, 2, 3, 4, 5};
		for (int i=0; i<length; i++) {
			BSTBuild(&root, treeValueArray[i]);
		}
		preorderTraversal(root);
		printf("\n------------\n");
		inorderTraversal(root);
	return 0;
}
