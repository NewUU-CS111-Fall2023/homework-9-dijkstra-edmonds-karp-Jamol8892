#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Problem1 {
public:
    void dijkstra(const vector<vector<pair<int, int>>>& graph, int source) {
        const int INF = 1e9;
        int n = graph.size();
        vector<int> dist(n, INF);
        vector<int> parent(n, -1);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        dist[source] = 0;
        pq.push({0, source});

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (auto& edge : graph[u]) {
                int v = edge.first;
                int w = edge.second;

                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    parent[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }

        // Print the shortest distances
        cout << "Shortest distances from source " << source << ":\n";
        for (int i = 0; i < n; i++) {
            cout << i << ": " << dist[i] << "\n";
        }

        // Print the shortest paths (optional)
        // ...
    }
};