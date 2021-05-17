#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const int M = 4e6 + 5;
int res[M], arr[M];

void Init()
{
    for(int i = 2; i < M; i++){
        if(arr[i] == i){
            arr[i]--;

            for(int j = i+i; j < M; j += i){
                arr[j] /= i;
                arr[j] *= arr[i];
            }
        }
    }

    for(int i = 1; i < M; i++){
        res[i] += i-1;

        for(int j = i+i; j < M; j += i){
            res[j] += ((arr[j/i] + 1)/2) * i;
        }
    }
}

void solve()
{
    int k;
    cin >> k;
    k *= 4;
    k++;

    cout << res[k] << "\n";
}

int main()
{
    fastio;
    for(int i = 1; i < M; i++) arr[i] = i;
    Init();

    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}

