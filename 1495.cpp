#include <iostream>

using namespace std;

int main()
{
    int n, s, m, t;
    bool dp[51][1001] = {};
    
    cin >> n >> s >> m;
    
    dp[0][s] = true;

    
    for(int i = 1; i <= n; i++) {
        cin >> t;

        for(int j = 0; j <= m; j++) {
            if(dp[i-1][j]) {
                if(j + t <= m)
                    dp[i][j + t] = true;
                if(j - t >= 0)
                    dp[i][j - t] = true;
            }
        }
    }
    
    for(int j = m; j >= 0; j--) {
        if(dp[n][j]) {
            cout << j;
            return 0;
        }
    }
    
    cout << -1;
    
    return 0;
}
