#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool game(int n)
{
    if(n%2) return false;
    if(n & (n-1)) return true;

    int cnt = 0;
    while(n%2 == 0) {n/= 2; cnt++;}

    return cnt%2 == 0;
}

void solve()
{
    int n;
    cin >> n;

    if(game(n)) cout << "Alice" << "\n";
    else cout << "Bob" << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}