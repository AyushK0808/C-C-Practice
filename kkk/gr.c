#include <stdio.h>
#include <stdbool.h>

#define MAX_NODES 100

typedef struct {
    int adjMatrix[MAX_NODES][MAX_NODES];
    int numNodes;
} Graph;

void initializeGraph(Graph* graph, int numNodes) {
    graph->numNodes = numNodes;

    // Initialize adjacency matrix with all zeros
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
}

void addEdge(Graph* graph, int u, int v) {
    // Update adjacency matrix to represent the edge
    graph->adjMatrix[u][v] = 1;
    graph->adjMatrix[v][u] = 1;
}

void printGraph(const Graph* graph) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < graph->numNodes; i++) {
        for (int j = 0; j < graph->numNodes; j++) {
            printf("%d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    Graph graph;
    int numNodes, numEdges;

    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);
    initializeGraph(&graph, numNodes);

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    printf("Enter the edges:\n");
    for (int i = 0; i < numEdges; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(&graph, u, v);
    }

    printGraph(&graph);

    return 0;
}