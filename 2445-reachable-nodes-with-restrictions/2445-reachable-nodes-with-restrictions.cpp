class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
         // Step 1: Build the adjacency list
        vector<vector<int>> adj(n, vector<int>());
        for(auto &edge : edges){
            int a = edge[0];
            int b = edge[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        // Step 2: Mark restricted nodes
        vector<bool> isRestricted(n, false);
        for(auto node : restricted){
            isRestricted[node] = true;
        }
        
        // Step 3: BFS initialization
        queue<int> q;
        // Node 0 is guaranteed not to be restricted
        q.push(0);
        // To keep track of visited nodes
        vector<bool> visited(n, false);
        visited[0] = true;
        int count = 1; // Start with node 0
        
        // Step 4: BFS traversal
        while(!q.empty()){
            int current = q.front();
            q.pop();
            for(auto &neighbor : adj[current]){
                if(!visited[neighbor] && !isRestricted[neighbor]){
                    visited[neighbor] = true;
                    count++;
                    q.push(neighbor);
                }
            }
        }
        
        return count;
    }
};