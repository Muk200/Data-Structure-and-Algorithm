// changes 1. reversed odering
//         2. given an vector not pair
//         3. if possible, return ordering
//         4. if not possible, return empty array

class Solution
{
  public:
    vector<int> findOrder(int N, int m, vector<vector<int>> prerequisites) 
    {
        //first form the graph
	    vector<int> adj[N];
	    for(auto it : prerequisites){
	        adj[it[1]].push_back(it[0]); //here reverse the ordering
	    }
	    
	    //prepare indegree via adj matrix
	     int indegree[N] = {0};
	     for(int i=0; i<N; i++){
	         for(auto it : adj[i]){
	             indegree[it]++;
	         }
	     }
	     
	    //push all with indegree 0 to q
	    queue<int> q;
	    for(int i=0; i<N; i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    
	    //for rest of others
	    vector<int> topo;
	    
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        
	        //now node is in toposort so remove it from indegree
	        for(auto it : adj[node]){
	            indegree[it]--;
	            
	            if(indegree[it] == 0){
	                q.push(it);
	            }
	        }
	        
	    }
	    if(topo.size() == N) return topo;
        return {};
	}
};