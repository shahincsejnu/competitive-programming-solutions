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

        map<char, int> mp;
        string s;

        for(int i = 1; i <= n; i++){
            cin >> s;
            int l = s.size();
            for(int j = 0; j < l; j++) mp[s[j]]++;
        }
        
        bool flag = true;

        for(auto it: mp){
            int val = it.second;
            if(val%n) {flag = false; break;}
        }

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}