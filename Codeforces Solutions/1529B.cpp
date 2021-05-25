#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int val, mn = 2e9, zero = 0;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> val;
        if(val > 0) mn = min(mn, val);
        else v.push_back(val);

        if(val == 0) zero++;
    }
    sort(v.begin(), v.end());
    n = v.size();

    if(mn != 2e9 && zero < 2){
        if(n == 1) n++;
        else{
            int add = 1;
            for(int i = 1; i < n; i++){
                int d = abs(v[i]-v[i-1]);
                if(d < mn) {add = 0; break;}
            }
            n += add;
        }
    }

    cout << n << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}