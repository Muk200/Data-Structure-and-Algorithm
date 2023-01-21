//FOR A SPECIFIC CONDITION OF RETURNING ELEMENT WHICH HAS THE LOWEST INDEXING

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> cnt;
    
    int maxFreq = 0;
    int maxAns = 0;
    
    for(int i=0; i<arr.size(); i++){
        cnt[arr[i]]++;
        maxFreq = max(maxFreq, cnt[arr[i]]);
    }
    
    for(int i=0; i<arr.size(); i++){
        if(maxFreq == cnt[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> cnt;
    
    int maxi = INT_MIN;
    int ans = 0;
    
    for(int i=0; i<arr.size(); i++){
        cnt[arr[i]]++;
    }
    
    for(auto i:cnt){
        if(i.second > maxi){
            maxi = i.second;
            ans = i.first;
            break;
        }
    }
    return ans;
}