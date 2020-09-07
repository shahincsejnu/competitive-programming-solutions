#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;

	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int arr[n+5];
		for(int i = 1; i <= n; i++) cin >> arr[i];

		for(int i = n; i >= 1; i--) cout << arr[i] << " \n"[i==1];
	}

	return 0;
}