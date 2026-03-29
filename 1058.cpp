#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, awn = 0;
	
	cin >> n;
	
	vector<vector<int>> prev, curr(n, vector<int>(n, 100000000));
	
	for(int i=0; i<n; i++) {
		curr[i][i] = 0;
		string s;
		cin >> s;
		for(int j=0; j<n; j++) {
			if(s[j] == 'Y')
				curr[i][j] = 1;
		}
	}
	
	for(int k=0; k<n; k++) {
		prev = curr;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				curr[i][j] = min(curr[i][j], prev[i][k]+prev[k][j]);
			}
		}
	}
	
	for(int i=0; i<n; i++) {
	    int cnt = 0;
		for(int j=0; j<n; j++) {
			if(i == j) continue;
			if(curr[i][j] <= 2) cnt++;
		}
		awn = max(awn, cnt);
	}
	cout << awn;
}

// 플로이드 워셜 알고리즘을 활용했는데 굳이 왜 썼나 싶네요.
