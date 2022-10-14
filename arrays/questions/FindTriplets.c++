#include<iostream>
using namespace std;

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	   vector<vector<int> >ans;
    for(int i=0; i<n; i++) //first loop (0 to n-1)
    {
        
         for(int j=i+1; j<n; j++) // 2nd loop from (i+1 to n-1)
         {
             
             for(int k=j+1; k<n; k++) //3rd loop from (J+1 to n-1)
             {
                 if(arr[i] + arr[j] + arr[k] == K) //condition to prove
            {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                     
                     //sorting needed
                    sort(temp.begin(),temp.end());

                  if(find(ans.begin(),ans.end(),temp)==ans.end())
                    ans.push_back(temp);               
            }
             }
         }
    }
    return ans;
}