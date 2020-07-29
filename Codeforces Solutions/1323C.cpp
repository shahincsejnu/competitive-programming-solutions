#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void solve(int t_case)
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
 
    for(int i = 0; i < n; i++){
        if(s[i] == '(') cnt++;
        else cnt--;
    }
 
    if(cnt) cout << -1 << "\n";
    else{
        cnt = 0;
        int first_neg_prev = -1, ans = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '(') cnt++;
            else cnt--;

            if(cnt < 0 && first_neg_prev == -1) first_neg_prev = i;

            if(cnt == 0 && first_neg_prev != -1){
                ans += (i - first_neg_prev + 1);
                first_neg_prev = -1;
            }
        }

        cout << ans << "\n";
    }
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //timesave;

    int tc = 1, t_case = 1;
    //cin >> tc;
    while(tc--) solve(t_case++);
 
    return 0;
}
