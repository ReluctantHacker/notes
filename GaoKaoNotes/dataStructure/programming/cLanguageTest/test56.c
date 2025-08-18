// this is a level order tree traversal test by using preorder serialization to build a tree with recursive ends function
#include <stdio.h>
#include <stdlib.h>

#define queue_length 7

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
    static node *origin = NULL; // static variable initialization
    if (root==NULL) return;
    if (origin==NULL) origin = root; // only mark first call

    printf("%c->", root->value);
    preorderShow(root->left_child);
    preorderShow(root->right_child);

    if (root==origin) {
        printf("\nthe show is ended\n");
        origin = NULL; // reset for future call
    }
    return;
}

void inorderShow(node *root) {
    static node *origin = NULL; // initialization for static variable
    if (root==NULL) return;
    if (origin==NULL) origin = root; // 

    inorderShow(root->left_child);
    printf("%c->", root->value);
    inorderShow(root->right_child);

    if (origin==root) {
        printf("\nthe show is ended\n");
        origin = NULL; // reset to future call
    }
    return;
}

void enqueue(queue *que, node *nodeP) {
    if (nodeP==NULL) return;
    que->rear = (que->rear + 1) % queue_length;
    if (que->rear==que->head) {
        printf("the queue is already full\n");
        que->rear = (que->rear - 1 + queue_length) % queue_length;
        return;
    }
    (que->array)[que->rear] = nodeP;
    return;
}

void dequeue(queue *que) {
    if (que->head==que->rear) {
        printf("the queue is already empty\n");
        return;
    }
    que->head = (que->head + 1) % queue_length;
    return;
}

void levelorderShow(node *root) {
    if (root==NULL) return;

    // queue initialization
    queue *que = (queue *)malloc(sizeof(queue));
    que->head = 0;
    que->rear = 0;
    for (int i=0; i<queue_length; i++) {
        que->array[i] = NULL;
    }
    enqueue(que, root);

    // level order implement
    while (que->head!=que->rear) { // the queue is not empty
        node *dequeueNode = (que->array)[(que->head+1)%queue_length];
        dequeue(que);
        enqueue(que, dequeueNode->left_child);
        enqueue(que, dequeueNode->right_child);
        printf("%c->", dequeueNode->value);
    } 
    return;
}

int main() {
    char *testTree = "AB#CD#EF##";
    node *root = preorderBuild(&testTree);
    preorderShow(root);
    inorderShow(root);

    // level-order traversal
    levelorderShow(root);
    return 0;
}
