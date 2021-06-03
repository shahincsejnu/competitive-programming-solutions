#include <bits/stdc++.h>
#define lli long long int
using namespace std;

const int M = 2e3 + 5;
lli n, arr[M], dp[M][M];

lli func(int i, int j)
{
    if(i == j) return dp[i][j] = 0;

    if(dp[i][j] != -1) return dp[i][j];

    return dp[i][j] = (arr[j] - arr[i]) + min(func(i, j-1), func(i+1, j));
}

int main()
{
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> arr[i];

    sort(arr+1, arr+n+1);

    memset(dp, -1, sizeof(dp));

    cout << func(1, n) << "\n";

    return 0;
}