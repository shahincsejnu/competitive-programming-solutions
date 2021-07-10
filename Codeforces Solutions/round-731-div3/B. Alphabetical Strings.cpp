#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;


void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    char ch = 'a' + (n-1);

    int i = 0, j = n-1;
    bool temp = true;

    while(i <= j){
        if(s[i] == ch) i++;
        else if(s[j] == ch) j--;
        else{
            temp = false;
            break;
        }

        if(ch == 'a' && (i <= j)){
            temp = false;
            break;
        }
        ch--;
    }

    if(temp) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    fastio;
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}