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
    string s;
    cin >> s;

    string temp = "";
    int alice = 0, flag = 0, l;

    while(1){
        int cnt = 0, mx_cnt = 0, mx_l = -1, mx_r = -1, d_l = -1;
        l = s.size();

        for(int i = 0; i < l; i++){
            if(s[i] == '0') cnt = 0;
            else if(cnt == 0) {d_l = i; cnt++;}
            else cnt++;

            if(cnt > mx_cnt){
               mx_cnt = cnt;
               mx_l = d_l;
               mx_r = i;
            }
        }

        if(mx_l == -1) break;

        temp = "";
        for(int i = 0; i < l; i++){
            if(i >= mx_l && i <= mx_r) continue;
            temp += s[i];
        }

        s = temp;

        if(!flag) alice += mx_cnt;
        flag = !flag;
    }

    cout << alice << "\n";
}

int main()
{
    OJ();
    
    int tc = 1;
    cin >> tc;
    
    while(tc--) solve();

    return 0;
}