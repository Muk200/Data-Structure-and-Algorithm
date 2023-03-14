class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // declare a min heap of pair {dist,node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> distTo(V, INT_MAX);
        
        for(int i=0; i<V; i++){ //initially all are 0
            dist[i] = 1e9;
        }
        
        dist[S] =0;
        pq.push({0,S});
        
        //+pop the minimum distance node first from the min-heap
        while(!pq.empty()){
            
            int dis = pq.top().first; //distance up until now
            int node = pq.top().second;
            pq.pop();
            
            for(auto it : adj[node]){
                
                int edgeweight = it[1]; // as normal store pair{node, dist}
                int adjnode = it[0]
                
                if(dis + edgeweight < dist[adjnode]){
                    
                    dist[adjnode] = dis + edgeweight;
                    pq.push({dist[adjnode], adjnode});
                    
                }
            }
        }
        return dist;
         
    }
};