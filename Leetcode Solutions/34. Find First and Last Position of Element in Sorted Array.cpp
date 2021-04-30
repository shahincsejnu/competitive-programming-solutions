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

// ------------------ * --------------------
class Solution {
public:
    vector<int> v;

    int lowerBound(int target)
    {
        int lo = 0, hi = v.size()-1, ans = -1, mid;

        while(lo <= hi){
            mid = lo + (hi - lo) / 2;

            if(v[mid] == target){
                ans = mid;
                hi = mid-1;
            }
            else if(v[mid] > target) hi = mid-1;
            else lo = mid+1;
        }

        return ans;
    }

    int upperBound(int target)
    {
        int lo = 0, hi = v.size()-1, ans = -1, mid;

        while(lo <= hi) {
            mid = lo + (hi - lo)/2;

            if(v[mid] == target){
                ans = mid;
                lo = mid+1;
            }
            else if(v[mid] > target) hi = mid-1;
            else lo = mid+1;
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        v = nums;

        int lo = lowerBound(target);
        int up = upperBound(target);

        ans.push_back(lo);
        ans.push_back(up);

        return ans;
    }
};