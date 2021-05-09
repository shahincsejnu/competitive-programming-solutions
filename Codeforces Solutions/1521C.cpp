#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int maxi = n, val;

    for(int i = 1; i < n; i += 2){
        cout << "? " << 1 << " " << i << " " << i+1 << " " << n-1 << "\n";
        cout.flush();
        cin >> val;
        if(val == n){
            maxi = i+1;
            break;
        }
        else if(val == n-1){
            cout << "? " << 1 << " " << i+1 << " " << i << " " << n-1 << "\n";
            cout.flush();
            cin >> val;
            if(val == n){
                maxi = i;
                break;
            }
        }
    }

    int arr[n+5];
    arr[maxi] = n;

    for(int i = 1; i <= n; i++){
        if(i == maxi) continue;

        cout << "? " << 2 << " " << i << " " << maxi << " " << 1 << "\n";
        cout.flush();
        cin >> val;
        arr[i] = val;
    }

    cout << "! ";
    cout.flush();
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " \n"[i==n];
        cout.flush();
    }
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}