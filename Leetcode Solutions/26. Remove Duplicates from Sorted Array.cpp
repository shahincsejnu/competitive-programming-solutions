class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        if(l == 0) return 0;
        
        int asi = 1, ase = nums[0];
        
        for(int i = 1; i < l; i++){
            if(nums[i] != ase){
                ase = nums[i];
                nums[asi] = ase;
                asi++;
            }
        }
        
        return asi;
    }
};