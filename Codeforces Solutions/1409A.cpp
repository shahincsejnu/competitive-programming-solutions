#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;

    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int d = abs(a - b);

        int cnt = d/10;
        if(d%10) cnt++;

        cout << cnt << "\n";
    }

    return 0;
}