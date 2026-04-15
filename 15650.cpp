#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> arr;

void dfs(int start) {
    if (arr.size() == m) {
        for (int x : arr) cout << x << " ";
        cout << '\n';
        return;
    }

    for (int i = start; i <= n; i++) {
        arr.push_back(i);
        dfs(i + 1);
        arr.pop_back();
    }
}

int main() {
    cin >> n >> m;
    dfs(1);
    return 0;
}
