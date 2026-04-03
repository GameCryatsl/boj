#include <iostream>
#include <climits>

using namespace std;

int main() {
  long long int n, m, b, arr[501][501], time = LLONG_MAX, height = 0;
  
  cin >> n >> m >> b;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for(int h = 0; h <= 256; h++) {
    long long int cur = b, t = 0;
    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
        if(arr[i][j] < h) {
          cur -= h - arr[i][j];
          t += h - arr[i][j];
        }else {
          cur += arr[i][j] - h;
          t += 2 * (arr[i][j] - h);
        }
      }
    }
    
    if(cur >= 0 && (t < time || (t == time && h > height))) {
      time = t;
      height = h;
    }
  }

  cout << time << " " << height;
}
