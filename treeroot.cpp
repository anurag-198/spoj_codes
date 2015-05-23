#include<bits/stdc++.h>
 
using namespace std;
 
 vector <int> a;
 vector <int> b;

int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              int sum1=0,sum2=0;
              for(i=0;i<n - 1;i++)
              {
                  scanf("%d%d",&m,&r);
                  a.push_back(m);
                  b.push_back(r);
                  
              }

              for (i = 0; i < n - 1; i++) {
              	if (b.find(a[i]) != b.end()) {
              		cout << a[i] << endl;
              	}
         }


            //  printf("%d\n",sum1-sum2);
                      
    }
    return 0;
}
