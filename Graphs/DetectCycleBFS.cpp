
class Solution {
  private:
    bool detect(int src, vector<int> adj[], int vis[]){
        
        vis[src] = 1;
        queue<pair<int,int>> q;
        q.push({src, -1});
        
        while(!q.empty()){
            
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            // for neighbours
            for(auto adjacentNode : adj[node]){
                
                if(!vis[adjacentNode]){
                    
                    vis[adjacentNode] = 1;
                    q.push({adjacentNode, node});
                }
                
                //someone has visited but it didn't came from it
                else if(parent != adjacentNode){
                    
                    return true;
                }
            }
        }
        return false; //means it isn't cycle
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        
        int vis[V] = {0};
        
        //for multiple components
        for(int i=0; i<V; i++){
            
            if(!vis[i]){
                if(detect(i, adj, vis))
                    return true;
            }
        }
        return false;
    }
};