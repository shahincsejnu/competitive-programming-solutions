#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve()
{
    int a, b, aa = 0, bb = 0;
    cin >> a >> b;

    string s;
    cin >> s;
    int n = a+b, nn = n/2, temp = 0;

    for(int i = 0; i < nn; i++){
        if(s[i] == s[n-i-1]) continue;
        if(s[i] != '?' && s[n-i-1] != '?') {temp = 1; break;}
        if(s[i] != '?') s[n-i-1] = s[i];
        else s[i] = s[n-i-1];
    }

    if(temp){
        cout << -1 << "\n";
        return;
    }

    int what = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0')  aa++;
        else if(s[i] == '1') bb++;
        else what++;
    }

    int ad = a-aa, bd = b-bb;

    if(what%2 && ad%2) {what--; ad--; s[nn] = '0';}
    else if(what%2 && bd%2) {what--; bd--; s[nn] = '1';}

    if(ad < 0 || bd < 0 || what%2 || ad%2 || bd%2 || (ad+bd) != what){
        cout << -1 << "\n";
        return;
    }

    for(int i = 0; i < nn; i++){
        if(s[i] == '?'){
            if(ad){
                ad -= 2;
                s[i] = '0';
                s[n-i-1] = '0';
            }
            else if(bd){
                bd -= 2;
                s[i] = '1';
                s[n-i-1] = '1';
            }
            else break;
        }
    }

    cout << s << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}