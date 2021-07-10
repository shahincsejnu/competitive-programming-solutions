#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;


void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n+5] = {0}, brr[k+5];

    for(int i = 1; i <= k; i++) cin >> brr[i];

    for(int i = 1; i <= k; i++){
        int val;
        cin >> val;

        arr[brr[i]] = val;
    }

    int pref[n+5], suf[n+5];
    for(int i = 0; i <= n+2; i++){
        pref[i] = 2e9;
        suf[i] = 2e9;
    }

    int min_hand = 2e9, idx = -1;

    for(int i = 1; i <= n; i++){
        if(arr[i]){
            if(idx == -1){
                idx = i;
                min_hand = arr[i];
                pref[i] = arr[i];
            }
            else{
                int d = min_hand + (i - idx);
                if(d > arr[i]){
                    min_hand = arr[i];
                    idx = i;
                    pref[i] = arr[i];
                }
                else pref[i] = d;
            }
            continue;
        }

        if(idx != -1) pref[i] = min(pref[i], min_hand + (i - idx));
        else pref[i] = min(pref[i], min_hand);
    }

    min_hand = 2e9;
    idx = -1;

    for(int i = n; i >= 1; i--){
        if(arr[i]){
            suf[i] = 0;
            if(idx == -1){
                idx = i;
                min_hand = arr[i];
                suf[i] = arr[i];
            }
            else{
                int d = min_hand + (idx - i);
                if(d > arr[i]){
                    min_hand = arr[i];
                    idx = i;
                    suf[i] = arr[i];
                }
                else suf[i] = d;
            }
            continue;
        }

        if(idx != -1) suf[i] = min(suf[i], min_hand + (idx - i));
        else suf[i] = min(suf[i], min_hand);
    }

    for(int i = 1; i <= n; i++) cout << min(suf[i], pref[i]) << " \n"[i==n];
}

int main()
{
    fastio;
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}