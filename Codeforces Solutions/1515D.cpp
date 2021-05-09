#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    int arr[n+5], nl = l, nr = r;
    map<int,int> mp1, mp2;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];

        if(i <= l) mp1[arr[i]]++;
        else{
            if(mp1[arr[i]]){
                nr--;
                nl--;
                mp1[arr[i]]--;
            }
            else{
                mp2[arr[i]]++;
            }
        }
    }

    if(nl == nr) cout << nl << "\n";
    else{
        vector<pair<int,int>> v1, v2;
        for(auto it : mp1){
            v1.push_back({it.second, it.first});
        }
        for(auto it: mp2){
            v2.push_back({it.second, it.first});
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        int l1 = v1.size(), l2 = v2.size(), cnt = 0;

        if(nl > nr){
            int dd = (nl + nr)/2;
            dd = nl-dd;

            for(int i = l1-1; i >= 0; i--){
                if(dd == 0) break;
                int freq = v1[i].first;
                int can = freq/2;
                if(can >= dd){
                    nl -= 2*dd;
                    cnt += dd;
                    break;
                }
                else{
                    nl -= 2*can;
                    cnt += can;
                    dd -= can;
                }
            }
        }
        else{
            int dd = (nl + nr) / 2;
            dd = nr - dd;

            for(int i = l2-1; i >= 0; i--){
                if(dd == 0) break;
                int freq = v2[i].first;
                int can = freq/2;

                if(can >= dd){
                    nr -= 2*dd;
                    cnt += dd;
                    break;
                }
                else{
                    nr -= 2*can;
                    cnt += can;
                    dd -= can;
                }
            }
        }

        int mid = (nl + nr) / 2;
        int ans = abs(nl-mid) + mid + cnt;

        cout << ans << "\n";
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}