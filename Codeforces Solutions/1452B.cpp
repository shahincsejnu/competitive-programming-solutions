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

        lli arr[n+5], sum = 0, mx = 0, ans;

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
            sum += arr[i];
            mx = max(mx, arr[i]);
        }

        ans = sum/(n-1);
        if(sum % (n-1)) ans++;

        ans = max(ans, mx);

        lli res = ((n-1)*ans) - sum;

        cout << res << "\n";
    }

    return 0;
}