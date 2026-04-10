#include <iostream>
#include <queue>

using namespace std;

int n, m, maze[101][101], dist[101][101];
bool visited[101][101];

void bfs()
{
    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
    
    queue<pair<int, int>> q;
    
    q.push({0,0});
    visited[0][0] = true;
    dist[0][0] = 1;
    
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || ny < 0 || nx >= n || ny > m) continue;
            if(maze[nx][ny] == 0) continue;
            if(visited[nx][ny]) continue;
            
            visited[nx][ny] = true;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }
}

int main()
{
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            maze[i][j] = s[j] - '0';
        }
    }
    
    bfs();
    
    cout << dist[n-1][m-1];
    return 0;
}
