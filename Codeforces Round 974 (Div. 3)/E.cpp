#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

typedef long long ll;
const ll INF = 1e18;

struct Edge {
    int to;
    ll cost;
};

struct State {
    int vertex;
    int horse; // 0: without horse, 1: with horse
    ll time;
    bool operator>(const State& other) const {
        return time > other.time;
    }
};

const int MAXN = 200005; // Maximum number of vertices
int parent[MAXN]; // For Union-Find

// Union-Find functions
void make_set(int v) {
    parent[v] = v;
}
int find_set(int v) {
    if (parent[v] != v)
        parent[v] = find_set(parent[v]);
    return parent[v];
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

int n, m, h;
vector<int> horse_vertices;
vector<Edge> adj[MAXN]; // Adjacency list for the graph
bool has_horse[MAXN]; // Marks if a vertex has a horse

// Dijkstra's algorithm to compute minimal times
void dijkstra(int start, vector<ll>& dist_no_horse, vector<ll>& dist_with_horse) {
    dist_no_horse.assign(n + 1, INF);
    dist_with_horse.assign(n + 1, INF);

    priority_queue<pair<ll, pair<int, int>>, vector<pair<ll, pair<int, int>>>, greater<>> pq;
    // state: (time, (vertex, horse))
    dist_no_horse[start] = 0;
    pq.push({0, {start, 0}});

    while (!pq.empty()) {
        auto [time, p] = pq.top();
        pq.pop();
        int u = p.first;
        int horse = p.second;

        if (horse == 0 && time > dist_no_horse[u])
            continue;
        if (horse == 1 && time > dist_with_horse[u])
            continue;

        // If at a vertex with a horse and not yet mounted
        if (horse == 0 && has_horse[u]) {
            if (dist_with_horse[u] > time) {
                dist_with_horse[u] = time;
                pq.push({time, {u, 1}});
            }
        }

        // Traverse edges
        for (auto& edge : adj[u]) {
            int v = edge.to;
            ll cost = edge.cost;
            if (horse == 0) {
                // Without horse
                if (dist_no_horse[v] > time + cost) {
                    dist_no_horse[v] = time + cost;
                    pq.push({dist_no_horse[v], {v, 0}});
                }
            } else {
                // With horse
                ll half_cost = cost / 2;
                if (dist_with_horse[v] > time + half_cost) {
                    dist_with_horse[v] = time + half_cost;
                    pq.push({dist_with_horse[v], {v, 1}});
                }
            }
        }
    }
}

void solve() {
    // Read input
    cin >> n >> m >> h;
    horse_vertices.clear();
    for (int i = 1; i <= n; ++i) {
        adj[i].clear();
        has_horse[i] = false;
        make_set(i);
    }

    for (int i = 0; i < h; ++i) {
        int a;
        cin >> a;
        has_horse[a] = true;
    }

    // Read edges and build graph
    for (int i = 0; i < m; ++i) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        union_sets(u, v);
    }

    // Check connectivity
    if (find_set(1) != find_set(n)) {
        cout << -1 << '\n';
        return;
    }

    // Dijkstra's algorithm for Marian (start from vertex 1)
    vector<ll> dist_M_no_horse, dist_M_with_horse;
    dijkstra(1, dist_M_no_horse, dist_M_with_horse);

    // Dijkstra's algorithm for Robin (start from vertex n)
    vector<ll> dist_R_no_horse, dist_R_with_horse;
    dijkstra(n, dist_R_no_horse, dist_R_with_horse);

    ll min_time = INF;
    for (int v = 1; v <= n; ++v) {
        ll time_M = min(dist_M_no_horse[v], dist_M_with_horse[v]);
        ll time_R = min(dist_R_no_horse[v], dist_R_with_horse[v]);
        ll meeting_time = max(time_M, time_R);
        if (meeting_time < min_time) {
            min_time = meeting_time;
        }
    }

    cout << min_time << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
