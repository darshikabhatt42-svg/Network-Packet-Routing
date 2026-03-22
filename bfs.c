#include <stdio.h>
#include "graph.h"
#include "bfs.h"

int bfs(int src, int dest) {
    int visited[MAX] = {0};
    int queue[MAX], front = 0, rear = 0;

    visited[src] = 1;
    queue[rear++] = src;

    while(front < rear) {
        int u = queue[front++];

        if(u == dest)
            return 1;

        for(int v = 0; v < n; v++) {
            if(graph[u][v] != 0 && !visited[v]) {
                visited[v] = 1;
                queue[rear++] = v;
            }
        }
    }
    return 0;
}