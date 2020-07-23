class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v, can;
    int n, goal;
    
    void DFS(int pos, int sum){
        if(sum > goal) return;
        if(sum == goal){
            ans.push_back(v);
            return;
        }
        
        for(int i = pos; i < n; i++){
            v.push_back(can[i]);
            DFS(i, sum + can[i]);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int l = candidates.size();
        can = candidates;
        goal = target;
        n = l;
        
        DFS(0, 0);
        
        return ans;
    }
};
