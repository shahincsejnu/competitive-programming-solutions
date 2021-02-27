class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int l = nums.size();
        
        if(l == 1) return nums[0];
        else if(l == 2) return max(nums[0], nums[1]);
        else{
            long long int m1 = -1e15, m2 = -1e15, m3 = -1e15;
            
            for(int i = 0; i < l; i++){
                if(nums[i] == m1 || nums[i] == m2 || nums[i] == m3) continue;
                
                if(nums[i] > m3){
                    m1 = m2;
                    m2 = m3;
                    m3 = nums[i];
                }
                else if(nums[i] > m2){
                    m1 = m2;
                    m2 = nums[i];
                }
                else if(nums[i] > m1){
                    m1 = nums[i];
                }
            }
            
            if(m1 == -1e15 ) return m3;
            else return m1;
        }
    }
};