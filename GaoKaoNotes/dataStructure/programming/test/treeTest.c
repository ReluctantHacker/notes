#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *lchild;
	struct node *rchild;
} node;

int preorderTrav(node *root) {
	if (root == NULL) return 0;
	printf("%d, ", root->data);
	preorderTrav(root->lchild);
	preorderTrav(root->rchild);
}

int height(node *root) {
	if (root == NULL) return 0;
	int left_height = height(root->lchild);
	int right_height = height(root->rchild);
	return (left_height>right_height?left_height:right_height)+1;
}

int main() {
	// intialized B.T
	node *root = (node *)malloc(sizeof(node));
	root->lchild = 1;
}
