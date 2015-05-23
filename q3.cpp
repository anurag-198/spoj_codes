#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,m,i,j,k,ans,ans3,ans1;
	scanf ("%lld%lld", &n, &m);
	if (m == 1) {
		cout << "1\n";
		return 0;
	}

	if (n < m) {
		cout << "-1\n";
		return 0;
	}

	n = n - 1;
	m = m - 1;
	ans = 1;
	ans1 = 1;
	k = m;

	for (i = 1; i <= k; i++) {
		if ((n > 0) && (m > 0)) {
		ans = 	(ans * n);
		ans1 = (ans1 * m);
	
		ans3 = (ans / ans1) % 10000007;
		m--;
		n--;
		}
	}

	cout << ans3 << endl;
}
