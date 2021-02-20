class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int l = s.size(), cnt = 0;
        string ans = "", temp = "";
        
        for(int i = 0; i < l; i++){
            if(s[i] == '(') cnt++;
            else if(s[i] == ')') cnt--;
            
            if(cnt < 0) cnt++;
            else ans += s[i];
        }
        
        string ans2 = "";
        
        l = ans.size();
        
        for(int i = l-1; i >= 0; i--){
            if(ans[i] == '(' && cnt) cnt--;
            else ans2 += ans[i];
        }
        
        reverse(ans2.begin(), ans2.end());
        
        return ans2;
    }
};


--------------

