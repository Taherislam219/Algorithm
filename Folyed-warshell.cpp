#include <bits/stdc++.h>
using namespace std;

int main() {
    int V;
    cin >> V;

    vector<vector<int>> dist(V, vector<int>(V));

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> dist[i][j];
        }
    }

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
cout<<endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
