#ifndef GRAPH_H
#define GRAPH_H

#define MAX 20

extern int graph[MAX][MAX];
extern int n;

void initGraph();
void addEdge(int u, int v, int weight);
void displayGraph();

#endif