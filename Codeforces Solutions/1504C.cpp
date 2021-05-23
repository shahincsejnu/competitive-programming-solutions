#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') zero++;
    }

    if(s[0] == '0' || s[n-1] == '0' || zero%2) cout << "NO" << "\n";
    else{
        int one = n - zero, flag = 1;
        one /= 2;

        string s1 = "", s2 = "";
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                if(flag == 1) {s1 += '('; flag = 2;}
                else {s1 += ')'; flag = 1;}
            }
            else{
                if(one) {s1 += '('; one--;}
                else s1 += ')';
            }
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '1') s2 += s1[i];
            else if(s1[i] == '(') s2 += ')';
            else s2 += '(';
        }

        cout << "YES" << "\n";
        cout << s1 << "\n";
        cout << s2 << "\n";
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}