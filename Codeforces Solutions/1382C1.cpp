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

        for(int i = n-1; i >= 0; i--){
            if(a[i] != b[i]){
                if(a[0] == b[i]) ans.push_back(1);

                reverse(a.begin(), a.begin()+i+1);

                for(int j = 0; j < i; j++){
                    if(a[j] == '0') a[j] = '1';
                    else a[j] = '0';
                }
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
