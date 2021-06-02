#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    int mn = 1e9;

    for(int i = 1; i <= n; i++){
        int sum = 0;
        for(int j = i; j <= n; j++){
            sum += arr[j];
            mn = min(mn, abs((360-sum) - sum));
        }
    }

    cout << mn << "\n";

    return 0;
}