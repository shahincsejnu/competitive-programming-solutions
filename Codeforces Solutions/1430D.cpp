#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v;
    vector<pair<int,int>> v2;

    int one = 0, zero = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            if(zero){
                v.push_back(zero);
                zero = 0;
            }
            one++;
        }
        else{
            if(one){
                v.push_back(one);
                one = 0;
            }
            zero++;
        }
    }

    if(zero) v.push_back(zero);
    if(one) v.push_back(one);

    int ans = 0, l = v.size();

    for(int i = 0; i < l; i++){
        if(v[i] > 1) v2.push_back({v[i], i});
    }

    int sz = v2.size(), idx = 1e6, blck = 1e6;
    if(sz){
        idx = 0;
        blck = v2[0].second;
    }

    for(int i = 0; i < l; i++){
        int cnt = v[i];
        ans++;

        if(blck == i && idx < sz){
            cnt = v2[idx].first;
            idx++;
            blck = v2[idx].second;
        }

        if(cnt == 1){
            if(idx >= sz) i++;
            else{
                v2[idx].first--;
                v[blck]--;
                if(v2[idx].first == 1){
                    idx++;
                    if(idx < sz) blck = v2[idx].second;
                }
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}