#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


void solve(int t_case)
{
    string s;
    cin >> s;

    int P = 0, R = 0, S = 0, l = s.size();

    for(int i = 0; i < l; i++){
        if(s[i] == 'P') P++;
        else if(s[i] == 'R') R++;
        else S++;
    }

    char ch;

    if((P >= R) && (P >= S)) ch = 'S';
    else if((R >= P) && (R >= S)) ch = 'P';
    else ch = 'R';

    for(int i = 0; i < l; i++) cout << ch;
    cout << "\n";
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //timesave;

    int tc = 1, t_case = 1;
    cin >> tc;
    while(tc--) solve(t_case++);
 
    return 0;
}
