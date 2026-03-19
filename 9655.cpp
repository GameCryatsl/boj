#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if((n-1) % 4 == 1 || (n-1) % 4 == 3) {
        cout << "CY";
    }
    else cout << "SK";
}
