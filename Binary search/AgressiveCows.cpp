bool isPossible(vector<int> &stalls, int k, int mid) {
    int cowCount  = 1;
    int lastPos= stalls[0]; // the position we place
    
    for(int i = 0; i<stalls.size(); i++){
        
        if(stalls[i] - lastPos >= mid){
            // to place
            cowCount++; // by bringing new cow
            if(cowCount == k){
                return true;
            }
            lastPos = stalls[i]; //updating the last position 
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end()); //to apply binary search we sort sys first
    int s = 0;
    int maxi = -1; //for the end we had to take max value
    for(int i =0; i<stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s <= e)
    {
        if(isPossible(stalls, k, mid)){ //here we are using a fnc in if statement
            ans = mid;
            s = mid + 1; //go in right part bc we  need to find the largest sol
        }
        else{
            e = mid -1;
        }
         mid = s + (e-s)/2;
    }
    return ans;
}