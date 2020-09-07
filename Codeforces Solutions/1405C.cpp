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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool flag = true;

        for(int i = 0; i < k; i++){
        	char ch1 = s[i];

        	for(int j = i+k; j < n; j += k){
        		if(s[j] == ch1) continue;
        		if(s[j] == '0'){
        			if(ch1 == '1') {flag = false; break;}
        			ch1 = s[j];
        		}
        		else if(s[j] == '1'){
        			if(ch1 == '0') {flag = false; break;}
        			ch1 = s[j];
        		}
        	}
        	if(!flag) break;

        	if(ch1 != '?'){
        		for(int j = i; j < n; j += k){
        			s[j] = ch1;
        		}
        	}
        }

        if(!flag) cout << "NO" << "\n";
        else{
        	int what = 0, zero = 0, one = 0;
        	for(int i = 0; i < k; i++){
        		if(s[i] == '0') zero++;
        		if(s[i] == '1') one++;
        		if(s[i] == '?') what++;
        	}
        	if(zero <= (k/2) && one <= (k/2)) cout << "YES" << "\n";
        	else cout << "NO" << "\n";
        }
    }

    return 0;
}