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

        int arr[n+5], cnt = 0;
        for(int i = 1; i <= n; i++) cin >> arr[i];

        for(int i = 1; i < n; i++){
            if(arr[i] > 1) break;
            cnt = i;
        }

        if(cnt%2) cout << "Second" << "\n";
        else cout << "First" << "\n";
    }
    
    return 0;
}
