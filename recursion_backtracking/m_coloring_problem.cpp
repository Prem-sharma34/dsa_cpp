#include<bits/stdc++.h>
using namespace std;

// Function to check if it is safe to assign a color to a node
bool isSafe(int node, int color[], bool graph[101][101], int n, int col) {
    for (int k = 0; k < n; k++) {
        // Check if adjacent node has the same color
        if (k != node && graph[k][node] == 1 && color[k] == col) {
            return false;
        }
    }
    return true;  // Safe to assign the color
}

// Recursive function to solve the coloring problem
bool solve(int node, int color[], int m, int N, bool graph[101][101]) {
    // If all nodes are assigned colors, return true
    if (node == N) {
        return true;
    }

    // Try different colors for the node
    for (int i = 1; i <= m; i++) {
        if (isSafe(node, color, graph, N, i)) {
            color[node] = i;
            // Recursively check for the next node
            if (solve(node + 1, color, m, N, graph)) return true;
            color[node] = 0;  // Backtrack if the color assignment fails
        }
    }
    return false;  // If no solution is found
}

// Function to check if graph can be colored with m colors
bool graphColoring(bool graph[101][101], int m, int N) {
    int color[N] = { 0 };
    // Start solving from node 0
    if (solve(0, color, m, N, graph)) return true;
    return false;
}

int main() {
    int N = 4;  // Number of nodes
    int m = 3;  // Maximum number of colors

    bool graph[101][101];
    memset(graph, false, sizeof graph);

    // Create a sample graph with edges (0,1), (1,2), (2,3), (3,0), (0,2)
    graph[0][1] = 1; graph[1][0] = 1;
    graph[1][2] = 1; graph[2][1] = 1;
    graph[2][3] = 1; graph[3][2] = 1;
    graph[3][0] = 1; graph[0][3] = 1;
    graph[0][2] = 1; graph[2][0] = 1;

    // Output if the graph can be colored with at most m colors
    cout << graphColoring(graph, m, N);

    return 0;
}
