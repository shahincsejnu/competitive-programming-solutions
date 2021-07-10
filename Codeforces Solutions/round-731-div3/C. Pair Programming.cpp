#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;


void solve()
{
    int k, n, m;
    cin >> k >> n >> m;

    int arr[n+5], brr[m+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= m; i++) cin >> brr[i];

    vector<int> v;

    int ii = 1, jj = 1;

    while(ii <= n && jj <= m){
        if(arr[ii] == 0 && brr[jj] == 0){
            v.push_back(arr[ii]);
            v.push_back(brr[jj]);
            ii++;
            jj++;
        }
        else if(arr[ii] == 0 && brr[jj] != 0){
            v.push_back(arr[ii]);
            ii++;
        }
        else if(arr[ii] != 0 && brr[jj] == 0){
            v.push_back(brr[jj]);
            jj++;
        }
        else if(arr[ii] <= brr[jj]){
            v.push_back(arr[ii]);
            ii++;
        }
        else{
            v.push_back(brr[jj]);
            jj++;
        }
    }

    while(ii <= n){
        v.push_back(arr[ii]);
        ii++;
    }
    while(jj <= m){
        v.push_back(brr[jj]);
        jj++;
    }

    int l = n+m, flag = 0;

    for(int i = 0; i < l; i++){
        if(v[i] > k){
            flag = 1;
            break;
        }
        else if(v[i] == 0) k++;
    }

    if(flag){
        cout << -1 << "\n";
        return;
    }

    for(int i = 0; i < l; i++) cout << v[i] << " \n"[i==l-1];
}

int main()
{
    fastio;
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}