/*
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        return nums[nums.size()-k];
    }
};
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        
        for(int i = 0; i < k; i++) pq.push(-nums[i]);
        
        int l = nums.size();
        
        for(int i = k; i < l; i++){
            if(nums[i] > -pq.top()){
                pq.pop();
                pq.push(-nums[i]);
            } 
        }
        
        return -pq.top();
    }
};