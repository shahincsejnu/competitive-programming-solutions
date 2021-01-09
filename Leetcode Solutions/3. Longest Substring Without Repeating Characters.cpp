class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int ans = 1, start = 0, l = s.size();
        if(l == 0) return 0;
        //cout << l << "\n";
        mp[s[0]]++;
        
        for(int i = 1; i < l; i++){
            while(mp[s[i]]){
                mp[s[start]]--;
                start++;
            }
            mp[s[i]]++;
            
            ans = max(ans, i-start+1);
        }       
        
        return ans;
    }
};