//{ Driver Code Starts
#include <stdio.h>
#include <iostream>
#include<vector>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
//USING ARRAY LOGIC

class Solution{
  private:
  bool checkPalindrome(vector<int> arr){
      
      int n = arr.size();
      int s =0;
      int e = n-1;
      
      while(s<=e){
          
          if(arr[s] != arr[e]){
              
              return 0;
          }
          s++;
          e--;
      }
      return 1;
  }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        vector<int> arr;
        
        Node* temp  = head;
        while(temp != NULL){
            
            arr.push_back(temp->data);
            temp = temp -> next;
        }
        return checkPalindrome(arr);
    }
};



class Solution{
  private:
  Node* getmid(Node* head){
      
      Node* slow = head;
      Node* fast = head -> next;
      
      while(fast != NULL && fast->next != NULL){
          fast = fast -> next -> next;
          slow = slow -> next;
      }
      return slow;
  }
  Node* reverse(Node* head){
      Node* curr = head;
      Node* prev = NULL;
      Node* next = NULL;
      
      while(curr!=NULL){
          
          next = curr -> next;
          curr -> next = prev;
          prev = curr;
          curr =  next;
      }
      return prev;
  }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head->next == NULL)
            return true;
        
        //step1 -> find middle 
        Node* middle = getmid(head);
        
        //step2 -> reverse LL after middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 -> compare both halves
        Node* head1 = head;
        Node* head2 = middle -> next;
        
        while(head2 != NULL){
            
            if(head1 -> data != head2 -> data){
                return false;
            }
            else{
                head1 = head1 -> next;
                head2 = head2 -> next;
            }
        }
        //step4 -> repeat step2 
        temp = middle -> next;
        middle -> next = reverse(temp);
        return true;
    }
};