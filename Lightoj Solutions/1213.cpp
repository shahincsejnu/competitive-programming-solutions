#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
 
lli Big_Mod(lli base, lli power, lli mod)
{
    if(power == 0) return 1;
    if(power == 1) return base;
 
    lli val = Big_Mod(base, power/2, mod) % mod;
 
    val = (val * val) % mod;
 
    if(power%2) val = (val * base) % mod;
 
    return val;
}
 
void solve(int t_case)
{
    lli n, k, mod;
    cin >> n >> k >> mod;
 
    lli arr[n+5], sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum += arr[i];
        sum %= mod;
    }
 
    sum = ((k%mod) * sum) % mod;
 
    lli val = Big_Mod(n, k-1, mod);
    sum = (val * sum) % mod;
   
    cout << "Case " << t_case << ": " << sum << "\n";
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
