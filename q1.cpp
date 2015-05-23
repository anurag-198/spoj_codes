#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,i,j;
	scanf ("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf ("*");
	}
	cout << endl;
	for (i = 0; i < n - 2; i++) {	
		for (j = 0; j < n - i - 2; j++) {
			cout <<" ";
		}
		cout << "*\n";
	}

	for (i = 0; i < n; i++) {
		cout <<"*";
	}
	cout << endl;
return 0;
	
}
