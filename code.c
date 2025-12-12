#include <stdio.h>
#include <stdbool.h>

#define MAX_NODES 50
#define PROCESS 1
#define RESOURCE 2

int graph[MAX_NODES][MAX_NODES];
int nodeType[MAX_NODES];
int nodeCount = 0;

void addProcess() {
    nodeType[nodeCount] = PROCESS;
    printf("Process P%d created.\n", nodeCount);
    nodeCount++;
}

void addResource() {
    nodeType[nodeCount] = RESOURCE;
    printf("Resource R%d created.\n", nodeCount);
    nodeCount++;
}

int main() {
    
    addProcess();
    addResource();
    return 0;
}

