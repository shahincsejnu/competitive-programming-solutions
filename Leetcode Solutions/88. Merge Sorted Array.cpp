class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        
        int i = 0, j = 0;
        //m -= n;
        
        while(1){
            if(i >= m || j >= n) break;
            int val1 = nums1[i], val2 = nums2[j];
            
            if(val1 <= val2){
                i++;
                ans.push_back(val1);
            }
            else{
                j++;
                ans.push_back(val2);
            }
        }
        
        for(int k = i; k < m; k++) ans.push_back(nums1[k]);
        for(int k = j; k < n; k++) ans.push_back(nums2[k]);
        
        nums1 = ans;
    }
};