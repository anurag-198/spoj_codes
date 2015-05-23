	#include <bits/stdc++.h>

	using namespace std;

	int main() {
		std::ios::sync_with_stdio(false);
		int tc;
		int sum,e,n;
		cin >> tc;
		while (tc--) {
			cin >> e >> n;
			sum = e + n;
			sum = sum / 3;
			sum = min(sum, min(e,n));
			cout << sum << endl;
		}
		return 0;
	}