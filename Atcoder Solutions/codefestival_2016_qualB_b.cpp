#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n, a, b;

    cin >> n >> a >> b;
    cin >> s;

    int total_student = 0, out_student = 0, sum = a+b;

    for(int i = 0; i < n; i++){
        if(s[i] == 'a' && total_student < sum) {total_student++; cout << "Yes" << "\n";}
        else if(s[i] == 'b' && total_student < sum && out_student < b) {total_student++; out_student++; cout << "Yes" << "\n";}
        else cout << "No" << "\n";
    }

    return 0;
}