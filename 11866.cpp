#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, k, t = 0;
    queue<int> q;
    
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++) {
        q.push(i);
    }
    
    cout << "<";
    
    while(!q.empty()) {
        t++;
        
        if(t == k) {
            cout << q.front();
            q.pop();
            t = 0;
            
            if(!q.empty()) cout << ", ";
        } else {
            q.push(q.front());
            q.pop();
        }
    }
    cout << ">";
}
