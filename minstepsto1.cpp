#include <bits/stdc++.h>

using namespace std;

long long dp[20000007];
void findmin(long long n) {
	dp[1] = 0;
	long long r,i;

	for (i = 2; i <= n; i++) {
		dp[i] = 1 + dp[i - 1];
		if ((i % 2) == 0) {
			dp[i] = min(dp[i], 1 + dp[i / 2]);
		}
		if ((i % 3) == 0) {
			dp[i] = min(dp[i], 1 + dp[i / 3]);
		}
	}
}

int main() {
	long long tc, ans;
	long long n;
	findmin(20000007);
	scanf ("%lld", &tc);
	while (tc--) {
		scanf ("%lld", &n);
		cout << dp[n] << endl;
	}
	return 0;
}
