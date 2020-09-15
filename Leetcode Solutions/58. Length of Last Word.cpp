class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        
        stringstream ss(s);
        string word;
        
        while(ss >> word){
            ans = word.size();
        }
        
        return ans;
    }
};