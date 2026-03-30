#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, t;
    string str;
    queue<int> q;
    
    cin >> n;
    
    while(n--) {
        cin >> str;
        
        if(str == "push") {
            cin >> t;
            q.push(t);
        }
        else if(str == "pop") {
            if(q.empty() == true) {
                cout << "-1" << "\n";
            }
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(str == "size") {
            cout << q.size() << "\n";
        }
        else if(str == "empty") {
            if(q.empty()) {
                cout << "1" << "\n";
            }
            else cout << "0" << "\n";
        }
        else if(str == "front") {
            if(q.empty()) {
                cout << "-1" << "\n";
            }
            else cout << q.front() << "\n";
        }
        else if(str == "back") {
            if(q.empty()) {
                cout << "-1" << "\n";
            }
            else cout << q.back() << "\n";        
        }
    }
    
    return 0;
}
