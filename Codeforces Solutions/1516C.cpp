#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, arr[105], dp[105][100005], total, badpos, sum;

bool func(int pos, int val)
{
    if(pos == badpos) pos++;

    if(pos > n){
        if(val == total){
            return true;
        }
        return false;
    }
    if(val > total) return false;

    if(dp[pos][val] != -1) return dp[pos][val];

    bool flag = func(pos+1, val+arr[pos]);

    flag = flag || func(pos+1, val);

    return dp[pos][val] = flag;
}

void solve()
{
    fastio;

    cin >> n;

    total = 0;
    int mnidx = -1, mn = 1e9;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(mn > arr[i]){
            mn = arr[i];
            mnidx = i;
        }
        total += arr[i];
        sum += arr[i];
    }

    if(total%2) cout << 0 << "\n";
    else{
        total /= 2;
        memset(dp, -1, sizeof(dp));
        badpos = n+100;

        if(func(1, 0)){
            for(int i = 1; i <= n; i++){
                badpos = i;
                total = sum;
                total -= arr[badpos];

                if(total%2){
                    cout << 1 << "\n";
                    cout << badpos << "\n";
                    return;
                }

                total /= 2;

                memset(dp, -1, sizeof(dp));

                if(!func(1, 0)){
                    cout << 1 << "\n";
                    cout << badpos << "\n";
                    return;
                }
            }

        }
        else cout << 0 << "\n";
    }
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}
