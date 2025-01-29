#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function to find the vertex with the minimum distance value
int findMinDistance(vector<int>& dist, vector<bool>& visited, int V) {
    int minIndex = -1;
    int minValue = INT_MAX;

    for (int i = 0; i < V; i++) {
        if (!visited[i] && dist[i] < minValue) {
            minValue = dist[i];
            minIndex = i;
        }
    }
    return minIndex;
}

// Function to implement Dijkstra's Algorithm
void dijkstra(vector<vector<int>>& graph, int src, int V) {
    vector<int> dist(V, INT_MAX);    // Distance of each vertex from the source
    vector<bool> visited(V, false); // Visited vertices
    dist[src] = 0;                  // Distance of source to itself is 0

    for (int i = 0; i < V - 1; i++) {
        int u = findMinDistance(dist, visited, V);
        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != 0 && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the shortest distances
    cout << "Vertex\tDistance from Source" << endl;
    for (int i = 0; i < V; i++) {
        cout << i << "\t" << dist[i] << endl;
    }
}

int main() {
    int V = 5; // Number of vertices in the graph
    vector<vector<int>> graph = {
        {0, 10, 0, 30, 100},
        {10, 0, 50, 0, 0},
        {0, 50, 0, 20, 10},
        {30, 0, 20, 0, 60},
        {100, 0, 10, 60, 0}
    };

    int source = 0;
    cout << "Source vertex: " << source << endl;
    dijkstra(graph, source, V);

    return 0;
}
