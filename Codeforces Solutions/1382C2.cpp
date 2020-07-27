#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        vector<int> ans;

        for(int i = 0; i < n-1; i++){
            if(a[i] != a[i+1]){
                ans.push_back(i+1);
            }
        }

        for(int i = 0; i < n-1; i++) a[i] = a[n-1];

        int cnt = 0;
        for(int i = n-1; i >= 0; i--){
            if(cnt%2){
                if(a[i] == '0') a[i] = '1';
                else a[i] = '0';
            }

            if(a[i] != b[i]){
                cnt++;
                ans.push_back(i+1);
            }
        }

        int l = ans.size();
        cout << l;
        for(int i = 0; i < l; i++) cout << " " << ans[i];
        cout << "\n";
    }
    
    return 0;
}
