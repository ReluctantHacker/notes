#include <stdio.h>
#include <limits.h>

#define V 6 // 图中的节点数量

// 找到未访问节点中距离最小的节点
int minDistance(int dist[], int visited[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// 打印最短路径
void printSolution(int dist[]) {
    printf("节点\t距离\n");
    for (int i = 0; i < V; i++) {
        printf("%d\t%d\n", i, dist[i]);
    }
}

// Dijkstra 算法
void dijkstra(int graph[V][V], int src) {
    int dist[V]; // 存储最短路径
    int visited[V]; // 记录节点是否已访问

    // initialization
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist);
}

int main() {
    int graph[V][V] = {
        {0, 4, 0, 0, 0, 0},
        {4, 0, 8, 7, 0, 0},
        {0, 8, 0, 9, 0, 0},
        {0, 7, 9, 0, 6, 0},
        {0, 0, 0, 6, 0, 10},
        {0, 0, 0, 0, 10, 0}
    };

    int startNode = 0; // 起始节点
    dijkstra(graph, startNode);

    return 0;
}
