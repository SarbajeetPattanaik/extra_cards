class Solution {
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
         vector<int> distances(n);
        vector<vector<int>> adj(n);
        for (auto &v: edges) {
            int a = v[0] - 1;
            int b = v[1] - 1;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        unordered_map<int,int> data; // min_node, max_step
        queue<pair<int,int>> nodes; // current node, last node
        for (int i = 0; i < n; ++i) {
            fill(distances.begin(), distances.end(), -1);
            int step = 0;
            
            distances[i] = 0;
            nodes.push({i, -1});
            int min_node = i;
            
            while (int k = nodes.size()) {
                ++step;
                while (k--) {
                    auto [node, last] = nodes.front(); nodes.pop();
                    for (int next: adj[node]) {
                        if (next == last) continue; // prevent going backward
                        if (distances[next] == -1) { // not visited before
                            distances[next] = step;
                            nodes.push({next, node});
                            min_node = min(min_node, next);
                        } else { // visited before
                            if ((distances[next] - step) % 2) return -1; // odd cycles
                        }
                    }
                }
            }
            data[min_node] = max(data[min_node], step); // update max number of groups for this fragment
        }
        int result = 0;
        for (auto [k, v]: data) result += v;
        return result;
        
    }
};