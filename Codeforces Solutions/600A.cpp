#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;

    vector<string> v;
    s += ";";

    string ss = "";
    int n = s.size();

    for(int i = 0; i < n; i++){
        if(s[i] == ',' || s[i] == ';'){
            if(ss.size() == 0) ss += "#";

            v.push_back(ss);
            ss = "";
        }
        else ss += s[i];
    }


    int sz = v.size();
    string a = "\"", b = "\"";
    int cnt1 = 0, cnt2 = 0, flag1 = 0, flag2 = 0;

    for(int i = 0; i < sz; i++){
        int l = v[i].size();

        int flag = 0;

        if(l > 1 && v[i][0] == '0'){
            if(cnt2){
                b += ",";
                b += v[i];
                cnt2++;
            }
            else{
                b += v[i];
                cnt2++;
            }
            flag2 = 1;
            continue;
        }

        if(l == 1 && v[i][0] == '#'){
            if(cnt2){
                b += ",";
                cnt2++;
            }
            else cnt2++;
            flag2 = 1;
            continue;
        }

        for(int j = 0; j < l; j++){
            if(v[i][j] >= '0' && v[i][j] <= '9');
            else {flag = 1; break;}
        }

        if(flag){
            if(cnt2){
                b += ",";
                b += v[i];
                cnt2++;
            }
            else{
                b += v[i];
                cnt2++;
            }
            flag2 = 1;
        }
        else{
            if(cnt1){
                a += ",";
                a += v[i];
                cnt1++;
            }
            else{
                a += v[i];
                cnt1++;
            }
            flag1 = 1;
        }
    }

    a += "\"";
    b += "\"";

    if(flag1) cout << a << "\n";
    else cout << "-" << "\n";

    if(flag2) cout << b << "\n";
    else cout << "-" << "\n";

    return 0;
}