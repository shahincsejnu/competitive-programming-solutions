#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5], flag = 0;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(i == arr[i]) flag++;
    }

    int ans;

    if(flag == n) ans = 0;
    else if(flag == 0) ans = 1;
    else{
        int i = 1;
        for(; i <= n; i++){
            if(i == arr[i]) flag--;
            else break;
        }
        for(int j = n; j > i; j--){
            if(j == arr[j]) flag--;
            else break;
        }

        if(!flag) ans = 1;
        else ans = 2;
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}

