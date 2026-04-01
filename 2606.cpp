#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;
bool visited[101];
vector<int> graph[101];

void dfs(int x){
    visited[x] = true;
    
    for(int i : graph[x]){
        if(!visited[i]){
            cnt++;
            dfs(i);
        }
    }
}


int main() {
    int n, m;
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int first, second;
        cin >> first >> second;
        
        graph[first].push_back(second);
        graph[second].push_back(first);
    }

    dfs(1);
    
    cout << cnt;
}
