// this is another practice for level-order traversal, with iterative method
#include <stdio.h>
#include <stdlib.h>

#define queue_length 50

typedef struct node {
    char value;
    struct node *left_child;
    struct node *right_child;
} node;

typedef struct queue {
    int head;
    int rear;
    node *array[queue_length];
} queue;

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
    if (root==NULL) return;
    printf("%c->", root->value);
    preorderShow(root->left_child);
    preorderShow(root->right_child);
    return;
}

void inorderShow(node *root) {
    if (root==NULL) return;
    inorderShow(root->left_child);
    printf("%c->", root->value);
    inorderShow(root->right_child);
    return;
}

void enqueue(queue *que, node *n) {
    if (n==NULL) return;
    que->rear = (que->rear+1)%queue_length;
    if (que->rear==que->head) {
        printf("the queue is already full\n");
        que->rear = (que->rear-1+queue_length)%queue_length;
        return;
    }
    (que->array)[que->rear] = n;
    return;
}

void dequeue(queue *que) {
    if (que->head==que->rear) {
        printf("the queue is already empty\n");
        return;
    }
    que->head = (que->head+1)%queue_length;
    return;
}

void levelorderTraversal(queue *que) {
    while (que->head!=que->rear) {
        node *root = (que->array)[que->head+1];
        dequeue(que);
        printf("%c->", root->value);
        enqueue(que, root->left_child);
        enqueue(que, root->right_child);
    }
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
    // initialization, you can also move initialization inside levelorderTraversal function
    testTreeQueue->head = 0;
    testTreeQueue->rear = 0;
    for (int i=0; i<queue_length; i++) {
        (testTreeQueue->array)[i] = NULL;
    }
    enqueue(testTreeQueue, root);

    // levelorder implement
    levelorderTraversal(testTreeQueue);
	return 0;

}

