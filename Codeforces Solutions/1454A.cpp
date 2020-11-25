#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = n, j = 1; i >= 1; i--, j++) arr[j] = i;

    if(n%2){
        int d = (n+1)/2;

        swap(arr[n], arr[d]);
    }

    for(int i = 1; i <= n; i++) cout << arr[i] << " \n"[i==n];
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}