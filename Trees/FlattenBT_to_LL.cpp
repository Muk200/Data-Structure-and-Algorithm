//BY USING MORRIS TRAVERSAL

class Solution

{  //using preorder (NLR)
    public:
    void flatten(Node *root)
    {
        Node* curr = root;
        while(curr!=NULL){
            
            if(curr->left){
                
                Node* pred = curr->left;
                
                while(pred->right){
                    pred = pred->right;
                }
                
                pred->right = curr->right; //link of left and right part
                curr->right = curr->left; //N-L link
                curr->left = NULL; //left part NULL
            }
            
            curr = curr->right; //incrementing curr node
        }
    }
};