#include <bits/stdc++.h>

using namespace std;

int dp[2001][2001];

int lcs(char s1[], char s2[], int m, int n) {
	int i,val,j,temp1,temp2;
	dp[0][0]=0;
 
for(i=1;i<=m;i++) dp[i][0]=i;
for(j=1;j<=n;j++) dp[0][j]=j;
 
for(i=1;i<=m;i++)   {
 
     for(j=1;j<=n;j++)   {
 
          val=(s1[i-1]==s2[j-1]) ? 0:1;
 
          temp1=min(dp[i-1][j]+1,dp[i][j-1]+1);
 
          temp2=dp[i-1][j-1]+val;
 
          dp[i][j]=min(temp1,temp2);
 
     }
   }
 
return dp[m][n];
}

int main() {
	std::ios::sync_with_stdio(false);
	int tc,t,s,ans, maxx;
	cin >> tc;
	char ag[2005];
	char tom[2005];

	while (tc--) {
		ans = 0;
		cin >> ag;
		cin >> tom;
		s = strlen(ag);
		t = strlen(tom);
		ans = lcs(ag, tom, s, t);

		cout << ans << endl;
		}

	return 0;
}