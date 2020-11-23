#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
    int t;

    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int first = 0, third = 0, ans = 0;

        int l = s.size();

        for(int i = 0; i < l; i++){
            if(s[i] == '(') first++;
            else if(s[i] == '[') third++;
            else if(s[i] == ')' && first) {first--; ans++;}
            else if(s[i] == ']' && third) {third--; ans++;}
        }

        cout << ans << "\n";
    }

    return 0;
}