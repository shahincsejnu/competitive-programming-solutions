class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int n = ranges.size();
        int arr[100] = {0};

        for(int i = 0; i < n; i++){
            arr[ranges[i][0]]++;
            arr[ranges[i][1] + 1]--;
        }

        for(int i = 1; i <= 55; i++) arr[i] += arr[i-1];

        for(int i = left; i <= right; i++){
            if(arr[i] == 0) return false;
        }

        return true;
    }
};