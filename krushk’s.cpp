#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};


int parent[100];

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) parent[b] = a;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<Edge> edges(m);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.w < b.w;
    });


    for (int i = 1; i <= n; i++) parent[i] = i;

    int mst_weight = 0;

    for (auto e : edges) {
        if (find(e.u) != find(e.v)) {
            unite(e.u, e.v);
            mst_weight += e.w;
            cout << "Edge: " << e.u << " - " << e.v << " weight: " << e.w << endl;
        }
    }

    cout << "Total MST weight: " << mst_weight << endl;
}
