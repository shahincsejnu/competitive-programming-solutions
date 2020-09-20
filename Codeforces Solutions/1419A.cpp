#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int even_f = 0, odd_f = 0, even_s = 0, odd_s = 0;

    for(int i = 0; i < n; i++){
        if((i+1)%2){
            if((s[i]-'0')%2) odd_f++;
            else even_f++;
        }
        else{
            if((s[i]-'0')%2) odd_s++;
            else even_s++;
        }
    }

    int flag = 0;

    while(1){
        int tot = even_f + odd_f + even_s + odd_s;

        if(tot == 1){
            if(odd_s + odd_f) {flag = 1; break;}
            else {flag = 2; break;}
        }
        else{
            if(flag == 0){
                if(even_f) even_f--;
                else odd_f--;
            }
            else{
                if(odd_s) odd_s--;
                else even_s--;
            }
        }

        flag = !flag;
    }

    cout << flag << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}