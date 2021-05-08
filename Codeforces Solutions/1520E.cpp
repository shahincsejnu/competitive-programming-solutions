#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    lli ans = 0, i = 0, j = n-1, left = -1, right = n;

    for(lli k = 0; k < n; k++){
        if(s[k] == '*' && left == -1){
            left = k;
        }
        if(s[k] == '*') right = k;
    }

    if(left == -1 || right == n || left == right){
        cout << 0 << "\n";
        return;
    }
    i = left;
    j = right;

    while(i <= j){
        while(i < n && s[i] == '*') i++;
        while(j >= 0 && s[j] == '*') j--;
        if(i == n || j < 0 || i > j) break;

        lli d1 = i - left, d2 = right-j;

        if(d1 <= d2){
            ans += d1;
            left++;
            i++;
        }
        else{
            ans += d2;
            right--;
            j--;
        }
    }

    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}