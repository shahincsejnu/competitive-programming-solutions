class Solution {
public:
    string getHint(string secret, string guess) {
        int l = secret.size();
        int A = 0, B = 0;
        map<char, int> mp1, mp2;
        
        for(int i = 0; i < l; i++){
            if(guess[i] == secret[i]){
                secret[i] = 'X';
                A++;
                guess[i] = 'Y';
            }
            else {mp1[secret[i]]++; mp2[guess[i]]++;}
        }
        
        for(auto it: mp2){
            char ch = it.first;
            B += min(it.second, mp1[ch]);
        }
        
        string ans = to_string(A);
        ans += 'A';
        ans += to_string(B);
        ans += 'B';
        
        return ans;
    }
};