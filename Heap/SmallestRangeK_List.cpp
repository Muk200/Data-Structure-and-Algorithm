#include<limits.h>
#include<queue>
class node{
    public:
    int data;
    int row;
    int col;
    
    node(int DataOfKLists, int RowOfKLists, int ColOfKLists){
        data = DataOfKLists;
        row = RowOfKLists;
        col = ColOfKLists;
    }
};

class compare{
    public:
    bool operator()(node* a, node* b){
        return a->data > b->data;
    }
};

int kSorted(vector<vector<int>> &a, int k, int n) {
    
    int mini = INT_MAX;
    int maxi = INT_MIN;
    priority_queue<node*, vector<node*>, compare > minHeap;
    
    //step1: create a min heap for starting element of each list & tracking min/max value 
    for(int i =0; i<k; i++)
    {
     //har kisi list ke starting elemt ko heap mein dalo && update min/max element
        int element = a[i][0];
        mini = min(mini, element);
        maxi = max(maxi, element);
        minHeap.push(new node(element, i ,0));
       
        }
        int start = mini; int end = maxi;
        
        //process range
        while(!minHeap.empty())
        {
            //fetch mini
            node* temp = minHeap.top();
            minHeap.pop();
            mini = temp->data;
            
            //range or ans update
            if(maxi -mini < end - start){
                start = mini;
                end = maxi;
            }
            //next elemnt exists or not
            if(temp->col + 1 < n)
            {
                maxi = max(maxi,  a[temp->row][temp->col + 1]);
                minHeap.push(new node(a[temp->row][temp->col + 1], temp->row, temp->col + 1));
            }
            else
            {//doesn't exist
                break;
            }
    }
    //returning the difference of range values
    return(end-start +1);
}
