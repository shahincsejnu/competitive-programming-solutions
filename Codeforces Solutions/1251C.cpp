#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<int> odd, even;
    string ss = "";

    for(int i = 0; i < n; i++){
        if((s[i]-'0')%2) odd.push_back((s[i]-'0'));
        else even.push_back((s[i]-'0'));
    }

    int l1 = odd.size(), l2 = even.size();
    int i = 0, j = 0;

    while(i < l1 && j < l2){
        if(odd[i] <= even[j]){
            ss += (odd[i] + '0');
            i++;
        }
        else{
            ss += (even[j] + '0');
            j++;
        }
    }

    while(i < l1){
        ss += (odd[i] + '0');
        i++;
    }
    while(j < l2){
        ss += (even[j] + '0');
        j++;
    }

    cout << ss << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}