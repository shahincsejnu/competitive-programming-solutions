#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int l = s.size();

    if(s[l-1] == 's') s += "es";
    else s += 's';
    
    cout << s << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}
