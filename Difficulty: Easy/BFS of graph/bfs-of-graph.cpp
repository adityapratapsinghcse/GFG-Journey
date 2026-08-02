class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<bool> visited(adj.size()+1,false);
        vector<int> bfs;
        queue<int> q;
        
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            for(int neighbour: adj[node]){
                if(visited[neighbour] == false){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        return bfs;
    }
};