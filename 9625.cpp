#include <iostream>

using namespace std;

int main() {
    int n, a = 1, b = 0, t;

    cin >> n;

    while(n--) {
        t = a;
        a = b;
        b += t;
    }

    cout << a << " " << b;
}
