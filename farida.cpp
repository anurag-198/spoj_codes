#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	ll tc;
	
	ll arr[10005];
	ll ma[10005];

	cin >> tc;
	ll no;
	int i,j;

	for (i = 1; i <= tc; i++) {
		cin >> no;
		for (j = 1; j <= no; j++) {
			cin >> arr[j];
		}	
		ma[0] = 0;
		ma[1] = arr[1];
 
		for (j = 2; j <= no; j++) {
			ma[j] = max(ma[j - 1], arr[j] + ma[j - 2]);
		}
		
		cout << "Case "<< i <<": "<< ma[no] << endl;
	}
	return 0;
}
