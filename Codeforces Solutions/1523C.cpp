#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    vector<int> vec[n+5];

    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 1; i <= n; i++){
        if(i == 1) vec[i].push_back(1);
        else{
            int d = arr[i], l = vec[i-1].size(), temp = 0;

            if(d == 1){
                for(int j = 0; j < l; j++) vec[i].push_back(vec[i-1][j]);
                vec[i].push_back(1);
                continue;
            }
            else{
                for(int j = l-1; j >= 0; j--){
                    int val = vec[i-1][j];
                    if((val+1) == d){
                        for(int jj = 0; jj < j; jj++) vec[i].push_back(vec[i-1][jj]);
                        vec[i].push_back(d);
                        temp = 1;
                        break;
                    }
                }
            }

            if(!temp) vec[i].push_back(d);
        }
    }

    string ss = "";
    for(int i = 1; i <= n; i++){
        ss = "";
        int l = vec[i].size();

        for(int j = 0; j < l; j++){
            ss += to_string(vec[i][j]);

            if(j != l-1) ss += ".";
        }

        cout << ss << "\n";
    }
}

int main()
{
    fastio;
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}