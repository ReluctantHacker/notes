// graph DFS traversal with flag concept for undirected graph. The DFS traversal can also find connected components, You only need to find one components and find what vertices are not visited yet, choose of them to be the beginning of the new start vertex as finding the other connected component.
#include <stdio.h>
#include <stdlib.h>

#define vertex_num 5

void DFS(int graph[vertex_num][vertex_num]) {
    int visited[vertex_num] = {0}; // initialization with no visited at the beginning
    int stack[100];
    int top = -1;

    stack[++top] = 0; // as start vertex;

    while (top>-1) {
        int standByVertex = stack[top--];
        if (visited[standByVertex]) continue; // skip if already visited, in this algorithm, stack may store repeat vertex value due to that vertex hasn't been visited yet.
        visited[standByVertex] = 1;
        printf("%d->", standByVertex);
	    for (int i=0; i<vertex_num; i++) {
            if (graph[standByVertex][i]) {
                if (visited[i]) continue;
                stack[++top] = i;
            }
        }
    }
    return;
}

int main() {
    int graph[vertex_num][vertex_num] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };

    DFS(graph);
    return 0;
}

