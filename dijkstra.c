#include <stdio.h>
#include <limits.h>
#include "graph.h"
#include "dijkstra.h"

int minDistance(int dist[], int visited[]) {
    int min = INT_MAX, index = -1;

    for(int i = 0; i < n; i++) {
        if(!visited[i] && dist[i] <= min) {
            min = dist[i];
            index = i;
        }
    }
    return index;
}

void dijkstra(int src, int dest) {
    int dist[MAX], visited[MAX] = {0}, parent[MAX];

    for(int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        parent[i] = -1;
    }

    dist[src] = 0;

    for(int i = 0; i < n - 1; i++) {
        int u = minDistance(dist, visited);
        if(u == -1) break;

        visited[u] = 1;

        for(int v = 0; v < n; v++) {
            if(!visited[v] && graph[u][v] &&
               dist[u] + graph[u][v] < dist[v]) {
                
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    if(dist[dest] == INT_MAX) {
        printf("\nNo Route Available\n");
        return;
    }

    int path[MAX], count = 0;
    int temp = dest;

    while(temp != -1) {
        path[count++] = temp;
        temp = parent[temp];
    }

    printf("\nShortest Path: ");
    for(int i = count - 1; i >= 0; i--) {
        printf("%d ", path[i]);
        if(i != 0) printf("-> ");
    }

    printf("\nTotal Cost: %d\n", dist[dest]);
    printf("Hop Count: %d\n", count - 1);

    printf("\nPacket Movement:\n");
    for(int i = count - 1; i >= 0; i--) {
        printf("Packet at Router %d\n", path[i]);
    }
    printf("Packet Delivered Successfully!\n");
}