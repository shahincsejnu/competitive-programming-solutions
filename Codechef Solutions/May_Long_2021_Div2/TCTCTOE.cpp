#include <bits/stdc++.h>
#define lli long long int
using namespace std;

char ch[4][4];

int Win(char ch2)
{
    int cnt = 0;
    if(ch[1][1] == ch2 && ch[1][2] == ch2 && ch[1][3] == ch2) cnt = 1;
    if(ch[2][1] == ch2 && ch[2][2] == ch2 && ch[2][3] == ch2) cnt = 1;
    if(ch[3][1] == ch2 && ch[3][2] == ch2 && ch[3][3] == ch2) cnt = 1;
    if(ch[1][1] == ch2 && ch[2][1] == ch2 && ch[3][1] == ch2) cnt = 1;
    if(ch[1][2] == ch2 && ch[2][2] == ch2 && ch[3][2] == ch2) cnt = 1;
    if(ch[1][3] == ch2 && ch[2][3] == ch2 && ch[3][3] == ch2) cnt = 1;
    if(ch[1][1] == ch2 && ch[2][2] == ch2 && ch[3][3] == ch2) cnt = 1;
    if(ch[3][1] == ch2 && ch[2][2] == ch2 && ch[1][3] == ch2) cnt = 1;

    return cnt;
}

void solve()
{
    int x = 0, o = 0, dash = 0, first = 0, second = 0;

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            cin >> ch[i][j];
            if(ch[i][j] == 'X') x++;
            else if(ch[i][j] == 'O') o++;
            else dash++;
        }
    }

    first = Win('X');
    second = Win('O');

    if(((first+second) == 2) || (o > x) || (x > (o+1))) cout << 3 << "\n";
    else if(second && x != o) cout << 3 << "\n";
    else if(first && x == o) cout << 3 << "\n";
    else if(first || second || !dash) cout << 1 << "\n";
    else cout << 2 << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}
