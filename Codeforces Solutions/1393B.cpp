#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int,int> mp1, mp2;

    for(int i = 1; i <= n; i++){
        int val;
        cin >> val;
        if(mp1[val]) mp2[mp1[val]]--;
        if(mp2[mp1[val]] == 0) mp2.erase(mp1[val]);
        mp1[val]++;
        mp2[mp1[val]]++;
    }

    int q;
    cin >> q;

    while(q--){
        char ch;
        int val;
        cin >> ch >> val;

        if(ch == '+'){
            mp2[mp1[val]]--;
            if(mp2[mp1[val]] == 0) mp2.erase(mp1[val]);
            mp1[val]++;
            mp2[mp1[val]]++;
        }
        else{
            mp2[mp1[val]]--;
            if(mp2[mp1[val]] == 0) mp2.erase(mp1[val]);
            mp1[val]--;
            mp2[mp1[val]]++;
        }

        int first_mx_cnt = -1, second_mx_cnt = -1, third_mx_cnt = -1;

        map<int,int> :: iterator it;
        it = mp2.end();
        it--;
        int l = mp2.size();

        for(int i = 0; i < min(3, l); it--, i++){
            if(first_mx_cnt != -1 && second_mx_cnt != -1 && third_mx_cnt != -1) break;

            int d = it->second;

            if(d == 1){
                if(first_mx_cnt == -1) first_mx_cnt = it->first;
                else if(second_mx_cnt == -1) second_mx_cnt = it->first;
                else third_mx_cnt = it->first;
            }
            else if(d == 2){
                if(first_mx_cnt == -1){
                    first_mx_cnt = it->first;
                    second_mx_cnt = it->first;
                }
                else if(second_mx_cnt == -1){
                    second_mx_cnt = it->first;
                    third_mx_cnt = it->first;
                }
                else third_mx_cnt = it->first;
            }
            else{
                if(first_mx_cnt == -1){
                    first_mx_cnt = it->first;
                    second_mx_cnt = it->first;
                    third_mx_cnt = it->first;
                }
                else if(second_mx_cnt == -1){
                    second_mx_cnt = it->first;
                    third_mx_cnt = it->first;
                }
                else third_mx_cnt = it->first;
            }
        }

        if((first_mx_cnt >= 8) || ((first_mx_cnt >= 4) && (second_mx_cnt >= 4)) || ((first_mx_cnt >= 6) && (second_mx_cnt >= 2)) || ((first_mx_cnt >= 4) && (second_mx_cnt >= 2) && (third_mx_cnt >= 2))){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
}

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--) solve();

    return 0;
}