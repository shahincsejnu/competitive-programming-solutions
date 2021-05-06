#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if(n == 2){
        cout << -1 << "\n";
        return;
    }

    int arr[n+5][n+5], now = 1;

    for(int j = 1, i = 1; j <= n; j++){
        for(int x = j, y = i; x <= n && y <= n; x++, y++){
            arr[x][y] = now;
            now++;
        }

        if(i == j) continue;

        for(int x = i, y = j; x <= n && y <= n; x++, y++){
            arr[x][y] = now;
            now++;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}