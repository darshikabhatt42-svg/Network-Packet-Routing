#include <stdio.h>
#include "graph.h"

int graph[MAX][MAX];
int n;

void initGraph() {
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            graph[i][j] = 0;
        }
    }
}

void addEdge(int u, int v, int weight) {
    graph[u][v] = weight;
    graph[v][u] = weight;
}

void displayGraph() {
    printf("\nAdjacency Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%3d ", graph[i][j]);
        }
        printf("\n");
    }
}