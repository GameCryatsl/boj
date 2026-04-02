#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  
  int n, m, arr, dp[100001], a, b;

  cin >> n >> m;

  for(int i = 1; i <= n ; i++) {
    cin >> arr;
    dp[i] = dp[i-1] + arr;
  }

  for(int i = 0; i < m; i++) {
    cin >> a >> b;

    cout << dp[b] - dp[a-1] << "\n";
  }
}
