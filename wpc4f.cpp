#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int tc, n, i;
	cin >> tc;
	int dp[21][3];
	
	while (tc--) {
		cin >> n;
		for (i = 0;i < n; i++) {
			cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
		}
		
		for (i = 1; i < n; i++) {
			dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
			dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
			dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
//		cout << " i \n " <<min (dp[i][0], min(dp[i][1],dp[i][2])) << endl;
		}

		cout << min (dp[n - 1][0], min(dp[n - 1][1],dp[n - 1][2])) << endl;
	}
	
return 0;
}
