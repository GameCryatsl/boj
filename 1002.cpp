#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x1, x2, y1, y2 ,r1, r2, dist, sum, sub;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        dist = pow(x2 - x1, 2) + pow(y2 - y1, 2);
        sum = pow(r1 + r2, 2);
        sub = pow(r2 - r1, 2);
            
        if(dist == 0 && r1 == r2) cout << "-1\n";
        else if(dist < sum && dist > sub) cout << "2\n";
        else if(dist == sum || dist == sub) cout << "1\n";
        else cout << "0\n";
    }
    
    return 0;
}
