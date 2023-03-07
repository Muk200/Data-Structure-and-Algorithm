class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        //zero based indexing
        int vis[V] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> bfs; //for traversal
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            //for the neighbours
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
    
};
/*
steps

1.create a visted array from start & mark it true for starting node
2. create a queue & add starting node
3. create bfs & pop from queue till not empty
4. add popped elements in bfs
5. for neigbhours, mark vis = true, add them queue
*/