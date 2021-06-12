class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        multiset<int> st;

        int ase = 1, j = n-1, dp[n];
        st.insert(nums[n-1]);
        dp[n-1] = nums[n-1];

        for(int i = n-2; i >= 0; i--){
            while(ase > k){
                ase--;
                st.erase(st.find(dp[j]));
                j--;
            }

            auto it = st.end();
            it--;

            dp[i] = *it + nums[i];

            st.insert(dp[i]);
            ase++;
        }

       return dp[0];
    }
};