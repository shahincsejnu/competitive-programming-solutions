#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    lli n, k, x;

    cin >> n >> k >> x;

    lli arr[n+5];

    for(int i = 1; i <= n; i++) cin >> arr[i];

    sort(arr+1, arr+n+1);

    vector<lli> vec;

    for(int i = 2; i <= n; i++){
        if((arr[i] - arr[i-1]) > x) vec.push_back((arr[i] - arr[i-1]-1)/x);
    }

    sort(vec.begin(), vec.end());
    int l = vec.size(), cnt = l;

    for(int i = 0; i < l; i++){
        if(k >= vec[i]) {k -= vec[i]; cnt--;}
        else break;
    }

    cout << cnt+1 << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}