#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, vector<lli>> mp;

    lli arr[n+5], val;
    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 1; i <= n; i++){
        cin >> val;
        mp[arr[i]].push_back(val);
    }

    set<int> st;
    map<int, vector<lli>> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        sort(it->second.begin(), it->second.end());
        int sz = it->second.size();
        st.insert(it->first);
        for(int i = 1; i < sz; i++) it->second[i] = it->second[i] + it->second[i-1];
    }

    set<int> :: iterator it2;

    for(int i = 1; i <= n; i++){
        lli total = 0;

        vector<int> v;
        for(it2 = st.begin(); it2 != st.end(); it2++){
            int ms = mp[*it2].size();
            if(i > ms){
                v.push_back(*it2);
                continue;
            }

            total += mp[*it2][ms-1] * 1ll;

            ms %= i;
            if(!ms) continue;
            total -= mp[*it2][ms-1] * 1ll;
        }

        for(auto val : v){
            st.erase(val);
        }

        cout << total << " \n"[i==n];
    }
}

int main()
{
    fastio;

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}