#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll toy[100005];
ll ans[100005];

#define max3(a,b,c) max(a, max(b,c))
ll answer(ll i, ll j) {
	if (i >= j)
		return 0;
	if (ans[i] != 0) { 
//		cout << ans[i] << endl;
		return ans[i];
	}
	else if (i == j - 3) {
		ans[i] = toy[i] + toy[i + 1] + toy[i + 2];
		return ans[i];
	}
	else if (i == j - 2) {
		ans[i] = toy[i] + toy[i + 1];
		return ans[i];
	}
	else if (i == j - 1) {
		ans[i] = toy[i];
		return ans[i];
	}

	ans[i] = max3(answer(i+2,j)+toy[i],answer(i+4,j)+toy[i]+toy[i+1],answer(i + 6,j)+toy[i]+toy[i+1]+toy[i+2]);
//	cout << ans[i+1] <<" "<< ans[i + 2] << endl;
	return ans[i];
}

int main() {
	int tc;
	long long n, i;
	
	scanf ("%d", &tc);

	while (tc--) {
		memset(toy, 0, sizeof(toy));
		memset(ans, 0, sizeof(ans));

		scanf ("%lld",&n);

		for (i = 0; i < n; i++) {
			scanf ("%lld", &toy[i]);
		}
		
		cout << answer(0, n) << endl;
				
	}
	return 0;
}
