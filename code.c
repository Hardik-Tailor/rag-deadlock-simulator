#include <stdio.h>
#include <stdbool.h>

#define MAX_NODES 50
#define PROCESS 1
#define RESOURCE 2

int graph[MAX_NODES][MAX_NODES];
int nodeType[MAX_NODES];
int nodeCount = 0;

void addProcess() { nodeType[nodeCount++] = PROCESS; }
void addResource() { nodeType[nodeCount++] = RESOURCE; }
void addEdge(int a, int b) { graph[a][b] = 1; }

void displayGraph() {
    printf("\n===== RAG =====\n");

    for (int i = 0; i < nodeCount; i++) {

        if (nodeType[i] == PROCESS) printf("P%d: ", i);
        else printf("R%d: ", i);

        for (int j = 0; j < nodeCount; j++) {
            if (graph[i][j] == 1) {
                if (nodeType[j] == PROCESS) printf("-> P%d ", j);
                else printf("-> R%d ", j);
            }
        }
        printf("\n");
    }

    printf("================\n");
}

int main() {
    addProcess();
    addResource();
    addEdge(0, 1);
    displayGraph();
    return 0;
}
