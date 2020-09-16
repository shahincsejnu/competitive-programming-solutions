#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5], brr[n+5];
    vector<int> v;

    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= n; i++){
        cin >> brr[i];
        if(brr[i] == 0) v.push_back(arr[i]);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int asi = 0;

    for(int i = 1; i <= n; i++){
        if(brr[i] == 1) cout << arr[i] << " ";
        else {cout << v[asi] << " "; asi++;}
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}