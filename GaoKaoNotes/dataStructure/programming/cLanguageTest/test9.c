// this is a test for linked list practice
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char value;
	struct node *next;
} node;


// build from array
node *linkedListBuild(node *ll, char **input_array) {
	node *head = (node *)malloc(sizeof(node));
	head->value = **input_array;
	(*input_array)++;
	head->next = linkedListBuild(input_array);
	return head;
}

void insert


