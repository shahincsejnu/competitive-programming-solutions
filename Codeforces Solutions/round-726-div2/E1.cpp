#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if(n == 1){
        for(int i = 1; i <= k; i++) cout << s;
        cout << "\n";
        return;
    }

    string ss = "";
    vector<string> v;

    for(int i = 0; i < n; i++){
        ss += s[i];

        int l = ss.size();
        string temp = ss;
        while(l <= k){
            temp += temp;
            l = temp.size();
        }

        string ans = "";
        for(int j = 0; j < k; j++) ans += temp[j];
        v.push_back(ans);
    }

    sort(v.begin(), v.end());
    cout << v[0] << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}