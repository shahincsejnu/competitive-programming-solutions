#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            cin >> arr[i][j];
        }
    }

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int val;
        cin >> val;
        for(int j = 1; j <= 3; j++){
            for(int k = 1; k <= 3; k++){
                if(arr[j][k] == val) arr[j][k] = 0;
            }
        }
    }

    int flag = 0;

    for(int i = 1; i <= 3; i++){
        int cnt1 = 0, cnt2 = 0;
        for(int j = 1; j <= 3; j++){
            cnt1 += arr[i][j];
            cnt2 += arr[j][i];
        }

        if(!cnt1 || !cnt2) flag = 1;
    }

    if(!(arr[1][1]+arr[2][2]+arr[3][3]) || !(arr[1][3]+arr[2][2]+arr[3][1])) flag = 1;

    if(flag) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}