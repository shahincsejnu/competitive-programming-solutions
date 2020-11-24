#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s1, s2;
    cin >> s1 >> s2;

    map<char,int> mp1, mp2;

    for(int i = 0; i < n; i++) mp1[s1[i]]++;
    for(int i = 0; i < n; i++) mp2[s2[i]]++;

    for(char ch = 'a'; ch <= 'z'; ch++){
        int val1 = mp1[ch], val2 = mp2[ch];

        if(!val1 && !val2) continue;
        if(val1 < val2) break;

        val1 -= val2;
        mp2[ch] = 0;
        mp1[ch] = val1;

        if(!val1) continue;
        if(val1 < k) break;
        if(val1%k) break;

        for(char ch2 = ch+1; ch2 <= 'z'; ch2++){
            val2 = mp2[ch2];

            if(val2){
                if(val1 >= val2){
                    val1 -= val2;
                    mp2[ch2] = 0;
                    mp1[ch] = 0;
                    mp1[ch2] += val1;
                }
                else{
                    val2 -= val1;
                    mp2[ch2] = val2;
                    mp1[ch] = 0;
                }
                break;
            }
        }
    }

    bool flag = true;

    for(char ch = 'a'; ch <= 'z'; ch++){
        if(mp1[ch] || mp2[ch]){
            flag = false;
            break;
        }
    }

    if(flag) cout << "Yes" << "\n";
    else cout << "No" << "\n";
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}