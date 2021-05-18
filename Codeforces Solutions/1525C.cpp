#include <bits/stdc++.h>
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> odd, even;
    map<int, int> mp;
    map<int, char> mp2;

    int arr[n+5];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    char ch;
    for(int i = 1; i <= n; i++){
        cin >> ch;
        if(arr[i]%2){
            odd.push_back(arr[i]);
            mp2[arr[i]] = ch;
        }
        else{
            even.push_back(arr[i]);
            mp2[arr[i]] = ch;
        }
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int l1 = odd.size(), l2 = even.size();
    stack<int> st1, st2;

    // for odd
    for(int i = 0; i < l1; i++){
        int val = odd[i];
        ch = mp2[val];

        if(st1.empty()) st1.push(val);
        else if(mp2[st1.top()] == 'R' && ch == 'L'){
            int val2 = st1.top();
            st1.pop();
            int d = val - val2;
            d /= 2;
            mp[val] = d;
            mp[val2] = d;
        }
        else st1.push(val);
    }

    if(st1.size()){
        vector<int> left, right;
        while(!st1.empty()){
            if(mp2[st1.top()] == 'L') left.push_back(st1.top());
            else right.push_back(st1.top());
            st1.pop();
        }

        reverse(left.begin(), left.end());
        reverse(right.begin(), right.end());

        int sz1 = left.size(), sz2 = right.size(), i = 0, j = sz2-1;

        while(i < sz1-1){
            int val1 = left[i], val2 = left[i+1];
            int d = (val1 + val2) / 2;

            mp[val1] = d;
            mp[val2] = d;
            i += 2;
        }

        while(j > 0){
            int val1 = right[j], val2 = right[j-1];
            int d = (m-val1) + ((val1 - val2) / 2);

            mp[val1] = d;
            mp[val2] = d;
            j -= 2;
        }

        if(i == sz1-1 && j == 0){
            int val1 = left[i], val2 = right[j], temp1, temp2;
            temp1 = val1;
            temp2 = val2;
            int d = max(temp1, m-temp2);
            temp1 = abs(temp1-d);
            temp2 += d;
            if(temp2 > m){
                temp2 = m - (temp2-m);
            }
            d += ((temp2 - temp1)/2);

            mp[val1] = d;
            mp[val2] = d;
        }
        else if(i == sz1-1){
            mp[left[i]] = -1;
        }
        else if(j == 0){
            mp[right[j]] = -1;
        }
    }

    // for even
    for(int i = 0; i < l2; i++){
        int val = even[i];
        ch = mp2[val];

        if(st2.empty()) st2.push(val);
        else if(mp2[st2.top()] == 'R' && ch == 'L'){
            int val2 = st2.top();
            st2.pop();
            int d = val - val2;
            d /= 2;
            mp[val] = d;
            mp[val2] = d;
        }
        else st2.push(val);
    }

    if(st2.size()){
        vector<int> left, right;
        while(!st2.empty()){
            if(mp2[st2.top()] == 'L') left.push_back(st2.top());
            else right.push_back(st2.top());
            st2.pop();
        }

        reverse(left.begin(), left.end());
        reverse(right.begin(), right.end());

        int sz1 = left.size(), sz2 = right.size(), i = 0, j = sz2-1;

        while(i < sz1-1){
            int val1 = left[i], val2 = left[i+1];
            int d = (val1 + val2) / 2;

            mp[val1] = d;
            mp[val2] = d;
            i += 2;
        }

        while(j > 0){
            int val1 = right[j], val2 = right[j-1];
            int d = (m-val1) + ((val1 - val2) / 2);

            mp[val1] = d;
            mp[val2] = d;
            j -= 2;
        }

        if(i == sz1-1 && j == 0){
            int val1 = left[i], val2 = right[j], temp1, temp2;
            temp1 = val1;
            temp2 = val2;
            int d = max(temp1, m-temp2);
            temp1 = abs(temp1-d);
            temp2 += d;
            if(temp2 > m){
                temp2 = m - (temp2-m);
            }
            d += ((temp2 - temp1)/2);

            mp[val1] = d;
            mp[val2] = d;
        }
        else if(i == sz1-1){
            mp[left[i]] = -1;
        }
        else if(j == 0){
            mp[right[j]] = -1;
        }
    }

    for(int i = 1; i <= n; i++) cout << mp[arr[i]] << " \n"[i==n];
}

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--) solve();

    return 0;
}