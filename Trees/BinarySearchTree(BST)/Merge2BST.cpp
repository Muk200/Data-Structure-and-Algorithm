#include <bits/stdc++.h> 
void inorder(TreeNode<int> *root, vector<int> &in){
    //base case
    if(root == NULL)
        return;
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
vector<int> mergeArrays(vector<int> &a, vector<int> &b){
    
    vector<int> ans(a.size() + b.size());
    int i =0, j=0;
    int k =0;
    
    while(i < a.size() && j < b.size())
    {
        if(a[i] < b[j])
        {
            ans[k] = a[i];
            i++;
            k++;
        }
        else
        {
            ans[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<a.size())
    {
        ans[k] = a[i];
        i++;
        k++;
    }
    while(j<b.size())
    {
        ans[k] = a[j];
        j++;
        k++;
    }
    return ans;
}

//inorder to tree formation
TreeNode<int>* inorderToBST(int s, int e, vector<int> &in){
    //base case
    if(s>e)
        return NULL;
    
    //take mid and make node for that
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    
    //in left -> all left of mid && in right -> all right of mid
    root->left = inorderToBST(s, mid-1, in);
    root->right = inorderToBST(mid+1, e, in);
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    
    // 1. store inorder
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);
    
    //2. merge two sorted array
    vector<int> mergeArray = mergeArrays(bst1, bst2);
    
    //3. inoder to bst
    int s= 0, e = mergeArray.size()-1;
    return inorderToBST(s, e, mergeArray);
}




//APPROACH TWO BY USING LL

//convert bst in Sorted DLL - inplace
void convertIntoSortedDLL(TreeNode<int> *root, TreeNode<int> *&head){
    //base case
    if(root->right)
        return;
    convertIntoSortedDLL(root->right, head);
    root->right = head;
    if(head != NULL)
        head->left = root;
    head = root;
    
    convertIntoSortedDLL(root->left, head);
}

//merge two sorted LL
TreeNode<int> mergedLinkedList(TreeNode<int> *head1, TreeNode<int> *head2){
    
    TreeNode<int> *head =NULL;
    TreeNode<int> * tail = NULL;
    
    while(head1 != NULL && head2 != NULL){
        
        if(head1->data < head2->data)
        {
            
            if(head == NULL)
            {
               head = head1;
                tail = head1; // dono head tail same pe pnt bc data smaller h
                head1 = head -> right;
            }
            else
            {//insert at end
                tail -> right = head1;
                head1 -> left = tail;
                tail = head1;
                head1 = head -> right;
            }
        }
        else{
            if(head == NULL)
            {
                head = head2;
                tail = head2;
                head2 = head -> right;
            }
            else
            {
                tail -> right = head2;
                head1 -> left = tail;
                tail = head2;
                head2 = head -> right;
            }
        }
    }
    while(head1 != NULL){
         tail -> right = head1;
         head1 -> left = tail;
         tail = head1;
         head1 = head -> right;
    }
    while(head2 != NULL){
        tail -> right = head1;
        head1 -> left = tail;
        tail = head2;
        head2 = head -> right;
    }
    return head;
}

int countNodes(TreeNode<int> *head){
    int cnt=0;
    TreeNode<int>* temp = head;
    while(temp){
        cnt++;
        temp = temp -> right;
    }
}

//sorted LL to BST
TreeNode<int> *sortedLLtoBST(TreeNode<int> *&head, int n){
    //base case
    if(n <= 0 || head == NULL)
        return NULL;
    
    TreeNode<int>* left = sortedLLtoBST(head, n/2);
    
    TreeNode<int>* root = head;
    root ->left = left;
    
    head= head ->next;
    root -> right = sortedLLtoBST(head, n-n/2-1);
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    
    //step1. BST to soted DLL
    //DLL no 1
    TreeNode<int> *head1 = NULL;
    convertIntoSortedDLL(root1, head1);
    head1 ->left = NULL;
    
    //DLL no 2
    TreeNode<int> *head2 = NULL;
    convertIntoSortedDLL(root2, head2);
    head2 ->left = NULL;
    
    //step2. merge sorted LL
    TreeNode<int> *head = mergedLinkedList(head1, head2);
    
    //step3. sorted LL to BST
    return sortedLLtoBST(head, countNodes(head));
}