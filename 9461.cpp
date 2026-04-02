#include <iostream>

using namespace std;

int main()
{
    long long int n, t, dp[101];
    
    cin >> n;
    
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    
    for(int i = 4; i <= 100; i++) {
        dp[i] = dp[i-2] + dp[i-3];  
    }
    
    for(int i = 0; i < n; i++) {
        cin >> t;
        
        cout << dp[t] << "\n";
    }
}
