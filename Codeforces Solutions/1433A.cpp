#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int x;
    cin >> x;

    int cnt = 0, val = 1;

    vector<int> v = {1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33, 333, 3333, 4, 44, 444, 4444, 5, 55, 555, 5555,
                     6, 66, 666, 6666, 7, 77, 777, 7777, 8, 88, 888, 8888, 9, 99, 999, 9999};


    for(int i = 0; ; i++){
        cnt += val;
        val++;
        if(val > 4) val = 1;

        if(x == v[i]) break;
    }

    cout << cnt << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}