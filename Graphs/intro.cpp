//graphs are - directed, undireted
         //  - acyclic, cyclic
         //  - uses nodes/vertices, edges
         //  - takes input as n = nod of nodes(constant), m = no of edges(variable)
         //  - lines tell --> how many nodes & edges,  type of graph,   relation of edges b/w any two nodes like(1 --- 2 && 2 --- 1 undirected)
         /*
          5 6 -->> n & m
          
          //now all the edges given
          1 2 
          1 3
          2 4
          3 4
          3 5
          4 5 
         */  
              
         //  - for input -->> 1. matrix(adjacent matrix of {n+1} {m+1} for a 1 - based indexing) &
         //                   2. list stores the neigbhouring nodes (in any order) for each node we have a vector where we store edges

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

//for matrix(unidirected)
int main(){
    //given n & m 
    int n, m;
    cin>> n, m;

    //type of matrix 1 or 0 based indexing
    int adj[n+1][m+1]; //for 1 based & adj[n][m]; for zero based

    //run a loop for m lines
    for(int i =0; i<m; i++){
        int u, v;
        cin>> u, v; //for every line there is an edge

        adj[u][v] = 1; // mark intersection & reverse intersection as 1
        adj[v][u] = 1;
    }
    return 0;
} 

// for list(unidirected)
int main(){

    int n, m;
    cin>>n, m;

    vector<int>adj[n+1]

    for(int i=0; i<m; i++){
        int u,v;
        //for directed u ---> v
        cin>> u,v;

        adj[u].push_back(v); //on Uth index store v
       // adj[v].pus_back(u); then this doesn't exist
    }
}
//for weighted graph --> adj[u][v] = weight; (matrix)
//                   --> pair<int,int> (list)