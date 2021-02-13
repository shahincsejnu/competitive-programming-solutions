class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> ans;
        
        int l = nums.size();
        
        for(int i = 0; i < l; i++){
            int val = target - nums[i];
            
            if(mp[val]){
                ans.push_back(mp[val]-1);
                ans.push_back(i);
                break;
            }
            
            mp[nums[i]] = i+1;
        }
        
        return ans;
    }
};