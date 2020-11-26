#include <bits/stdc++.h>
#define lli long long int
using namespace std;

struct Point
{
    int x1, y1, x2, y2, x3, y3;

    Point(int xx1, int yy1, int xx2, int yy2, int xx3, int yy3)
    {
        x1 = xx1; y1 = yy1; x2 = xx2; y2 = yy2; x3 = xx3; y3 = yy3;
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;

    int arr[n+5][m+5];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            char ch;
            cin >> ch;
            arr[i][j] = (ch-'0');
        }
    }

    vector<Point> v;

    for(int i = n; i > 2; i--){
        for(int j = 1; j <= m; j++){
            int val = arr[i][j];
            if(val){
                if(j == m){
                    arr[i][j] = 0;
                    arr[i-1][j-1] = !arr[i-1][j-1];
                    arr[i-1][j] = !arr[i-1][j];

                    Point point(i, j, i-1, j-1, i-1, j);
                    v.push_back(point);
                }
                else{
                    arr[i][j] = 0;
                    arr[i-1][j] = !arr[i-1][j];
                    arr[i-1][j+1] = !arr[i-1][j+1];

                    Point point(i, j, i-1, j, i-1, j+1);
                    v.push_back(point);
                }
            }
        }
    }

    for(int i = m; i > 2; i--){
        for(int j = 1; j <= 2; j++){
            int val = arr[j][i];

            if(val){
                if(j == 1){
                    arr[j][i] = 0;
                    arr[j][i-1] = !arr[j][i-1];
                    arr[j+1][i-1] = !arr[j+1][i-1];

                    Point point(j, i, j, i-1, j+1, i-1);
                    v.push_back(point);
                }
                else{
                    arr[j][i] = 0;
                    arr[j][i-1] = !arr[j][i-1];
                    arr[j-1][i-1] = !arr[j-1][i-1];

                    Point point(j, i, j, i-1, j-1, i-1);
                    v.push_back(point);
                }
            }
        }
    }

    if(arr[2][1] && arr[2][2]){
        arr[2][1] = 0;
        arr[2][2] = 0;
        arr[1][1] = !arr[1][1];

        Point point(2, 1, 2, 2, 1, 1);
        v.push_back(point);
    }
    else if(arr[2][1]){
        arr[2][1] = 0;
        arr[1][1] = !arr[1][1];
        arr[1][2] = !arr[1][2];

        Point point(2, 1, 1, 1, 1, 2);
        v.push_back(point);
    }
    else if(arr[2][2]){
        arr[2][2] = 0;
        arr[1][1] = !arr[1][1];
        arr[1][2] = !arr[1][2];

        Point point(2, 2, 1, 1, 1, 2);
        v.push_back(point);
    }

    if(arr[1][1] == 0 && arr[1][2] == 1){
        Point point1(1, 1, 1, 2, 2, 1);
        arr[1][1] = !arr[1][1];
        arr[1][2] = !arr[1][2];
        arr[2][1] = !arr[2][1];

        Point point2(1, 2, 2, 1, 2, 2);
        arr[1][2] = !arr[1][2];
        arr[2][1] = !arr[2][1];
        arr[2][2] = !arr[2][2];

        Point point3(1, 1, 1, 2, 2, 2);
        arr[1][1] = !arr[1][1];
        arr[1][2] = !arr[1][2];
        arr[2][2] = !arr[2][2];

        v.push_back(point1);
        v.push_back(point2);
        v.push_back(point3);
    }
    else if(arr[1][1] == 1 && arr[1][2] == 0){
        Point point1(1, 1, 1, 2, 2, 2);
        arr[1][1] = !arr[1][1];
        arr[1][2] = !arr[1][2];
        arr[2][2] = !arr[2][2];

        Point point2(1, 1, 2, 1, 2, 2);
        arr[1][1] = !arr[1][1];
        arr[2][1] = !arr[2][1];
        arr[2][2] = !arr[2][2];

        Point point3(1, 1, 1, 2, 2, 1);
        arr[1][1] = !arr[1][1];
        arr[1][2] = !arr[1][2];
        arr[2][1] = !arr[2][1];

        v.push_back(point1);
        v.push_back(point2);
        v.push_back(point3);
    }
    else if(arr[1][1] == 1 && arr[1][2] == 1){
        Point point1(1, 2, 2, 1, 2, 2);
        arr[1][2] = !arr[1][2];
        arr[2][1] = !arr[2][1];
        arr[2][2] = !arr[2][2];

        Point point2(1, 1, 2, 1, 2, 2);
        arr[1][1] = !arr[1][1];
        arr[2][1] = !arr[2][1];
        arr[2][2] = !arr[2][2];

        v.push_back(point1);
        v.push_back(point2);
    }

    int l = v.size();
    cout << l << "\n";
    for(int i = 0; i < l; i++){
        cout << v[i].x1 << " " << v[i].y1 << " " << v[i].x2 << " " << v[i].y2 << " " << v[i].x3 << " " << v[i].y3 << "\n";
    }
}

int main()
{
    int tc = 1;

    cin >> tc;
    while(tc--) solve();

    return 0;
}