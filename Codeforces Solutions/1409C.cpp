#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;

    cin >> t;

    while(t--){
        int n, x, y;

        cin >> n >> x >> y;

        int d = y-x;
        
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        
        int val = -1, total = 2;

        for(int i = 1; i <= d; i++){
            if(d%i) continue;
            int cnt = d/i;
            cnt--;
            
            if(cnt > (n-2)) continue;

            for(int j = x+i; j < y; j += i) {total++; v.push_back(j);}
            val = i;
            break;
        }
        x -= val;

        while(total < n && x >= 1){
            v.push_back(x);
            total++;
            x -= val;
        }
        
        y += val;

        while(total < n){
            v.push_back(y);
            total++;
            y += val;
        }
        
        sort(v.begin(), v.end());
        
        for(int i = 0; i < n; i++) cout << v[i] << " \n"[i==n-1];
    }

    return 0;
}