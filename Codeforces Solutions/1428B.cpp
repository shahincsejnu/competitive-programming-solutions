#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v;
    map<int, int> bad, mp;
    int cnt = 0, left = 0, right = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '-'){
            if(bad[i] == 0) cnt++;
            if(bad[(i+1)%n] == 0) cnt++;

            bad[i] = 1;
            bad[(i+1)%n] = 1;
        }
        else if(s[i] == '>') right++;
        else left++;
    }

    if(!(left && right)) cnt = n;

    cout << cnt << "\n";
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int tc;

    tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}