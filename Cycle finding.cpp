vector<int>adj[2005];
    int color[2005];
    
    bool dfs(int v) {
        color[v] = 1;
        for(int i=0; i<adj[v].size(); i++) {
            int node = adj[v][i];
            if (color[node] == 0) {
                if (dfs(node))
                    return true;
            } 
            else if (color[node] == 1) {
                return true;
            }
        }
        color[v] = 2;
        return false;
    }
