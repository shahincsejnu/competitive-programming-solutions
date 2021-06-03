#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int sz = s.size(), mx = 0, cnt = 0;
    map<char, int> mp;

    for(int i = 0; i < sz; i++){
        mp[s[i]]++;

        mx = max(mx, mp[s[i]]);
    }

    for(char i = '0'; i <= '9'; i++){
        for(char j = '0'; j <= '9'; j++){
            if(i == j) continue;
            cnt = 0;

            int temp = 0;
            for(int k = 0; k < sz; k++){
                if(s[k] == i && temp == 0){
                    cnt++;
                    temp = 1;
                }
                else if(s[k] == j && temp == 1){
                    cnt++;
                    temp = 0;
                }
            }

            if(temp) cnt--;
            mx = max(mx, cnt);
        }
    }

    cout << sz - mx << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}