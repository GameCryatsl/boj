#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int parent[100001];
vector<int> v[100001];
bool visited[100001];

void bfs() {
    queue<int> q;
    q.push(1);
    visited[1] = true;
    
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        
        for(int next : v[cur]) {
            if(!visited[next]) {
                visited[next] = true;
                parent[next] = cur;
                q.push(next);
            }
        }
    }
}

int main()
{
    int n, a, b;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    bfs();
    
    for(int i = 2; i <= n; i++) {
        cout << parent[i] << "\n";
    }
}
