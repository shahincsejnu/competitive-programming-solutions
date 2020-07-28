#include <bits/stdc++.h>
#define lli long long int
using namespace std;

string s;

int call(int start, int end, char ch)
{
    if(start == end){
        if(s[start-1] == ch) return 0;
        else return 1;
    }

    int cnt1 = 0, cnt2 = 0, n = end-start+1;

    for(int i = start; i < start+(n/2); i++){
        if(s[i-1] != ch) cnt1++;
    }
    for(int i = start+(n/2); i <= end; i++){
        if(s[i-1] != ch) cnt2++;
    }
    ch++;
    cnt1 += call(start+(n/2), end, ch);
    cnt2 += call(start, start+(n/2)-1, ch);

    int ans = min(cnt1, cnt2);

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cin >> s;

        int ans = call(1, n, 'a');

        cout << ans << "\n";
    }
    
    
    return 0;
}
