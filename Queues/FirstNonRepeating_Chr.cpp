
#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    
		    unordered_map<char,int> count; // store count for nos
		    queue<int> q; //store elements
		    string ans = "";
		    
		    for(int i=0; i<A.length(); i++){
		        
		        char ch = A[i];
		        
		        //step1. increase count 
		        count[ch]++;
		        //2. store elements
		        q.push(ch);
		        
		        while(!q.empty()){
		            
		            if(count[q.front()] > 1){ //repeating chr
		                q.pop();
		            }
		            else{
		                //non - repeating
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty())
		            ans.push_back('#');
		    }
		    return ans;
		}

};
