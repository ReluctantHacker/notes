// postorder traversal iterative methods (it's more tricky compared to preorder and inorder)
#include <stdio.h>
#include <stdlib.h>

#define arr_length 100

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

void enqueue(queue *que, node *nodeP) {
    if (nodeP==NULL) return;
    que->rear = (que->rear+1)%arr_length;
    if (que->rear==que->head) {
        que->rear = (que->rear-1+arr_length)%arr_length;
        return;
    }
    que->array[que->rear] = nodeP;
    return;
}

void dequeue(queue *que) {
    if (que->head==que->rear) return;
    que->head = (que->head+1)%arr_length;
    return; 
}

void levelorderShow(node *root) {
    if (root==NULL) return;
    queue *que = (queue *)malloc(sizeof(queue));
    que->head = 0;
    que->rear = 0;
    enqueue(que, root);

    while (que->head!=que->rear) {
        node *deNode = que->array[(que->head+1)%arr_length];
        printf("%c->", deNode->value);
        enqueue(que, deNode->left_child);
        enqueue(que, deNode->right_child);
        dequeue(que);
    }
    return;
}

void postorderShow_rec(node *root) {
    if (root==NULL) return;
    postorderShow_rec(root->left_child);
    postorderShow_rec(root->right_child);
    printf("%c->", root->value);
    return;
}

// it's more easy to use two stacks, but this idea is still very tricky, the left_child is put to stack_1 before right_child. however, in the stack_2, the situation is different, the root put in first and then right and then left. so if we reverse track the stack_2, the traversal order would be left->right->root, which is exactly what we want.
void postorderShow_iter(node *root) {
    node *stk1[100];
    node *stk2[100];
    int top1 = -1;
    int top2 = -1;
    node *current = stk1[++top1] = root;

    while (top1>-1) {
        current = stk2[++top2] = stk1[top1--];
        if (current->left_child) stk1[++top1] = current->left_child;
        if (current->right_child) stk1[++top1] = current->right_child;
    }

    while (top2>-1) {
        printf("%c->", stk2[top2--]->value);
    }
    return;
}

// in any recursive function, there's only 1 stack is being used. In this method, it's not obvious how the logic of the code works. 
// But the logic is actually very simple, it memorizes the the root and then check if root->right_child has been visited or not, if root->right_child has been visited then it means root->left_child must already been visited. which means root itself can be print(or pop) out now
// it doesn't matter about if current is root->left_child or root->right_child, it only cares about root->right_child is existed and visited or not, that's the key point. And if root->right_child has already visited or it doesnt' existed, it means it can already print out root (because if root->left_child is done and also root->right_child is done then it's turn of root itself)
void postorderShow_iter2(node *root) {
    node *stk[100];
    int top = -1;
    node *lastVisited = NULL;

    node *current = root;
    while (1) {
        if (current) {
            stk[++top] = current;
            current = current->left_child;
            continue;
        }
        if (top>-1) {
            node *peekNode = stk[top];
            if (peekNode->right_child && lastVisited!=peekNode->right_child) {
                current = peekNode->right_child;
            } else {
                printf("%c->", peekNode->value);
                lastVisited = stk[top--];
            }
            continue;
        }
        break;
    }
    return;
}


int main() {
    char *testTree = "ABD##E##CF##G##"; // this example is a full tree
	node *root = preorderBuild(&testTree);
	preorderShow(root);
	printf("\n-------------\n");
	inorderShow(root);


	printf("\n------levelorderShow_iter-------\n");
	levelorderShow(root);

	printf("\n-------postorderShow_rec------\n");
	postorderShow_rec(root);

	printf("\n-------postorderShow_iter------\n");
	postorderShow_iter(root);

	printf("\n-------postorderShow_iter2------\n");
	postorderShow_iter2(root);
    return 0;
}
