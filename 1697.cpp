#include <iostream>
#include <queue>

using namespace std;

int main() {
    long long int n, k, dist[100001] = {};
    bool visited[100001] = {false};
    
    cin >> n >> k;

    queue<int> q;
    
    q.push(n);
    visited[n] = true;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        if(cur == k) {
            cout << dist[cur];
            return 0;
        }

        int next[3] = {cur - 1, cur + 1, cur * 2};

        for(int i = 0; i < 3; i++) {
            int nx = next[i];

            if(nx >= 0 && nx <= 100000 && !visited[nx]) {
                visited[nx] = true;
                dist[nx] = dist[cur] + 1;
                q.push(nx);
            }
        }
    }
}
