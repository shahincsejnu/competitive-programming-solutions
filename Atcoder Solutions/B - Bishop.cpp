#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int w, h;
    cin >> h >> w;

    long long int tot = w*h;

    long long int ans = tot/2;
    if(tot%2) ans++;

    if(h == 1 || w == 1) ans = 1;

    cout << ans << "\n";

    return 0;
}