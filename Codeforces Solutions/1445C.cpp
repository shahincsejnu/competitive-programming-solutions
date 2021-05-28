#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<lli> prime;
int sz;

void Init()
{
    bool check[100010];

    for(lli i = 2; i*i <= 100000; i++){
        if(!check[i]){
            for(lli j = i+i; j <= 100000; j += i){
                check[j] = true;
            }
        }
    }

    for(lli i = 2; i <= 100000; i++){
        if(!check[i]) prime.push_back(i);
    }
    sz = prime.size();
}

void solve()
{
    lli p, q;
    cin >> p >> q;

    lli ans = -1;

    if(q > p || p%q) ans = p;
    else{
        vector<lli> div;
        lli qq = q;

        for(int i = 0; i < sz && prime[i]*prime[i] <= q; i++){
            lli val = prime[i];

            if(q%val == 0){
                while(q%val == 0) q /= val;
                div.push_back(val);
            }
        }
        if(q > 1) div.push_back(q);

        int sz2 = div.size();

        for(int i = 0; i < sz2; i++){
            lli val = div[i], pp = p;

            while(pp%val == 0){
                if(pp%qq) break;
                pp /= val;
            }
            ans = max(ans, pp);
        }
    }

    cout << ans << "\n";
}

int main()
{
    fastio;
    Init();

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}