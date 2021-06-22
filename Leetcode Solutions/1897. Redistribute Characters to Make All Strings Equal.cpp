class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char, int> mp;
        int cnt = 0, n = words.size();

        for(int i = 0; i < n; i++){
            int l = words[i].size();
            for(int j = 0; j < l; j++){
                mp[words[i][j]]++;
                //cnt = max(cnt, mp[words[i][j]]);
            }
        }

        for(auto it: mp){
            if(it.second%n) return false;
        }

        return true;
    }
};