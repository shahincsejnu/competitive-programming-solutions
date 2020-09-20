#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    lli A, B;

    cin >> A >> B;

    lli a = A, b = 0, c = 9;

    while(c <= B){
        b++;
        c *= 10;
        c += 9;
    }

    cout << a * b << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}