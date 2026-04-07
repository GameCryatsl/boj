#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, l = 0, ans = 0, cnt[10] = {}, kind = 0;
    
    cin >> n;

    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int r = 0; r < n; r++) {
        if(cnt[arr[r]] == 0) kind++;
        cnt[arr[r]]++;

        while(kind > 2) {
            cnt[arr[l]]--;
            if(cnt[arr[l]] == 0) kind--;
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    cout << ans;
}
