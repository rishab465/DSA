class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        const long long INF = 1e18;

        // Expanded graph: 2 states per node
        vector<vector<pair<int,long long>>> adj(2 * n);
        vector<vector<pair<int,long long>>> incoming(n);

        // Build normal edges and track incoming edges
        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];

            // normal traversal
            adj[2*u].push_back({2*v, w});
            adj[2*u + 1].push_back({2*v, w});

            // incoming for reversal
            incoming[v].push_back({u, w});
        }

        // Add reversed edges using switch
        for (int u = 0; u < n; u++) {
            for (auto &p : incoming[u]) {
                int v = p.first;
                long long w = p.second;
                adj[2*u].push_back({2*v, 2LL * w});
            }
        }

        // Dijkstra
        vector<long long> dist(2 * n, INF);
        priority_queue<pair<long long,int>,
                       vector<pair<long long,int>>,
                       greater<>> pq;

        dist[0] = 0;  // start at node 0, switch unused
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [cost, u] = pq.top();
            pq.pop();

            if (cost > dist[u]) continue;

            for (auto &edge : adj[u]) {
                int v = edge.first;
                long long w = edge.second;
                if (dist[v] > cost + w) {
                    dist[v] = cost + w;
                    pq.push({dist[v], v});
                }
            }
        }

        long long ans = min(dist[2*(n-1)], dist[2*(n-1) + 1]);
        return ans == INF ? -1 : (int)ans;
    }
};
