#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;
 
vector<int> vec[1001];
vector<int> ansBfs;
vector<int> ansDfs;
bool visited[1001];
    
void bfs(int first)
{
    queue<int> q;
    
    q.push(first);
    
    visited[first] = 1;
    
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        ansBfs.push_back(x);
 
        for(int i = 0; i < vec[x].size(); i++)
        {
            if(!visited[vec[x][i]])
            { 
                q.push(vec[x][i]); 
                visited[vec[x][i]] = 1;
            }
        }
    }
}
 
void dfs(int x)
{
    visited[x]=1;
    ansDfs.push_back(x);
 
    for(int i = 0;i < vec[x].size(); i++)
    {
        if(!visited[vec[x][i]]) dfs(vec[x][i]);
    }
}
 
int main()
{
    int n, m, v, a, b;
    cin >> n >> m >> v;
 
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    
    for(int i = 1; i <= n; i++) sort(vec[i].begin(), vec[i].end());
    
    bfs(v);
    memset(visited, 0, sizeof(visited));
    dfs(v);
    
    for(int i = 0; i < ansDfs.size(); i++) cout << ansDfs[i]<<" ";

    cout<<"\n";

    for(int i = 0; i < ansBfs.size(); i++) cout << ansBfs[i]<<" ";
    
    return 0;
}
