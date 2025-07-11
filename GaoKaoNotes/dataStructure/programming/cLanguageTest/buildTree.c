#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char node_value;
	struct node *left_child;
	struct node *right_child;
} node;


// 前序建樹法, 搭配前序空標記法使用
node *buildTree(char **str) {
	if (**str == '\0') return NULL;
	if (**str == '#') {
		(*str)++;
		return NULL;
	}
	node *new_node = (node *)malloc(sizeof(node));
	new_node->node_value = **str;
	(*str)++;
	new_node->left_child = buildTree(str);
	new_node->right_child = buildTree(str);
	return new_node;
}

void inorderTrace(node *n) {
	if (n == NULL) return;
	inorderTrace(n->left_child);
	printf("%c->", n->node_value);
	inorderTrace(n->right_child);
}

void preorderTrace(node *n) {
	if (n == NULL) return;
	printf("%c->", n->node_value);
	preorderTrace(n->left_child);
	preorderTrace(n->right_child);
}

void postorderTrace(node *n) {
	if (n == NULL) return;
	postorderTrace(n->left_child);
	postorderTrace(n->right_child);
	printf("%c->", n->node_value);
}

void main() {
	char *tree = "ABCD##E#F";
	node *root = buildTree(&tree);
	printf("\n ---inorder---\n");
	inorderTrace(root);
	printf("\n ---preorder---\n");
	preorderTrace(root);
	printf("\n ---postorder---\n");
	postorderTrace(root);
}
