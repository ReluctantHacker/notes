#include <stdio.h>
#include <limits.h>

#define V 6 // 图中的节点数量

int minDistanceVertex(int visited[], int dist[]) {
	int min_dist = INT_MAX;
	int min_vertex = 0;
	for (int i=0; i<V; i++) {
		if (visited[i] == 0 && dist[i] < min_dist && dist[i] != INT_MAX) {
			min_dist = dist[i];
			min_vertex = i;
		}
	}
	return min_vertex;
}

int showResult(int dist[]) {
	for (int i=0; i<V; i++) {
		printf("node:%d    min_dist: %d\n", i, dist[i]);
	}
}

int dijkstra(int graph[V][V], int src) {
	int dist[V]; // the min distance from src to any v point
	int visited[V]; // the vertex that has been visited
	
	// initialization
	for (int i = 0; i<V; i++) {
		dist[i] = INT_MAX;
		visited[i] = 0; // not visited yet
	}

	dist[src] = 0;

	for (int i = 0; i<V; i++) {
		int u = minDistanceVertex(visited, dist);
		visited[u] = 1;
		for (int v=0; v<V; v++) {
			if (visited[v] == 0 && graph[u][v] != 0 && dist[u] != INT_MAX 
				       && dist[v] > dist[u] + graph[u][v]) {
				dist[v] = dist[u] + graph[u][v];
			}	
		}
	}
	showResult(dist);
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
