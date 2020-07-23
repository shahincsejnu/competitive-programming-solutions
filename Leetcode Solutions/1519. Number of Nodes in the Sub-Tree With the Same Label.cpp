class Solution {
public:
    int per_node[100005][27];
    vector<int> adj[100005];
    int vis[100005], value[100005];
    
    void DFS(int node){
        vis[node] = 1;
        per_node[node][value[node]]++;
        
        for(auto son: adj[node]){
            if(!vis[son]){
                DFS(son);
                for(int i = 0; i < 26; i++) per_node[node][i] += per_node[son][i];
            }
        }
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        int l = edges.size(), sz = labels.size();
        
        for(int i = 0; i < n; i++){
            adj[i].clear();
            vis[i] = 0;
            for(int j = 0; j < 26; j++){
                per_node[i][j] = 0;
            }
        }
        for(int i = 0; i < sz; i++) value[i] = labels[i]-'a';
        
        for(int i = 0; i < l; i++){
            int u = edges[i][0], v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        DFS(0);
        
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            ans.push_back(per_node[i][value[i]]);
        }
        
        return ans;
    }
};
