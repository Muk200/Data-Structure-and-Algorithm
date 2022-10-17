#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{ 
    vector<int> ans;
    
    for(int col = 0; col <mCols; col++){
        
        if( col&1 ){
            //odd index -> bottom to top
            for(int row = nRows-1; row>=0; row--){
                //cout<< arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // 0 or even index -> top to bottom
            for(int row = 0; row<nRows; row++){
                //cout<< arr[row][col]<<" ";
                ans.push_back(arr[row][col]);           
            }
        }
    }
    return ans;
}
//iterate througn every col
//check index of all the cols 
     // if odd then go bottom to top
     //0 or even index -> top to bottom