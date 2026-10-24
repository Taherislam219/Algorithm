#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int graph[4][4] = {
        {0, 1, 3, 0},
        {1, 0, 3, 6},
        {3, 3, 0, 4},
        {0, 6, 4, 0}
    };

    bool selected[4] = {false};
    selected[0] = true;

    cout << "Edges in MST:\n";
    int no_of_edges = 0;
    int total_weight = 0;

    while (no_of_edges < n - 1) {
        int min = 9999, x = 0, y = 0;

        for (int i = 0; i < n; i++) {
            if (selected[i]) {
                for (int j = 0; j < n; j++) {
                    if (!selected[j] && graph[i][j]) {
                        if (graph[i][j] < min) {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        cout << x << " - " << y << "  weight: " << graph[x][y] << endl;
        total_weight += graph[x][y];
        selected[y] = true;
        no_of_edges++;
    }

    cout << "Total weight of MST: " << total_weight << endl;
    return 0;
}
