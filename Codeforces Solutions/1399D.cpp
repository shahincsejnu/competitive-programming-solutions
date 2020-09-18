#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<int> st0, st1;

    int cnt = 0;
    int arr[n+5] = {0};

    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            if(st1.empty()){
                cnt++;
                arr[i+1] = cnt;
                st0.push(cnt);
            }
            else{
                int val = st1.top();
                st1.pop();
                st0.push(val);
                arr[i+1] = val;
            }
        }
        else{
            if(st0.empty()){
                cnt++;
                arr[i+1] = cnt;
                st1.push(cnt);
            }
            else{
                int val = st0.top();
                st0.pop();
                st1.push(val);
                arr[i+1] = val;
            }
        }
    }

    cout << cnt << "\n";
    for(int i = 1; i <= n; i++) cout << arr[i] << " \n"[i==n];
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}