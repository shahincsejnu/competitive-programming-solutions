#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];

    int point = 0, turn = 2;

    for(int i = 1; i <= n; i++){
        if(turn == 2){
            turn = 1;
            if(arr[i]){
                point++;
                if((i+1 <= n) && arr[i+1]);
                else if(i+1 <= n){
                    if((i+2 <= n) && (arr[i+2] == 0)){
                        if((i+3 <= n) && arr[i+3]);
                        else i++;
                    }
                    else i++;
                }
            }
            else{
                if((i+1 <= n) && (arr[i+1] == 0)){
                    if((i+2) <= n && (arr[i+2] == 0));
                    else i++;
                }
            }
        }
        else{
            turn = 2;
            if((i+1 <= n) && (arr[i+1] == 0));
            else i++;
        }
    }

    cout << point << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}