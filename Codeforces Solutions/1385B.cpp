#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int nn = 2*n;
        int arr[nn+5];
        for(int i = 1; i <= nn; i++) cin >> arr[i];

        map<int,int> mp1, mp2;
        vector<int> v1, v2;

        for(int i = 1; i <= nn; i++){
            int val = arr[i];

            if(mp1[val]){
                mp2[val] = 1;
                v2.push_back(i);
            }
            else{
                mp1[val] = 1;
                v1.push_back(i);
            }
        }

        for(int i = 0; i < n; i++) cout << arr[v1[i]] << " \n"[i==n-1];   
    }
    
    
    return 0;
}
