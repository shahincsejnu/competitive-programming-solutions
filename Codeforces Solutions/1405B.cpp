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

        lli total = 0, coin = 0, val, hand = 0;

        for(int i = 1; i <= n; i++){
            cin >> val;
            if(val < 0){
            	val *= -1;
            	total -= val;
            	if(total < 0) {coin += abs(total); total = 0;}
            }
            else total += val;
        }
        
        cout << total << "\n";
	}

	return 0;
}