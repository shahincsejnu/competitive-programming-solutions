#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    vector<int> v1, v2;

    int mn = 2e9;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }

    for(int i = 1; i <= n; i++){
        if((arr[i]%mn) == 0) {v1.push_back(arr[i]); arr[i] = -1;}
    }

    sort(v1.begin(), v1.end());

    int l = v1.size();

    for(int i = 1, j = 0; i <= n and j < l; i++){
        if(arr[i] == -1){
            arr[i] = v1[j];
            j++;
        }
    }

    int flag = 0;

    for(int i = 2; i <= n; i++){
        if(arr[i] < arr[i-1]) {flag = 1; break;}
    }

    if(flag) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}