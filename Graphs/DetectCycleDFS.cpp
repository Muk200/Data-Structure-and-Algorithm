class Solution {
  private:
   bool dfs(int node, int parent, int vis[], vector<int> adj[]){
       
       vis[node] = 1;
       
       //for neighbour nodes
       for(auto adjacentNode : adj[node]){
           
           if(!vis[adjacentNode]){
               
               //if any later calls return true that will be passed on 
               if(dfs(adjacentNode, node, vis, adj) == true) return true; 
           }
           else if(adjacentNode != parent) return true; //if already visited & not a parent
       }
       return false;
   }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        
        int vis[V] = {0};
        
        //for different components
        
        for(int i=0; i<V; i++){
            
            if(!vis[i]){
                
                if(dfs(i, -1, vis, adj) == true) return true;
            }
        }
        return false;
    }
};

int main() {
    
    // V = 4, E = 2
    vector<int> adj[4] = {{}, {2}, {1, 3}, {2}};
    Solution obj;
    bool ans = obj.isCycle(4, adj);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}