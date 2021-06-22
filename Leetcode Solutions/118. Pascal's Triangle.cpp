class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v1;

        for(int i = 1; i <= numRows; i++){
            vector<int> v2;
            for(int j = 1; j <= i; j++){
                if(i == j || j == 1) v2.push_back(1);
                else{
                    v2.push_back(v1[j-2] + v1[j-1]);
                }
            }
            v1 = v2;
            ans.push_back(v2);
        }

        return ans;
    }
};