#include <stdio.h>
#include <stdlib.h>
#define VERTEX_NUM 6
#define EDGE_NUM 7


int iniGraph(int (*graph)[VERTEX_NUM][VERTEX_NUM], int (*edge)[EDGE_NUM][2]){
	// set every element to 0
	for (int i=0; i<VERTEX_NUM; i++) {
		for (int j=0; j<VERTEX_NUM; j++) {
			(*graph)[i][j] = 0;
		}
	}

	// add edges in graph
	for (int i=0; i<EDGE_NUM; i++) {
		(*graph)[(*edge)[i][0]-1][(*edge)[i][1]-1] = 1;

		// if it's undirected graph, you need this
		(*graph)[(*edge)[i][1]-1][(*edge)[i][0]-1] = 1;
	}
	return 1;
}

int printGraph(int (*graph)[VERTEX_NUM][VERTEX_NUM]) {
	printf("[");
	for (int i=0; i<VERTEX_NUM; i++) {
		printf("[");
		for (int j=0; j<VERTEX_NUM; j++) {
			printf("%d, ", (*graph)[i][j]);
		}
		printf("]\n");
	}
	printf("]");
}

int DFS(int (*graph)[VERTEX_NUM][VERTEX_NUM], int i, int (*visited)[VERTEX_NUM]) {
	(*visited)[i] = 1; // remember the verteces which has already been visited
	printf("%d has been visited.\n", i);

	for (int j=0; j<VERTEX_NUM; j++) {
		if ((*graph)[i][j] = 1) {
			if ((*visited)[j] != 1) {
				DFS(graph, j, visited);
			}
		}
	}
}

int main() {
	int graph[VERTEX_NUM][VERTEX_NUM];
	int edge[EDGE_NUM][2] = {
		{1, 2}, 
		{1, 3}, 
		{2, 4}, 
		{2, 5},
		{3, 6},
		{4, 6},
		{5, 6}
	};


	iniGraph(&graph, &edge);
	printGraph(&graph);

	int visited[VERTEX_NUM];
	for (int x=0; x<VERTEX_NUM; x++) visited[x]=0;
	DFS(&graph, 0, &visited);

}
