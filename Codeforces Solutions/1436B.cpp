#include <bits/stdc++.h>
#define lli long long int
using namespace std;

vector<int> v;
map<int,int> mp;

void solve()
{
    int n;
    cin >> n;

    int sz = v.size();

    int arr[n+5][n+5];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            arr[i][j] = 1;
        }
    }

    if(mp[n] == 0){
        int num = -1;
        for(int i = 0; i < sz; i++){
            int val = v[i];
            if(val < n) continue;

            int d = val - n + 1;

            if(!mp[d]){
                num = val - n;
                break;
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i == j) arr[i][j] += num;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    for(int i = 2; i <= 500; i++){
        int val = i, sq = sqrt(val+.5);

        int flag = 0;
        for(int j = 2; j <= sq; j++){
            if(val%j == 0){
                flag = 1;
                break;
            }
        }

        if(!flag){
            v.push_back(i);
            mp[i] = 1;
        }
    }

    while(tc--) solve();

    return 0;
}