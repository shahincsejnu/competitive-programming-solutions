class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            int val = abs(nums[i]) - 1;
            
            nums[val] = abs(nums[val]) * -1;
        }
        
        for(int i = 0; i < n; i++){
            if(nums[i] > 0) ans.push_back(i+1);
        }
        
        return ans;
    }
};