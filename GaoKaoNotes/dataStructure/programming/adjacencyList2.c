#include <stdio.h>
#include <stdlib.h>

// 定義節點結構
typedef struct node {
	int vertex;
	struct node *next;
} node;

// 定義圖結構
typedef struct graph {
	int vertex_num;

	/* 
	  宣告一個array of pointers, 
	  此array的元素位置代表了vertex的編號, 
	  而每個元素都存了一個adjacency list的header指標
	  (其實也就是Linked list, header代表了該linked list), 
	*/
	node **adjLists; 
} graph;

node *addNode(int vertex) {
	node *newNode = (node *)malloc(sizeof(node));
	newNode->vertex=vertex;
	newNode->next=NULL;
	return newNode;
}

// 初始化圖, 建完後只有verteces
int iniGraph(graph *g, int vertex_num) {
	g->vertex_num = vertex_num;
	g->adjLists = (node **)malloc(sizeof(node *)*vertex_num);
}

// 添加邊(vi, vj), 在這裡其實就是加node, 需要源vertex和目標vertex
int addEdge(graph *g, int src, int dest) {
	// 添加邊(源到目標)
	node *newNode = addNode(dest);
	newNode->next = (g->adjLists)[src];
	(g->adjLists[src]) = newNode;

	// 添加邊(目標到源), 無向圖才需要
	newNode = addNode(src);
	newNode->next = (g->adjLists)[dest];
	g->adjLists[dest] = newNode;
}

int printGraph(graph *g) {
	for (int i=0; i<(g->vertex_num); i++) {
		node *cur_adjList = (node *)malloc(sizeof(node));
		cur_adjList = (g->adjLists)[i];
		printf("|%d|: ", i);
		while (cur_adjList != NULL) {
			printf("%d", cur_adjList->vertex);
			cur_adjList = (cur_adjList->next);
			if (cur_adjList != NULL) {
				printf("->");
			}
		}
		printf("\n");
	}
}

int DFS(graph *g, int *visited, int i) {
	visited[i] = 1;
	printf("has been visited: %d\n", i);
	node *cur_node = (node *)malloc(sizeof(node));
	cur_node = (g->adjLists)[i];
	while (cur_node != NULL) {
		if (visited[cur_node->vertex] == 0) {
			DFS(g, visited, (cur_node->vertex));
		}
		cur_node = cur_node->next;
	}
}

int main() {
	int total_node_num = 5;
	graph *g = (graph *)malloc(sizeof(graph));
	iniGraph(g, total_node_num);
	addEdge(g, 1, 2);
	addEdge(g, 3, 1);
	addEdge(g, 4, 3);
	printGraph(g);

	int visited[total_node_num];
	for (int i=0; i<total_node_num; i++) visited[i] = 0;
	DFS(g, visited, 1);
}
