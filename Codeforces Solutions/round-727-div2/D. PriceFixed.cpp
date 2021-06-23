#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<lli, lli>> v;
    lli a, b;

    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        v.push_back({b, a});
    }

    sort(v.begin(), v.end());

    lli ans = 0, cur = 0, aa, bb;
    int i = 0, j = n-1;

    while(i <= j){
        a = v[i].second;
        b = v[i].first;
        aa = v[j].second;
        bb = v[j].first;

        if(i == j){
            if(cur >= b) ans += a;
            else{
                lli d = b - cur;
                lli mn = min(a, d);
                a -= mn;
                d -= mn;
                cur += mn;
                ans += (2*mn);

                if(a) ans += a;
            }
            break;
        }
        else{
            if(cur >= b){
                cur += a;
                ans += a;
                i++;
            }
            else{
                lli d = b - cur;
                lli mn = min(aa, d);
                aa -= mn;
                d -= mn;
                cur += mn;
                ans += (2*mn);

                if(!aa) j--;
                else v[j].second = aa;
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}