#include <bits/stdc++.h>
#define lli long long int
#define timesave ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


void solve(int t_case)
{
    int n;
    cin >> n;

    string s;

    cin >> s;

    stack<char> st;

    for(int i = 0; i < n; i++){
        if(st.empty()) st.push(s[i]);
        else if(st.top() == '(' && s[i] == ')') st.pop();
        else st.push(s[i]);
    }

    int l = st.size();

    cout << l/2 << "\n";
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