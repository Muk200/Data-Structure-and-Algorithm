
/*
// THIS WAS TOO MUCH COMPLEX SO START FROM FRESH 
// aka rough logic not applicable 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{   
    vector<int> ans;
    
	for(int i=0; i<n; i++){
        int element =arr1[i];
        
        for(int j =0; j<m; j++){
            //first optimisation - if element is samller than arr2 then only proceed
            if(element < aar2[j]){
                break;
            }

            if(element == arr2[j]){
            ans.push_back(element);
            arr2[j] = -112231;
            break;
        }
        }
    }
    return ans;
}
*/

// NEW SOLUTION 


vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{   
   int i =0; 
   int j=0;
    vector<int>ans;
    while(i<n && j<m) //for the loop to work till all index values
    {    
        if(arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        
        else
        {
            j++;
        }
    }
    return ans;
}