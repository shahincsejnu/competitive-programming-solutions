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
        lli a, b, x, y, n;

        cin >> a >> b >> x >> y >> n;

        lli aa = a, bb = b, nn = n, aaa = a, bbb = b;

        a = max(x, a-n);
        n -= (aa - a);
        b = max(y, b-n);

        bb = max(y, bb-nn);
        nn -= (bbb - bb);
        aa = max(x, aa-nn);

        cout << min(a*b, aa*bb) << "\n";
    }

    return 0;
}