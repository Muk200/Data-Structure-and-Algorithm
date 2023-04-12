// via disjoint
class DisjointSet {
    
public:
    vector<int> rank, parent, size;
    //constructer
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n+1);

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]); //for path compresion store it
    }

    void unionByRank(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        // if in same component
        if (ulp_u == ulp_v) return;

        // one greater than another
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }

        else { //if both parents have same rank 
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        // if in same component
        if (ulp_u == ulp_v) return;

        // one greater than another
        if (size[ulp_u] < size[ulp_v]) {

            parent[ulp_u] = ulp_v;
            //size of up_v will increase by no of elements in ulp_u
            size[ulp_v] += size[ulp_u]; 
        }
        else { //doesn't matter for size, since we still attach it

            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        
        DisjointSet ds(V);
        for(int i =0; i<V; i++){
            for(int j=0; j<V; j++){
                if(adj[i][j] == 1){
                    // i and j have a connection
                    ds.unionBySize(i, j);
                }
            }
        }
        
        int cnt =0;
        for(int i=0; i<V; i++){
            if(ds.parent[i] == i) cnt++;
        }
        return cnt;
        
    }
};