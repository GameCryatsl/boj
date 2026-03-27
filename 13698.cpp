#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int arr[4] = {1, 0, 0, 2};
    string str;
    
    cin >> str;
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'A') {
            swap(arr[0], arr[1]);
        }
        else if(str[i] == 'B') {
            swap(arr[0], arr[2]);
        }
        else if(str[i] == 'C') {
            swap(arr[0], arr[3]);
        }
        else if(str[i] == 'D') {
            swap(arr[1], arr[2]);
        }
        else if(str[i] == 'E') {
            swap(arr[1], arr[3]);
        }
        else if(str[i] == 'F') {
            swap(arr[2], arr[3]);
        }
    }
    
    for(int i = 0; i < 4; i++) {
        if(arr[i] == 1) {
            cout << i+1 << "\n";
            break;
        }
    }
    
    for(int i = 0; i < 4; i++) {
        if(arr[i] == 2) {
            cout << i+1 << "\n";
            break;
        }
    }
}
