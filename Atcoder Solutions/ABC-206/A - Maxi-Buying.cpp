#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    double n;
    cin >> n;

    n *= 1.08;

    int nn = floor(n);

    if(nn == 206) cout << "so-so" << "\n";
    else if(nn > 206) cout << ":(" << "\n";
    else cout << "Yay!" << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}

