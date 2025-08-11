// this is a practice for postorder serialization to node structure tree
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char value;
    struct node *left_child;
    struct node *right_child;
} node;


// the postorder traversal result is that the "root" on the most right side. And the tree structure we are using is "node", which start from root. So have to use "reverse" traversal to rebuild the tree from serialization. 
// the posterorder is left->right->root
// the reverve of posterorder is root->right->left
node *postorderBuild(char **srlTree, char *start_p) {
    if (*srlTree == start_p) return NULL;
    if (**srlTree == '#') {
        (*srlTree)--;
        return NULL;
    }

    node *root = (node *)malloc(sizeof(node));
    root->value = **srlTree;
    (*srlTree)--;
    root->right_child = postorderBuild(srlTree, start_p);
    root->left_child = postorderBuild(srlTree, start_p);
    return root;
}

void postorderShow(node *root) {
    if (!root) return;
    postorderShow(root->left_child);
    postorderShow(root->right_child);
    printf("%c->", root->value);
    return;
}

void inorderShow(node *root) {
    if (!root) return;
    inorderShow(root->left_child);
    printf("%c->", root->value);
    inorderShow(root->right_child);
    return;
}

int main() {
    char *testTree = "##B##D##ECA"; // postordeer serialization
    int len = strlen(testTree);
    char *last = testTree+len-1;
    node *root = postorderBuild(&last, testTree); // works reversely compare to preorder building
    postorderShow(root);
    printf("\n-----------\n");
    inorderShow(root);
    return 0;
}
