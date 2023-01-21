//ALGO
//1. find key and save all possible predecessor & Successor
//2. for predecessor -> find the just smaller value than key for which 
             //pred -> left -> max element (since we know the values in left are min)
//3. Successor -> find the just larger value than key
             //succ -> right -> min element(since we know the values in right are max)
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    //find key
    BinaryTreeNode<int>* temp = root;
    int pred =-1;
    int succ =-1;
    
    while(temp->data != key){
        
        if(temp->data > key){
            succ = temp->data; //possible ones
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }
    //pred and succ
    
    //pred 
    BinaryTreeNode<int>* leftTree = temp->left;
    while(leftTree != NULL){
        pred = leftTree->data;
        leftTree = leftTree->right; //in left tree all max values are from right
    }
    //succ
    BinaryTreeNode<int>* rightTree = temp->right;
    while(rightTree != NULL){
        succ = rightTree->data;
        rightTree = rightTree ->left; //in right tree all min values are from left
    }
    
    pair<int,int> ans = make_pair(pred,succ);
    return ans;
}
