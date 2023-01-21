class Solution
{
    public:
    //Function to check if two trees are identical. compare root if true then -> left&right(by recursion) 
    //go together in  both trees
    bool isIdentical(Node *r1, Node *r2)
    {
        //base case
        if(r1 == NULL && r2 == NULL){
            return true;
        }
        if(r1 != NULL && r2 == NULL){
            return false;
        }
        if(r2 != NULL && r1 == NULL){
            return false;
        }
        
        bool left = isIdentical(r1 -> left, r2 -> left);
        bool right = isIdentical(r1 -> right, r2 -> right);
        
        bool value = r1 -> data == r2 -> data;
        
        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }
};