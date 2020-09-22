class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int arr[1005] = {0};
        int l = trips.size();
        for(int i = 0; i < l; i++){
            int val = trips[i][0];
            int x = trips[i][1];
            int y = trips[i][2];
            arr[x] += val;
            arr[y] -= val;
        }
        
        for(int i = 0; i <= 1000; i++){
            arr[i+1] += arr[i];
            if(arr[i] > capacity) return false;
        }
        return true;
    }
};