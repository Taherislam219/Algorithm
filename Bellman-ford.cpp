#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    int u, v, w;
    vector<int> dist(V, 1e9);

    vector<vector<int>> edges;
    for (int i = 0; i < E; i++) {
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int src;
    cin >> src;
    dist[src] = 0;

    for (int i = 0; i < V - 1; i++) {
        for (auto e : edges) {
            if (dist[e[0]] + e[2] < dist[e[1]]) {
                dist[e[1]] = dist[e[0]] + e[2];
            }
        }
    }

    for (int i = 0; i < V; i++) {
        cout << "Dist to " << i << " = " << dist[i] << endl;
    }

    return 0;
}
