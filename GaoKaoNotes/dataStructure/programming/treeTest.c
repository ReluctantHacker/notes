// tree test for linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char data;
	struct node *lchild;
	struct node *rchild;
} node;

node *createNode(char data) {
	node *n = (node *)malloc(sizeof(node));
	n->data = data;
	n->lchild = NULL;
	n->rchild = NULL;
	return n;
}

int preOrderTraversal(node *root) {
	if (root != NULL) {
		printf("%c\n", root->data);	
		preOrderTraversal(root->lchild); // go left child first;
		preOrderTraversal(root->rchild);
	}
}

int inOrderTraversal(node *root) {
	if (root != NULL) {
		inOrderTraversal(root->lchild);
		printf("%c\n", root->data);
		inOrderTraversal(root->rchild);
	}
}

int postOrderTraversal(node *root) {
	if (root != NULL) {
		postOrderTraversal(root->lchild);
		postOrderTraversal(root->rchild);
		printf("%c\n", root->data);
	}
}

int count(node *root) {
	if (root != NULL) {
		int lcount = count(root->lchild);
		int rcount = count(root->rchild);
		return lcount+rcount+1;
	}
	return 0;
}

int height(node *root) {
	if (root != NULL) {
		int lheight = height(root->lchild);
		int rheight = height(root->rchild);
		return (lheight>rheight?lheight:rheight)+1;
	}
	return 0;
}

int main() {
	/* This is a test binary tree below. */
	/* tree diagram below:
	 
		       A
		      / \
		     B   E
		    / \   \
		   C   D   F

	*/
	node *root = (node *)malloc(sizeof(node));
	root->data = 'A';
	root->lchild = createNode('B');
	node *B_node = root->lchild;

	B_node->lchild = createNode('C');
	node *C_node = B_node->lchild;
	B_node->rchild = createNode('D');
	node *D_node = B_node->rchild;

	root->rchild = createNode('E');
	node *E_node = root->rchild;

	E_node->rchild = createNode('F');
	node *F_node = E_node->rchild;
	/* This is a test binary tree above. */


	// show the traversal in different order	
	printf("preOrder: \n");
	preOrderTraversal(root);
	printf("--------------------\n");
	printf("inOrder: \n");
	inOrderTraversal(root);
	printf("--------------------\n");
	printf("postOrder: \n");
	postOrderTraversal(root);


	// show the number of nodes in the tree
	printf("--------------------\n");
	int node_num = count(root);
	printf("node_num:\n%d\n", node_num);

	// show the height of the tree
	printf("--------------------\n");
	int tree_height = height(root);
	printf("tree height:\n%d\n", tree_height);
}
