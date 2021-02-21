class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        
        map<int, string> mp;
        
        mp[1] = "I";   mp[4] = "IV";
        mp[5] = "V";   mp[9] = "IX";
        mp[10] = "X";  mp[40] = "XL";
        mp[50] = "L";  mp[90] = "XC";
        mp[100] = "C"; mp[400] = "CD";
        mp[500] = "D"; mp[900] = "CM";
        mp[1000] = "M";
        
        int arr[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        for(int i = 0; i < 13; i++){
            int val = arr[i];
            
            int cnt = num / val;
            num %= val;
            
            for(int j = 0; j < cnt; j++){
                ans += mp[val];
            }
        }
        
        return ans;
    }
};