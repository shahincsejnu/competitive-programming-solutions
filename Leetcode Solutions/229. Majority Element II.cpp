class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        
        int l = nums.size();
        vector<int> v;
        
        for(int i = 0; i < l; i++) mp[nums[i]]++;
        
        int val = l / 3;
        
        for(auto it: mp){
            if(it.second > val) v.push_back(it.first);
        }
        
        return v;
    }
};