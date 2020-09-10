#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void OJ()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int sum = arr[0] + arr[1], flag = 0;

    for(int i = 2; i < n; i++){
        if(arr[i] >= sum){
            cout << 1 << " " << 2 << " " << i+1 << "\n";
            flag = 1;
            break;
        }
    }
    if(!flag) cout << -1 << "\n";
}

int main()
{
    OJ();
    
    int tc = 1;
    cin >> tc;
    
    while(tc--) solve();

    return 0;
}