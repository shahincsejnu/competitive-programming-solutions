#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    a += b;

    int val = 0;
    int l = a.size();

    for(int i = 0; i < l; i++){
        val *= 10;
        val += a[i]-'0';
    }

    int sq = sqrt(val);

    if((sq*sq) == val) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}