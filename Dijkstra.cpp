#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n);

    // Read edges
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        // DIRECTED EDGE: only u -> v
        graph[u].push_back({v, w});
    }

    int source;
    cin >> source;

    vector<int> dist(n, INT_MAX);
    vector<bool> visited(n, false);

    dist[source] = 0;

    for (int i = 0; i < n; i++) {
        int u = -1;

        // Pick the unvisited node with smallest distance
        for (int j = 0; j < n; j++) {
            if (!visited[j] && (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }

        if (dist[u] == INT_MAX) break; // No reachable nodes left
        visited[u] = true;

        // Relax edges
        for (auto edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Print distances
    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX) cout << "INF ";
        else cout << dist[i] << " ";
    }
}
