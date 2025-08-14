// this is a test for recusive function example of how to get if recursive function is ended or not
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char value;
    struct node *left_child;
    struct node *right_child;
} node;

node *preorderBuild(char **srlTree) {
    if (**srlTree=='\0') return NULL;
    if (**srlTree=='#') {
        (*srlTree)++;
        return NULL;
    }
    node *root = (node *)malloc(sizeof(node));
    root->value = **srlTree;
    (*srlTree)++;
    root->left_child = preorderBuild(srlTree);
    root->right_child = preorderBuild(srlTree);
    return root;
}

void preorderShow(node *root) {
    static node *origin = NULL; // initialization of static variable
    if (root==NULL) return;
    if (origin==NULL) origin = root; // only mark the first call

    printf("%c->", root->value);
    preorderShow(root->left_child);
    preorderShow(root->right_child);
    if (root==origin) {
        printf("\nthe show function is ended\n");
        origin = NULL; // reset for the future calls
    }
    return;
}

void inorderShow(node *root) {
    static node *origin = NULL; // initialization of static variable
    if (root==NULL) return;
    if (origin==NULL) origin = root; // only mark the first call

    inorderShow(root->left_child);
    printf("%c->", root->value);
    inorderShow(root->right_child);

    if (root==origin) {
        printf("\nthe show function is ended\n");
        origin = NULL; // reset for future call
    }
    return;
}


int main() {
    char *testTree = "AB#CD#EF##";
	node *root = preorderBuild(&testTree);
	preorderShow(root);
	inorderShow(root);
	return 0;
}
