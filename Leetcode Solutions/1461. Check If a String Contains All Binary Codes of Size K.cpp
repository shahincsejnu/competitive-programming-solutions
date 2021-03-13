class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int total = 1 << k, l = s.size();
        map<string, int> mp;
        
        for(int i = 0; i <= l-k; i++){
            string ss = s.substr(i, k);
            
            mp[ss]++;
        }
        
        if(mp.size() == total) return true;
        else return false;
    }
};