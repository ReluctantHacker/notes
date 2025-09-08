// preorderShow and inorderShow iterative methods
#include <stdio.h>
#include <stdlib.h>

#define arr_length 100

typedef struct node {
    char value;
    struct node *left_child;
    struct node *right_child;
} node;

// for levelorderShow()
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

    // queue initialization
    que->head = 0;
    que->rear = 0;
    for (int i=0; i<arr_length; i++) que->array[i] = 0;

    enqueue(que, root);
    while (que->head!=que->rear) {
        node *deNode = que->array[(que->head+1)%arr_length];
        printf("%c->", deNode->value);
        dequeue(que);
        enqueue(que, deNode->left_child);
        enqueue(que, deNode->right_child);
    }
    return;
}

void preorderShow_iter(node *root) {
    if (root==NULL) return;
    node *stk[100];
    int top = -1;
    stk[++top] = root;
    while (top>-1) {
        node *popNode = stk[top];
        printf("%c->", stk[top--]->value);
        if (popNode->right_child) stk[++top] = popNode->right_child;
        if (popNode->left_child) stk[++top] = popNode->left_child;
    }
    return;
}

// preorderShow use variable current method
void preorderShow_iter2(node *root) {
    if (root==NULL) return;
    node *stk[100];
    int top = -1;
    node *current = root;
    stk[++top] = current;
    current = current->left_child;
    while (top>-1) {
        if (current) {
            printf("%c->", current->value);
            stk[++top] = current;
            current = current->left_child;
        } else {
            current = stk[top--];
            current = current->right_child;
        }
    }
    return;
}

// preorderShow use variable current method, but this one is a little bit stupid because in while loop it has (current!=NULL) and inside the while loop it immediately has another (current!=NULL) arguments which is not very smart. Actually the while-loop only needs (current!=NULL) for first while-loop-cycle, you can bring the first cycle out like preorderShow_iter2 does which would save while-loop to calculuate (current!=NULL) everytime.
void preorderShow_iter3(node *root) {
    if (root==NULL) return;
    node *stk[100];
    int top = -1;
    node *current = root;
    while (current || top>-1) {
        if (current) {
            printf("%c->", current->value);
            stk[++top] = current;
            current = current->left_child;
        } else {
            current = stk[top--];
            current = current->right_child;
        }
    }
    return;
}

void preorderShow_iter4(node *root) {
    node *stk[100];
    int top = -1;
    node *current = root;

    while (1) {
        if (current) {
            printf("%c->", current->value);
            stk[++top] = current;
            current = current->left_child;
            continue;
        }
        if (top>-1) {
            current = stk[top--];
            current = current->right_child;
            // or you can directly doing this:
            // current = stk[top--]->right_child;
            continue;
        }
        break;
    }
    return;
}

// this inorderShow iterative doesn't work, it seems like it's hard to do it without current variable
void inorderShow_iter(node *root) {
    if (root==NULL) return;
    node *stk[100];
    int top = -1;

    stk[++top] = root;
    while (top>-1) {
        node *popNode = stk[top--];
        printf("%c->", popNode->value);
        if (popNode->right_child) stk[++top] = popNode->right_child;
        if (popNode->left_child) stk[++top] = popNode->left_child;
    }
    return;
}

// more intuitive way
void inorderShow_iter2(node* root) {
    node* stk[100];
    int top = -1;
    node* current = root;

    while (current != NULL || top >= 0) {
        if (current != NULL) {
            stk[++top] = current;
            current = current->left_child;
        } else {
            current = stk[top--];
            printf("%c->", current->value);
            current = current->right_child;
        }
    }
    return;
}

// a more clean way
void inorderShow_iter3(node *root) {
    if (root==NULL) return;
    node *stk[100];
    int top = -1;
    node *current = root;

    while (1) {
        if (current) {
            stk[++top] = current;
            current = current->left_child;
            continue;
        }
        if (top>-1) {
            current = stk[top--];
            printf("%c->", current->value);
            current = current->right_child;
            /* or you can directly write something like this:
               printf("%c->", stk[top]->value);
               current = stk[top--]->right_child;
            */
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


	printf("\n-------------\n");
	levelorderShow(root);

	printf("\n-------------\n");
	preorderShow_iter(root);

	printf("\n------preorderShow_iter2-------\n");
	preorderShow_iter2(root);

	printf("\n------preorderShow_iter3-------\n");
	preorderShow_iter3(root);

	printf("\n------inorderShow_iter1-------\n");
	inorderShow_iter(root);

	printf("\n------inorderShow_iter2-------\n");
	inorderShow_iter2(root);

	printf("\n------inorderShow_iter3-------\n");
	inorderShow_iter3(root);
	return 0;
}

