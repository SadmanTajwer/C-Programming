#include <stdio.h>

#define MAX_VERTICES 100

// Function to add a directed edge from 'start' to 'end'
void addDirectedEdge(int graph[MAX_VERTICES][MAX_VERTICES], int start, int end, int vertices) {
    if (start < 0 || start >= vertices || end < 0 || end >= vertices) {
        printf("Invalid vertices.\n");
        return;
    }

    graph[start][end] = 1;
}

// Function to display the adjacency matrix
void displayGraph(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vertices, edges;

    // Input the number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    if (vertices <= 0 || vertices > MAX_VERTICES) {
        printf("Invalid number of vertices. Exiting...\n");
        return 1;
    }

    int graph[MAX_VERTICES][MAX_VERTICES] = {0}; // Initialize the adjacency matrix with zeros

    // Input the number of edges
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    if (edges < 0 || edges > vertices * (vertices - 1)) {
        printf("Invalid number of edges. Exiting...\n");
        return 1;
    }

    // Input edges and construct the adjacency matrix
    for (int i = 0; i < edges; i++) {
        int start, end;
        printf("Enter edge %d (start end): ", i + 1);
        scanf("%d %d", &start, &end);

        // Validate input vertices
        if (start < 0 || start >= vertices || end < 0 || end >= vertices) {
            printf("Invalid vertices. Try again.\n");
            i--;
            continue;
        }

        addDirectedEdge(graph, start, end, vertices);
    }

    // Display the adjacency matrix
    displayGraph(graph, vertices);

    return 0;
}
