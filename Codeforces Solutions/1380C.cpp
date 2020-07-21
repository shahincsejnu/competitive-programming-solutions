#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


void solve(int t_case)
{
    int n, x;
    cin >> n >> x;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    sort(arr+1, arr+n+1);

    int cnt = 0, mx = 0;

    for(int i = n; i >= 1; i--){
        int val = arr[i];
        cnt++;

        int d = x/val;
        if(x%val) d++;

        if(cnt >= d) {mx++; cnt = 0;}
    }

    cout << mx << "\n";
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
