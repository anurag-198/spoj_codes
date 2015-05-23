#include <bits/stdc++.h>

using namespace std;

void knapsack (int W, int wt[], int val[], int n) {
	int i, w;
	int k[n+1][W+1];

//	memset(k, 0, sizeof(k));

	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0) {
				k[i][w] = 0;
			}
			else if (wt[i - 1] <= w) {
				k[i][w] = max((val[i - 1] + k[i - 1][w - wt[i - 1]]),k[i - 1][w]);
			}
			else {
				k[i][w] = k[i - 1][w];
			}
		} 
	}
//	for (i = 1; i <= W; i++) {
		printf("%d\n",k[n][W]);
//	}
}

int main() {
//	std::ios::sync_with_stdio(false);
	int n, i;
	int s;
	scanf("%d%d",&s,&n);
	int wt[n];
	int val[n];
	
	for (i = 0; i < n; i++) {
		scanf("%d%d",&wt[i],&val[i]);
//		cout << " i " << i <<" ";
	}

	knapsack(s,wt,val,n);
	return 0;
}
