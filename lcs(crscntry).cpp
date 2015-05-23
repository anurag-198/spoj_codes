#include <bits/stdc++.h>

using namespace std;

int lcs(int *x, int *y, int m, int n) {
	int L[m+1][n+1];
	int i, j;

	for (i = 0; i <= m; i++) {
		for (j = 0; j <= n; j++) {
			if (i == 0 || j == 0) {
				L[i][j] = 0;
			}
			else if (x[i - 1] == y[j- 1]) {
				L[i][j] = L[i - 1][j - 1] + 1;
			}
			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}

	return L[m][n];
}

int main() {
	std::ios::sync_with_stdio(false);
	int i,maxx, j, a, tc, flag = 0;
	cin >> tc;
	int ag[2005];
	int tom[2005];

	while (tc--) {
		
		maxx = 0;
		i = 0;
		flag = 0;
		while (1) {
			cin >> a;
			if (a == 0)
				break;
			else {
				ag[i] = a;
				i++;
			}
		}

		while (1) {
			j = 0;
			if (flag == 1) {
				break;
			}
				while (1) {
					
					cin >> a;
					if (a == 0) {
						if (j == 0) {
							flag = 1;
						}
						break;
					}
					else {
						tom[j] = a;
						j++;
					}
				}
				if (flag != 1) {
					maxx = max (maxx, lcs(ag, tom, i, j));
				}
				
			}
		cout << maxx << endl;
		}
	return 0;
}