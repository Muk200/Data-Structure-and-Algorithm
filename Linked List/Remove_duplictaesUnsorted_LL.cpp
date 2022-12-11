#include <bits/stdc++.h> 
#include<iostream>
#include<map>
using namespace std;
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
//used map here

Node *removeDuplicates(Node *head)
{
   // Write your code here
  if(head == NULL){
       return NULL;
   }
   if(head->next == NULL){
       return head;
   }
   unordered_map<int,bool>visited;
   Node* curr = head;
   Node* pre = NULL;
   while(curr != NULL){
      if(visited[curr->data] == true){
          
          Node* del = curr;
          pre->next = curr->next;
          curr = curr->next;
          delete del;
      }
      else{
           visited[curr->data] = true;
           pre = curr;
           curr = curr->next;
       }
   }
  return head;
}