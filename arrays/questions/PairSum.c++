#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   vector<vector<int> >ans;
    
    for(int i=0; i<arr.size(); i++)  //ist loop from(o to n-1)
    {
        
        for(int j=i+1; j<arr.size(); j++) //2nd loop from (i+1 to n-1)
        {
            if(arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);                
            }
        }
    }
    sort(ans.begin(), ans.end()); //sorting for a case
    return ans;
}