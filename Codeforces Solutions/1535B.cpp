#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int val, arr[n+5];
    vector<int> v1, v2;
    for(int i = 1; i <= n; i++){
        cin >> val;
        if(val%2 == 0) v1.push_back(val);
        else v2.push_back(val);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int l1 = v1.size(), l2 = v2.size(), j = 1;
    for(int i = 0; i < l1; i++) {arr[j] = v1[i]; j++;}
    for(int i = 0; i < l2; i++) {arr[j] = v2[i]; j++;}

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        if(arr[i]%2 == 0){
            cnt += (n-i);
            continue;
        }
        for(int j = i+1; j <= n; j++){
            int gcd = __gcd(arr[i], 2*arr[j]);

            if(gcd > 1) cnt++;
        }
    }

    cout << cnt << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}