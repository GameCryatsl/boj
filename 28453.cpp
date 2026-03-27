#include <iostream>

using namespace std;

int main()
{
    int n, t;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> t;
        
        if(t == 300) {
            cout << "1 ";
        }
        else if(t >= 275) {
            cout << "2 ";
        }
        else if(t >= 250) {
            cout << "3 ";
        }
        else cout << "4 ";
    }
    
    return 0;
}
