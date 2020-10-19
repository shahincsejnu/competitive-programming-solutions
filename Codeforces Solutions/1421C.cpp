#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    string s;

    cin >> s;

    int n = s.size();

    cout << 3 << "\n";

    cout << "R" << " " << n-1 << "\n";
    cout << "L" << " " << n << "\n";
    cout << "L" << " " << 2 << "\n";
}

int main()
{
    int tc;

    tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}