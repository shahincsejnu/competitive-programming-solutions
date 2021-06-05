#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int arr[n+5][m+5], row[n+5], col[m+5];

    for(int i = 1; i <= n; i++){
        row[i] = i;
        for(int j = 1; j <= m; j++){
            col[j] = j;
            cin >> arr[i][j];
        }
    }

    char ch;
    int x, y;

    while(k--){
        cin >> ch >> x >> y;

        if(ch == 'g') cout << arr[row[x]][col[y]] << "\n";
        else if(ch == 'r') swap(row[x], row[y]);
        else swap(col[x], col[y]);
    }
}

int main()
{
    fastio;
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}