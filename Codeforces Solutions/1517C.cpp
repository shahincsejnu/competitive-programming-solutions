#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, arr[505], brr[505][505];
    memset(brr, 0, sizeof(brr));

    cin >> n;

    for(int i = 1; i <= n; i++) cin >> arr[i];

    int x , y, baki, val;

    for(int i = 1; i <= n; i++){
        baki = arr[i];
        x = i;
        y = i;
        val = arr[i];

        while(baki){
            brr[x][y] = val;
            baki--;

            if(y-1 >= 1 && !brr[x][y-1]) y--;
            else if(x+1 <= n && !brr[x+1][y]) x++;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << brr[i][j] << " \n"[j==i];
        }
    }
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}