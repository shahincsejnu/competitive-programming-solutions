#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


void solve(int t_case)
{
    int n;
    cin >> n;

    int arr[n+5];
    map<int,int> mp;
    for(int i = 0; i < n; i++) {cin >> arr[i]; mp[arr[i]] = 1;}

    //sort(arr, arr+n);

    int q;
    cin >> q;

    while(q--){
        int x, y;
        cin >> x >> y;

        int f = x+y;

        if(mp[f]) {cout << -1 << "\n"; continue;}

        int idx = upper_bound(arr, arr+n, f) - arr;
        cout << idx << "\n";
    }
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //timesave;

    int tc = 1, t_case = 1;
    cin >> tc;
    while(tc--) solve(t_case++);
 
    return 0;
}
