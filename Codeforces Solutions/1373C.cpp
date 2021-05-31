#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


void solve(int t_case)
{
    string s;
    cin >> s;

    lli res = 0, flag = 0, l = s.size(), cur = 0, ans = 0;

    lli start = 0, end = l+5, mid;

    while(start <= end){
        mid = (start + end)/2;

        lli val = mid;
        bool ok = true;
        cur = mid;

        for(int i = 0; i < l; i++){
            if(s[i] == '+') cur++;
            else cur--;

            if(cur < 0) {ok = false; break;}
        }

        if(!ok) start = mid+1;
        else{
            ans = mid;
            end = mid-1;
        }
    }

    res = l;
    cur = 0;
    lli asi = 0;

    for(int i = 0; i < l; i++){
        if(asi == ans) break;
        if(s[i] == '+') cur++;
        else cur--;

        if(cur < 0){
            cur = 0;
            asi++;
            res += (i+1);
        }
    }

    cout << res << "\n";
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    timesave;

    int tc = 1, t_case = 1;
    cin >> tc;
    while(tc--) solve(t_case++);

    return 0;
}