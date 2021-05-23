#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;

    string ss = s;
    sort(ss.begin(), ss.end());

    int n = s.size();
    if(ss[0] == ss[n-1] && ss[0] == 'a'){
        cout << "NO" << "\n";
    }
    else{
        if(s[0] != 'a') s += 'a';
        else if(s[n-1] != 'a') s = 'a' + s;
        else{
            ss = s + 'a';
            n++;
            for(int i = 0; i < n/2; i++){
                if(ss[i] != ss[n-i-1]){
                    cout << "YES" << "\n";
                    cout << ss << "\n";
                    return;
                }
            }

            ss = 'a' + s;
            for(int i = 0; i < n/2; i++){
                if(ss[i] != ss[n-i-1]){
                    cout << "YES" << "\n";
                    cout << ss << "\n";
                    return;
                }
            }

            cout << "NO" << "\n";
            return;
        }

        cout << "YES" << "\n";
        cout << s << "\n";
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}