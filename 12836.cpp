#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    
    cin >> n >> q;

    vector<long long int> v(n + 1, 0);

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int p;
            long long int x;
            cin >> p >> x;
            v[p] += x;
        } 
        else {
            int l, r;
            cin >> l >> r;

            long long int sum = 0;
            for (int i = l; i <= r; i++) {
                sum += v[i];
            }

            cout << sum << '\n';
        }
    }

    return 0;
}
