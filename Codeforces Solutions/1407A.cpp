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

    int zero = 0, one = 0;
    int arr[n+5];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] == 0) zero++;
        else one++;
    }

    if(zero >= one){
        int k = zero;
        cout << k << "\n";
        for(int i = 1; i <= k; i++) cout << 0 << " \n"[i==k];
    }
    else{
        int k = one;
        if(k%2) k--;
        cout << k << "\n";
        for(int i = 1; i <= k; i++) cout << 1 << " \n"[i==k];
    }
}

int main()
{
    OJ();
    
    int tc = 1;
    cin >> tc;
    
    while(tc--) solve();

    return 0;
}