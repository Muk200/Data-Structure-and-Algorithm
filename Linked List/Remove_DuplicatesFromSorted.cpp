/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    //empty list
    if(head == NULL)
        return NULL;
    //non-empty list
    Node* curr = head;
    
    while(curr != NULL){
        //curr and uska next dono null nhi hone chahiye
        if(curr->next != NULL && curr->data == curr->next->data){
            //point in right direction ke liye variables
            Node* next_next = curr ->next->next;
            Node* nodeToDelete = curr -> next;

            delete(nodeToDelete);
            
            curr -> next = next_next;
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
}