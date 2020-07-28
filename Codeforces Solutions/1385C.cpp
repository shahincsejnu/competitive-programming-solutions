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

        int arr[n+5];
        for(int i = 1; i <= n; i++) cin >> arr[i];

        int start = 1, end = n, ans = n, mid;

        while(start <= end){
            mid = (start + end) / 2;

            int prev = 0, i = mid, j = n, flag = 0;

            while(i <= j){
                int val1 = arr[i], val2 = arr[j];

                int val = min(val1, val2);

                if(val < prev) {flag = 1; break;}
                if(val == val1) i++;
                else j--;
                prev = val;
            }

            if(flag) start = mid+1;
            else{
                //cout << mid << "\n";
                ans = mid;
                end = mid-1;
            }
        }

        cout << ans-1 << "\n";
    }
    
    
    return 0;
}
