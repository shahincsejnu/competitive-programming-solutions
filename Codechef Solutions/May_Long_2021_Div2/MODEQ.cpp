#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const int M = 5e5 + 5;
vector<int> v[M];

void Init()
{
    for(int i = 1; i <= 500000; i++){
        for(int j = 1; j*j <= i; j++){
            if(i%j == 0){
                int val = i/j;

                v[i].push_back(j);
                if(val != j) v[i].push_back(val);
            }
        }
    }

    for(int i = 1; i <= 500000; i++) sort(v[i].begin(), v[i].end());
}

void solve()
{
    int n, m;
    cin >> n >> m;

    lli ans = 0;
    for(int i = 2; i <= n; i++){
        int x = m - (m%i);

        if(x == 0) ans += i-1;
        else{
            lli idx = lower_bound(v[x].begin(), v[x].end(), i) - v[x].begin();
            ans += idx;
        }
    }

    cout << ans << "\n";
}

int main()
{
    //fastio;

    Init();

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}
