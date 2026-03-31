#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int a, b, c, d, deno, mole, red;
    
    cin >> a >> b >> c >> d;
    
    deno = b * d;
    
    mole = a * d + b * c;
    
    red = gcd(deno, mole);
    
    deno = deno / red;
    
    mole = mole / red;
    
    cout << mole << " " << deno;
}
