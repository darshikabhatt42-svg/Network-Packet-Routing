#include <stdio.h>
#include "graph.h"
#include "bfs.h"
#include "dijkstra.h"

int main() {
    int edges, u, v, weight;
    int src, dest;

    printf("Enter number of routers: ");
    scanf("%d", &n);

    initGraph();

    printf("Enter number of connections: ");
    scanf("%d", &edges);

    for(int i = 0; i < edges; i++) {
        printf("Enter edge (u v weight): ");
        scanf("%d %d %d", &u, &v, &weight);
        addEdge(u, v, weight);
    }

    displayGraph();

    printf("\nEnter source router: ");
    scanf("%d", &src);

    printf("Enter destination router: ");
    scanf("%d", &dest);

    if(!bfs(src, dest)) {
        printf("\nNo Route Available\n");
        return 0;
    }

    dijkstra(src, dest);

    return 0;
}