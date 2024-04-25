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
}

node *createNode(int vertex) {
	node *newNode = (node *)malloc(sizeof(node));
	newNode->vertex=vertex;
	newNode->next=NULL;
	return newNode;
}

// 初始化圖, 建完後只有verteces
int iniGraph(graph *graph, int vertex_num) {
	graph->vertex_num = vertex_num;
	graph->adjLists = (node **)malloc(sizeof(*adjLists)*vertex_num);
}

// 添加邊(vi, vj), 在這裡其實就是加node, 需要源vertex和目標vertex
int addEdge(graph *graph, int src, int dest) {
	// 添加邊(源到目標)
	node *newNode = createNode(src);
	newNode->next = adjLists[src];
	graph->adjLists[src] = newNode;

	// 添加邊(目標到源), 無向圖才需要
	newNode = createNode(dest);
	newNode->next = adjLists[dest];
	graph->adjLists[dest] = newNode;
}


int main() {

}
