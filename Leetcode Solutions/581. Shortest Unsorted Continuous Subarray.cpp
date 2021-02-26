class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l = nums.size(), start = 0, end = l-1;

        vector<int> temp;
        temp = nums;

        sort(nums.begin(), nums.end());

        int i = 0, j = l-1;

        while((start < end) && (i < j)){
            int cnt = 0;
            if(temp[i] == nums[start]) {start++; i++; cnt++;}
            if(temp[j] == nums[end]) {end--; j--; cnt++;}

            if(!cnt) break;
        }

        int ans = end-start;
        if(end != start) ans++;

        return ans;
    }
};