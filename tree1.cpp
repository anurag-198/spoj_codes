#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <queue>
#include <stack>
#define PB push_back
#define MP make_pair
#define PA pair
#define IN insert
#define FS first
#define SC second
#define MX 1000007
using namespace std;
 
 
int main()
{
 ios_base::sync_with_stdio(0);
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int ilosc=0;
int tab[50];
int z=0;
for(int i = 0 ;i<n;i++)
{
int a;
cin>>tab[i]>>a;ilosc+=tab[i];z+=a;}
 
int mx=0;
for(int i = 0;i<n - 1;i++)
if(ilosc-tab[i]==z)mx=max(mx,tab[i]);
 
 
 
cout<<mx<<"\n";
 
}
return 0;
	}