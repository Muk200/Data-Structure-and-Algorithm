class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    
	    //first form the graph
	    vector<int> adj[N];
	    for(auto it : prerequisites){
	        adj[it.first].push_back(it.second);
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
	    if(topo.size() == N) return true;
        return false;
	}
};