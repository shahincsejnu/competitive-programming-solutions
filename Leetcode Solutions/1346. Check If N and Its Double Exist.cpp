class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int len = arr.size();
        
        map<int,int> mp;
        for(int i = 0; i < len; i++) mp[arr[i]]++;
        
        for(int i = 0; i < len; i++){
            int val = arr[i];
            if(val && mp[2*val]) return true;
            if(val == 0 && mp[val] > 1) return true;
            if(val && val%2 == 0 && mp[val/2]) return true;
        }
        
        return false;
    }
};