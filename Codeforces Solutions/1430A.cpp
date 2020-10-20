#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int d = n/7, dd = n%7;

    int x = -1, y = -1, z = d;

    if(!z){
        if(dd == 3) {x = 1; y = 0;}
        if(dd == 5) {x = 0; y = 1;}
        if(dd == 6) {x = 2; y = 0;}
    }
    else{
        if(dd == 0) {x = 0; y = 0;}
        if(dd == 3) {x = 1; y = 0;}
        if(dd == 5) {x = 0; y = 1;}
        if(dd == 6) {x = 2; y = 0;}
        if(dd == 1) {z--; x = 1; y = 1;}
        if(dd == 2) {z--; x = 3; y = 0;}
        if(dd == 4) {z--; x = 2; y = 1;}
    }

    if(x == -1 || y == -1) cout << -1 << "\n";
    else cout << x << " "  << y << " " << z << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}