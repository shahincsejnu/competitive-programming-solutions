#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


void solve(int t_case)
{
    int n;
    cin >> n;

    int ans = -1,flag = 0;

    int d = n%6;

    if(d == 3 && n != 3){
        flag = 1;
        //cout << d << "\n";
        n *= 2;
    }

    if(n == 1) ans = 0;
    else if(n == 3) ans = 2;
    else if(n < 6) ans = -1;
    else if(n == 6) ans = 1;
    else if((n%6) == 0){
        int cnt = 0;

        while(n){
            if((n%6)) break;
            n /= 6;

            cnt++;
            if(n == 3){
                ans = cnt+2;
                break;
            }
            else if(n == 1){
                ans = cnt;
                break;
            }

            if((n%6) == 3) {cnt++; n *= 2;}
        }
        if(ans != -1) ans += flag;
        //cout << ans << " " << cnt << " " << n << "\n";
    }

    cout << ans << "\n";
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //timesave;

    int tc = 1, t_case = 1;
    cin >> tc;
    while(tc--) solve(t_case++);

    return 0;
}