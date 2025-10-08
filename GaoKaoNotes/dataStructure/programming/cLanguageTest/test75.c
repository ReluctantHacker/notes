// Hierholzer's algorithm for directed graph without reverse, you should definitely add reverse to the code
#include <stdio.h>
#include <stdlib.h>

#define vertex_num 5

int *findStartEndVertex(int graph[vertex_num][vertex_num]) {
    int *startAndEnd = (int *)malloc(sizeof(int)*2);
    startAndEnd[0] = startAndEnd[1] = -1;
    int in_degree[vertex_num] = {0};
    int out_degree[vertex_num] = {0};
    int unbalance_degree = 0;

    for (int i=0; i<vertex_num; i++) {
        for (int j=0; j<vertex_num; j++) {
            out_degree[i]+=graph[i][j];
            in_degree[j]+=graph[i][j];
        }
    }

    for (int i=0; i<vertex_num; i++) {
        if (out_degree[i]-in_degree[i]>1 || out_degree[i]-in_degree[i]<-1) return NULL; // no Eulerian path
        if (out_degree[i]-in_degree[i]==1) {
            if (startAndEnd[0]==-1) startAndEnd[0] = i;
            else return NULL;
        }
        if (out_degree[i]-in_degree[i]==-1) {
            if (startAndEnd[1]==-1) startAndEnd[1] = i;
            else return NULL;
        }
        if (out_degree[i]!=in_degree[i]) unbalance_degree+=1;
    }
    if (unbalance_degree==2) return startAndEnd;
    if (!unbalance_degree) {
        startAndEnd[0] = startAndEnd[1] = 0;
        return startAndEnd;
    }
    return NULL;
}

int *Hierholzer(int graph[vertex_num][vertex_num], int *path_len) {
    int *startAndEndVertices = findStartEndVertex(graph);
    if (!startAndEndVertices) {
        printf("There's no Eulerian path.\n");
        return NULL;
    }
    int edge_len = 0;
    for (int i=0; i<vertex_num; i++) {
        for (int j=0; j<vertex_num; j++) {
            edge_len+=graph[i][j];
        }
    }
    *path_len = edge_len+1;

    int *path = (int *)malloc(sizeof(int)*(*path_len));
    int path_top = -1;

    int stack[100];
    int top = -1;

    stack[++top] = startAndEndVertices[0];
    while (top>-1) {
        int used = 0;
        for (int i=0; i<vertex_num; i++) {
            if (graph[stack[top]][i]) {
                graph[stack[top]][i]-=1;
                stack[++top] = i;
                used = 1;
                break;
            }
        }
        if (!used) path[++path_top] = stack[top--];
    }
    return path;
}

int main() {
    // has Eulerian path with no cycle
    int graph[vertex_num][vertex_num] = {
        {0, 1, 0, 1, 0}, // 0 → 1, 3
        {0, 0, 1, 0, 0}, // 1 → 2
        {1, 0, 0, 0, 0}, // 2 → 0
        {0, 0, 0, 0, 1}, // 3 → 4
        {0, 0, 1, 0, 0}  // 4 → 2
    };

    int graph_cycle[vertex_num][vertex_num] = {
        {0, 1, 0, 0, 0}, // 0 → 1
        {0, 0, 1, 0, 0}, // 1 → 2
        {0, 0, 0, 1, 0}, // 2 → 3
        {0, 0, 0, 0, 1}, // 3 → 4
        {1, 0, 0, 0, 0}  // 4 → 0
    };

    int final_path_len;
    int *final_path = Hierholzer(graph, &final_path_len);
    if (!final_path) return 0;
    for (int i=0; i<vertex_num; i++) printf("%d->", final_path[i]);
    printf("\n");


    int final_path_len2;
    int *final_path2 = Hierholzer(graph_cycle, &final_path_len2);
    for (int i=0; i<vertex_num; i++) printf("%d->", final_path2[i]);

    return 0;
}

