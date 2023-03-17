class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        
        // adj list  node1 -> {node2,  edge wt}
        vector<pair<int, int>> adj[n+1];
        // make graph
        for(auto it : edges){
            
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        
        // priority queue
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        
        //we need dist arr, parent(marked with themselves, dist, src)
        vector<int> dist(n+1, 1e9), parent(n+1);
        for(int i=1; i<=n; i++) parent[i] = i;
        
        dist[1] =0;
        
        // Push the source node to the queue.
        pq.push({0, 1});
        
        while(!pq.empty()){
            
            auto it = pq.top();
            int node = it.second;
            int dis = it.first;
            pq.pop();
            
            for(auto it : adj[node]){
                
                int adjnode = it.first;
                int edwt = it.second;
                
                if(dis + edwt < dist[adjnode])
                
                    dist[adjnode] = dis+ edw;
                    pq.push({dis + edwt, adjnode});
                    
                    // Update the parent of the adjNode
                    parent[adjnode] = node;
                }
            }
        }
        //distance to a node is not reachable
        if (dist[n] == 1e9)
            return {-1};
            
        // Store the final path in the ‘path’ array
        vector<int> path;
        int node = n;
        
        while(parent[node] != node){ //if node isn't its own parent
            
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(1);
        
        reverse(path.begin(), path.end());
        return path;
        

    }
};