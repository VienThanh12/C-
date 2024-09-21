#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max();

// A structure to represent an edge
struct Edge {
    int to;
    long long weight;
};

// Function to run Dijkstra's algorithm
vector<long long> dijkstra(int start, int n, const vector<vector<Edge>>& graph) {
    vector<long long> dist(n + 1, INF);
    dist[start] = 0;
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        long long d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;

        for (const Edge& edge : graph[u]) {
            int v = edge.to;
            long long w = edge.weight;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<int> horses(h);
        for (int i = 0; i < h; ++i) {
            cin >> horses[i];
        }

        vector<vector<Edge>> graph(n + 1);

        for (int i = 0; i < m; ++i) {
            int u, v;
            long long w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }

        // Run Dijkstra from Marian's start (1) and Robin's start (n)
        vector<long long> distMarian = dijkstra(1, n, graph);
        vector<long long> distRobin = dijkstra(n, n, graph);

        // Adjust travel times with horses (halve the distances)
        for (int horse : horses) {
            for (Edge& edge : graph[horse]) {
                edge.weight /= 2;
            }
        }

        vector<long long> distMarianHorse = dijkstra(1, n, graph);
        vector<long long> distRobinHorse = dijkstra(n, n, graph);

        // Find the minimum time where they can meet
        long long result = INF;
        for (int i = 1; i <= n; ++i) {
            long long meetTime = min(distMarian[i], distMarianHorse[i]) + min(distRobin[i], distRobinHorse[i]);
            result = min(result, meetTime);
        }

        if (result == INF) {
            cout << -1 << '\n';
        } else {
            cout << result << '\n';
        }
    }

    return 0;
}
