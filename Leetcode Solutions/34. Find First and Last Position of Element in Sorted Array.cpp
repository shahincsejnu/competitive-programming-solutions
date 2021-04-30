class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);

        int lo = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int up = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        up--;

        if(up >= lo) {
            ans[0] = lo;
            ans[1] = up;
        }

        return ans;
    }
};