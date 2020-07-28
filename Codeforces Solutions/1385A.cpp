#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){
        int x, y, z;
        cin >> x >> y >> z;

        int arr[] = {x, y, z}, flag = 0;
        sort(arr, arr+3);

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    int a = arr[i], b = arr[j], c = arr[k];

                    int xx = max(a, b), yy = max(a, c), zz = max(b, c);

                    if(x == xx && y == yy && z == zz){
                        cout << "YES" << "\n";
                        cout << a << " " << b << " " << c << "\n";
                        flag = 1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(!flag) cout << "NO" << "\n";
    }
    
    
    return 0;
}
