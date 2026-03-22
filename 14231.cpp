#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, arr[5001] = {}, dp[5001] = {}, result = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) {
        dp[i] = 1;

        for(int j = 0; j < i; j++) {
            if(arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        result = max(result, dp[i]);
    }

    cout << result;
}
