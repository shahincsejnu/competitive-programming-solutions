class Solution {
public:
    int romanToInt(string s) {
        int l = s.size();
        string temp = "";
        
        map<string, int> mp;
        
        mp["I"] = 1;   mp["IV"] = 4;
        mp["V"] = 5;   mp["IX"] = 9;
        mp["X"] = 10;  mp["XL"] = 40;
        mp["L"] = 50;  mp["XC"] = 90;
        mp["C"] = 100; mp["CD"] = 400;
        mp["D"] = 500; mp["CM"] = 900;
        mp["M"] = 1000;
        
        
        int ans = 0;
        
        for(int i = 0; i < l; i++){
            temp = s[i];
            
            if(i+1 < l){
                if(s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')){
                    i++;
                    temp += s[i];
                }
                else if(s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')){
                    i++;
                    temp += s[i];
                }
                else if(s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')){
                    i++;
                    temp += s[i];
                }
            }
            
            ans += mp[temp];
        }
        
        return ans;
    }
};