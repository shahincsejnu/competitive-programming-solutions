#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int start = 1, end = n, mid;

    while(start <= end){
        mid = (start + end) / 2;

        double x = (double) mid * 1.08;
        //x += 0.5;

        int xx = x;

        if(xx == n){
            cout << mid << "\n";
            return 0;
        }

        if(xx > n) end = mid-1;
        else start = mid+1;
    }

    cout << ":(" << "\n";

    return 0;
}