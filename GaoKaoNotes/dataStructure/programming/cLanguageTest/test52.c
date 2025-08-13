// this is a practice for breadth-first traveral of a given tree by using queue(explicitly). This is my first try of levelorder traversal, and i use recursion here(recursion can always be transform into iterative version but sometimes it's not very explicitly), 
// recursion implitly means stack, but in this case it's used as "loop" not for stack's purpose
#include <stdio.h>
#include <stdlib.h>

// i need to build a tree first, i build the tree by using preorder serialization

#define arr_length 50

typedef struct node {
    char value;
    struct node *left_child;
    struct node *right_child;
} node;

typedef struct queue {
    int head;
    int rear;
    node *array[arr_length];
} queue;

void enqueue(queue *que, node *nodeP) {
    if (nodeP==NULL) return;
    que->rear = (que->rear+1)%arr_length;
    if (que->rear==que->head) {
        printf("the queue is already full, enqueue failed\n");
        que->rear = (que->rear-1+arr_length)%arr_length;
        return;
    }
    (que->array)[que->rear] = nodeP;
    return;
}

void dequeue(queue *que) {
    if (que->head==que->rear) {
        printf("the queue is already empty, dequeue failed\n");
        return;
    }
    que->head = (que->head+1)%arr_length;
    return;
}

node *preorderBuild(char **srlTree) {
    if (**srlTree == '\0') return NULL;
    if (**srlTree == '#') {
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
    if (root==NULL) return;
    printf("%c->", root->value);
    preorderShow(root->left_child);
    preorderShow(root->right_child);
    return;
} 

void inorderShow(node *root) {
    if (root == NULL) return;
    inorderShow(root->left_child);
    printf("%c->", root->value);
    inorderShow(root->right_child);
    return;
}

void levelorderTraversal(queue *que) {
    node *root = (que->array)[((que->head)+1)%arr_length];
    if (root==NULL) return; // this is actually not possible to happen because if it happens, then (que->head==que->rear) also happens. so this line is redundant
    if (que->head==que->rear) return;
    printf("%c->", root->value);
    enqueue(que, root->left_child);
    enqueue(que, root->right_child);
    dequeue(que);
    levelorderTraversal(que);
    return;
}

int main() {
    char *testTree = "AB#CD#EF##";
	node *root = preorderBuild(&testTree);
	preorderShow(root);
	printf("\n-------------\n");
	inorderShow(root);

    // level-order traversal practice 
    printf("\n");
    queue *testTreeQueue = (queue *)malloc(sizeof(queue));
    // initialization
    testTreeQueue->head = 0;
    testTreeQueue->rear = 0;
    for (int i=0; i<arr_length; i++) {
        (testTreeQueue->array)[i] = NULL;
    }
    enqueue(testTreeQueue, root);

    // levelorder implement
    levelorderTraversal(testTreeQueue);
	return 0;
}
