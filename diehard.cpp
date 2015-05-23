#include <bits/stdc++.h>
#define max3(a,b,c) max(a,max(b,c))
using namespace std;

int arr[3000][3000][3];

int fun(int h, int a, int p) {
	if (p == 0) {
		h += 3;
		a += 2;
	}
	else if (p == 1) {
		h -= 5;
		a -= 10;
	}
	else if (p == 2) {
		h -= 20;
		a += 5;
	}

	if (h <= 0 || a <= 0) {
		return 0;
	}

	if (arr[h][a][p])
		return arr[h][a][p];

	if (p == 0) {
		return arr[h][a][p] = max(fun(h,a,1),fun(h,a,2)) + 1;
	}
	else if (p == 1) {
		return arr[h][a][p] = max(fun(h,a,0),fun(h,a,2)) + 1;
	}
	else if (p == 2) {
		return arr[h][a][p] = max(fun(h,a,0),fun(h,a,1)) + 1;
	}
} 

int main() {
	std::ios::sync_with_stdio(false);
	int tc, h, a;
	cin >> tc;
	memset (arr, 0 , sizeof(arr));
	while (tc--) {
		cin >> h >> a;
		//cout << fun(h,a,0) <<" "<<fun(h,a,1)<<" "<<fun(h,a,2)<<endl;
		cout << max3(fun(h,a,0),fun(h,a,1),fun(h,a,2)) << endl;
	}
}