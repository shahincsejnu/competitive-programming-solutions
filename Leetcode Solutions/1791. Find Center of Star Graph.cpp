class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size(), u = edges[0][0], v = edges[0][1], ans = -1;

        if(edges[1][0] == u || edges[1][1] == u) ans = u;
        if(edges[1][0] == v || edges[1][1] == v) ans = v;

        return ans;
    }
};