#include <bits/stdc++.h>
using namespace std;
#define mod 10000007

int main()
{
    long long int tc,i,c,r,ans1,ans2;
    cin >> tc;
    while (tc--) {
        cin >> r >> c;
        ans1 = 0;
        ans2 = 0;
        for (i = 1; i <= r; i++) {
            if (i % 2 != 0) {
                ans2 = ans:2 + min(c,i);
            } else {
                ans1 += min(c,i);
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }

    return 0;
}
