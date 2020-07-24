#include <bits/stdc++.h>
using namespace std;

int main()
{
	   int n;
	   cin >> n;
	   
	   int total = 0, freq[105] = {0};
	   
	   for(int i = 1; i <= n; i++){
				    int val;
				    cin >> val;
				    freq[val]++;
				}
				
				for(int i = 1; i <= 100; i++){
				    total += (i * freq[i]);
				}
				
				int ans1 = total / n, res1 = 0, res2 = 0, ans2 = ans1;
				if(total%n) ans2++;
				
				for(int i = 1; i <= 100; i++){
				    res1 += (freq[i] * (i-ans1) * (i-ans1));
				}
				for(int i = 1; i <= 100; i++){
				    res2 += (freq[i] * (i-ans2) * (i-ans2));
				}
				
				cout << min(res1, res2) << "\n";
	   
    return 0;
}

