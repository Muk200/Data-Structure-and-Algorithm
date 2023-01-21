    //algo
    //1. create parent and node mapping
    //2. find target node
    //3. burn the tree in min time
class Solution {
  public:
  
  Node* createParentMapping(Node* root, int target, map<Node*, Node*> &nodeToParent){
      //creates mapping & return target node
      
      Node* res = NULL; //to return target node
      
      //for mapping
      queue<Node*> q;
      q.push(root);
      nodeToParent[root] = NULL;
      
      while(!q.empty()){
          
          Node* front = q.front();
          q.pop();
          
          if(front->data == target){
              res = front;
          }
          
          //left child
          if(front->left){
              nodeToParent[front->left]= front;
              q.push(front->left);
          }
          
          //right child
          if(front->right){
              nodeToParent[front->right]= front;
              q.push(front->right);
          }
      }
      
      return res;
  }
  int burnTree(Node* root, map<Node*, Node*> &nodeToParent){
      
      map<Node*, bool> visited;
      queue<Node*> q;
      
      q.push(root);
      visited[root] = true;
      
      int ans =0;
      
      while(!q.empty()){
          
          bool flag = 0; //to check if there was any addition in queue of not
          int size = q.size(); //since we will be burning neighbouring nodes for all elements present
          for(int i=0; i<size; i++){
              //process neighouring node
              
              Node* front = q.front();
              q.pop();
              
              //three ways -left/right/parent
              
              if(front->left && !visited[front->left]){
                  
                  flag = true;
                  q.push(front->left);
                  visited[front->left] = true;
              }
              
              if(front->right && !visited[front->right]){
                  
                  flag = true;
                  q.push(front->right);
                  visited[front->right] = true;
              }
              
              if(nodeToParent[front] && !visited[nodeToParent[front]]){
                  
                  flag = true;
                  q.push(nodeToParent[front]);
                  visited[nodeToParent[front]] = true;
              }
          }
          
          if(flag == true){
              ans++;
          }
      }
      return ans;
      
  }
    int minTime(Node* root, int target) 
    {
        
        map<Node*, Node*> nodeToParent;
        
        Node* targetNode = createParentMapping(root, target, nodeToParent);
        
        int ans = burnTree(targetNode, nodeToParent);
         
        return ans;
    }
};