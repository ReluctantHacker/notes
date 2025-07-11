// tree building empty preorder symbol method
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char value;
	struct node *left_child;
	struct node *right_child;
} node;

node *treeBuild(char **preTree) {
	if (**preTree == '\0') return NULL;
	if (**preTree == '#') {
		(*preTree)++;
		return NULL;
	}
	node *root = (node *)malloc(sizeof(node));
	root->value = **preTree;
	(*preTree)++;
	root->left_child = treeBuild(preTree);
	root->right_child = treeBuild(preTree);
	return root;
}

void preorderShow(node *root) {
	if (root == NULL) return;
	printf("%c", root->value);
	preorderShow(root->left_child);
	preorderShow(root->right_child);
	return;
}

void inorderShow(node *root) {
	if (root == NULL) return;
	inorderShow(root->left_child);
	printf("%c", root->value);
	inorderShow(root->right_child);
	return;
}

int main() {
	char *testPreTree = "AB#CD#EF##";
	node *root = treeBuild(&testPreTree);
	preorderShow(root);
	printf("\n");
	inorderShow(root);
	return 0;
}
