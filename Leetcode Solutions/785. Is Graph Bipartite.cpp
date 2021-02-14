class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int l = graph.size();
        bool flag = true;
        
        vector<int> visited(l, -1);
        
        for(int i = 0; i < l; i++){
            if(!flag) break;
            if(visited[i] != -1) continue;
            
            queue<int> q;
            q.push(i);
            visited[i] = 0;
            
            while(!q.empty()){
                int u = q.front();
                q.pop();
                int sz = graph[u].size();
                
                for(int j = 0; j < sz; j++){
                    int v = graph[u][j];
                    
                    if(visited[v] == -1){
                        q.push(v);
                        visited[v] = !visited[u];
                    }
                    else if(visited[v] == visited[u]){
                        flag = false;
                        break;
                    }
                }
                
                if(!flag) break;
            }
        }
        
        return flag;
    }
};