#include bitsstdc++.h
#define lli long long int
using namespace std;

void solve()
{
    lli x, y, k;

    cin  x  y  k;

    lli ans = k, n = 0, start = 1, end = 2e19, mid, total = k + (yk);

    while(start = end){
        mid = (start + end)  2;

        lli val = total + (mid-1);
        lli d = val  x;
        if(val%x) d++;

        if(mid = d){
            n = mid;
            end = mid-1;
        }
        else start = mid+1;
    }

    ans += n;

    cout  ans  n;
}

int main()
{
    int tc = 1;
    cin  tc;

    while(tc--) solve();

    return 0;
}