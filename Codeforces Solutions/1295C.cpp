#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    map<char, int> mp;
    map<char, vector<int>> mp2;

    int l1 = s1.size(), l2 = s2.size();

    for(int i = 0; i < l1; i++){
        mp[s1[i]]++;
        mp2[s1[i]].push_back(i);
    }
    for(int i = 0; i < l2; i++){
        if(!mp[s2[i]]){
            cout << -1 << "\n";
            return;
        }
    }

    int cnt = 1, prev, sz = mp2[s2[l2-1]].size();
    prev = mp2[s2[l2-1]][sz-1];

    for(int i = l2-2; i >= 0; i--){
        char ch = s2[i];

        int l3 = mp2[ch].size();
        int idx = upper_bound(mp2[ch].begin(), mp2[ch].end(), prev) - mp2[ch].begin();
        idx--;

        if(idx >= 0 && mp2[ch][idx] == prev) idx--;

        if(idx < 0 || mp2[ch][idx] >= prev){
            cnt++;
            if(idx < 0) prev = mp2[ch][l3-1];
            else{
                idx++;
                while(idx){
                    idx--;
                    i--;
                    if(i < 0 || s2[i] != ch) break;
                }

                if(i >= 0){
                    l3 = mp2[s2[i]].size();
                    prev = mp2[s2[i]][l3-1];
                }
            }
        }
        else prev = mp2[ch][idx];
    }

    cout << cnt << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}