#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void OJ()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    
    sort(arr+1, arr+n+1);
    reverse(arr+1, arr+n+1);

    vector<int> v;
    v.push_back(arr[1]);

    //arr[1] = -1;
    int gcd = arr[1];
    //cout << arr[1] << " " << arr[2] << "\n";
    arr[1] = -1;

    while(1){
        int temp = 0, mx_gcd = 0;

        for(int i = 1; i <= n; i++){
            if(arr[i] == -1) continue;
            int gcd2 = __gcd(gcd, arr[i]);
            //cout << gcd2 << " " << i << " ";
            if(gcd2 > mx_gcd){
                mx_gcd = gcd2;
                temp = i;
            }
        }
        //cout << "\n";
        if(temp == 0) break;

        v.push_back(arr[temp]);
        arr[temp] = -1;
        gcd = mx_gcd;
    }

    int l = v.size();
    for(int i = 0; i < l; i++) cout << v[i] << " \n"[i==l-1];
}

int main()
{
    OJ();
    
    int tc = 1;
    cin >> tc;
    
    while(tc--) solve();

    return 0;
}