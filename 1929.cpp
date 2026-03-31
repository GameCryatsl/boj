#include <iostream>

using namespace std;

int main() {
    int n, m;
    bool isPrime[1000001];
  
    cin >> n >> m;

    for(int i = 0; i <= m; i++)
        isPrime[i] = true;

    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i <= m; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= m; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for(int i = n; i <= m; i++) {
        if(isPrime[i])
            cout << i << '\n';
    }
}
