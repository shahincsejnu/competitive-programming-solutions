class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = arr.size();
        
        map<int,int> mp;
        
        for(int i = 0; i < l; i++) mp[arr[i]] = 1;
        
        for(int i = 1, j = 0; ; i++){
            if(mp[i] == 0) j++;
            
            if(j == k) return i;
        }
    }
};