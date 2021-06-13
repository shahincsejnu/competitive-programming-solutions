#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;

    for(int i = 0; i < n; i++){
        for(int j = i, cnt = 1; j < n; j++, cnt++){
            mp[s.substr(i, cnt)]++;
        }
    }

    for(char ch1 = 'a'; ch1 <= 'z'; ch1++){
        string ss = "";
        ss += ch1;
        if(!mp[ss]){
            cout << ss << "\n";
            return;
        }
    }

    for(char ch1 = 'a'; ch1 <= 'z'; ch1++){
        for(char ch2 = 'a'; ch2 <= 'z'; ch2++){
            string ss = "";
            ss += ch1;
            ss += ch2;
            if(!mp[ss]){
                cout << ss << "\n";
                return;
            }
        }
    }

    for(char ch1 = 'a'; ch1 <= 'z'; ch1++){
        for(char ch2 = 'a'; ch2 <= 'z'; ch2++){
            for(char ch3 = 'a'; ch3 <= 'z'; ch3++){
                string ss = "";
                ss += ch1;
                ss += ch2;
                ss += ch3;
                if(!mp[ss]){
                    cout << ss << "\n";
                    return;
                }
            }
        }
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}