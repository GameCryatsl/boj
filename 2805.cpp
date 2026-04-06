#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, max = 0;
    long long int m, low = 0, high, ans = 0, mid, sum;
    
    
    cin >> n >> m;
    
    vector<int> tree(n);
    
    for(int i = 0; i < n; i++) {
        cin >> tree[i];
        if(tree[i] > max) max = tree[i];
    }
    high = max;
    
    while(low <= high) {
        sum = 0;
        mid = (low + high) / 2;
        
        for(int i = 0; i < n; i++) {
            if(tree[i] > mid) sum += tree[i] - mid;
        }
        
        if(sum >= m) {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    
    cout << ans;
}
