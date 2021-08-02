class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if(!n) return 0;

        vector<int> left, right;

        int mx_left = height[0];

        for(int i = 0; i < n; i++){
            mx_left = max(mx_left, height[i]);

            left.push_back(mx_left);
        }

        int mx_right = height[n-1];

        for(int i = n-1; i >= 0; i--){
            mx_right = max(mx_right, height[i]);

            right.push_back(mx_right);
        }
        reverse(right.begin(), right.end());

        long long int ans = 0;

        for(int i = 0; i < n; i++) ans += (min(left[i], right[i]) - height[i]) * 1ll;

        return ans;
    }
};