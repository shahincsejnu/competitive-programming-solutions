#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> odd, even;
    int val;
    for(int i = 1; i <= n; i++){
        cin >> val;
        if(val%2) odd.push_back(val);
        else even.push_back(val);
    }

    int l1 = odd.size(), l2 = even.size();

    for(int i = 0; i < l1; i++) cout << odd[i] << " ";
    for(int i = 0; i < l2; i++) cout << even[i] << " ";
    cout << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}