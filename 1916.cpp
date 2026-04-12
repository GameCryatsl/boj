#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
#include <vector>

using namespace std;

const int MX = 1001;

struct node {
    int u;
    long long w;
    bool operator<(const node& o) const {
        return w > o.w;
    }
};

vector<node> adj[MX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
    }

    int start, end;
    cin >> start >> end;

    vector<long long> dist(n + 1, LLONG_MAX);
    priority_queue<node> pq;

    dist[start] = 0;
    pq.push({start, 0});

    while(!pq.empty()) {
        node cur = pq.top();
        pq.pop();

        if(cur.w > dist[cur.u]) continue;

        if(cur.u == end) {
            cout << cur.w;
            return 0;
        }

        for(auto nx : adj[cur.u]) {
            if(dist[nx.u] > cur.w + nx.w) {
                dist[nx.u] = cur.w + nx.w;
                pq.push({nx.u, dist[nx.u]});
            }
        }
    }

    return 0;
}
