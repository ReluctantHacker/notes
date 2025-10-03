// Find one of the Eulerian paths by Hierholzer's algortihm
#include <stdio.h>
#include <stdlib.h>

#define vertex_num 5

// determine the start vertex along with determination of Eulerian path existence
int getStartVertex(int graph[vertex_num][vertex_num]) {
    int odd_nums = 0;
    int degree_nums;
    int start_vertex = 0;

    for (int i=0; i<vertex_num; i++) {
        degree_nums = 0;
        for (int j=0; j<vertex_num; j++) {
            degree_nums+=graph[i][j];
        }
        if (degree_nums%2) {
            odd_nums+=1;
            start_vertex = i;
        }
    }
    if (odd_nums==2 || !odd_nums) return start_vertex;
    return -1; // there's no Eulerian path
}

int *Hierholzer(int graph[vertex_num][vertex_num], int *path_len) {
    int startVertex = getStartVertex(graph);
    if (startVertex==-1) {
        printf("There's no Eulerian path existed.\n");
        return NULL;
    }
    int unused_edges_num = 0;
    for (int i=0; i<vertex_num; i++) {
        for (int j=0; j<vertex_num; j++) {
            unused_edges_num+=graph[i][j];
        }
    }
    unused_edges_num/=2; // undirected graph
    *path_len = unused_edges_num+1;

    int *path = (int *)malloc(sizeof(int)*(*path_len));
    int path_top = -1;

    int stack[100];
    int top = -1;
    stack[++top] = startVertex;
    
    while (top>-1) {
        int pushed = 0;
        for (int i=0; i<vertex_num; i++) {
            if (graph[stack[top]][i]) {
                graph[stack[top]][i] -= 1;
                graph[i][stack[top]] -= 1;
                stack[++top] = i;
                pushed = 1;
                break;
            }
        }
        if (!pushed) path[++path_top] = stack[top--];
    }
    return path;
}

int main() {
    int graph[vertex_num][vertex_num] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };    
    int final_path_len;
    int *final_path = Hierholzer(graph, &final_path_len);
    if (!final_path) return 0;
    for (int i=0; i<final_path_len; i++) {
        printf("%d->", final_path[i]);
    }
    return 0;
}
