#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    lli val, total_pos = 0, cnt = 0, total_neg = 0;
    priority_queue<lli, vector<lli>, greater<lli>> pq;

    for(int i = 1; i <= n; i++){
        cin >> val;

        if(val >= 0){
            cnt++;
            total_pos += val;
        }
        else{
            total_neg += val;

            if((total_pos + total_neg) >= 0){
                cnt++;
                pq.push(val);
            }
            else{
                total_neg -= val;
                if(pq.empty()) {continue;}

                lli val2 = pq.top();
                if(val > val2){
                    pq.pop();
                    total_neg -= val2;
                    total_neg += val;
                    pq.push(val);
                }
            }
        }
    }

    cout << cnt << "\n";
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}