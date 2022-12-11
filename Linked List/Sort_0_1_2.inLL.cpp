/********************************
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

********************************/

Node* sortList(Node *head)
{
    int ZeroCount = 0;
    int OneCount = 0;
    int TwoCount = 0;
    
    //for counting
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0)
            ZeroCount++;
        else if(temp->data == 1)
            OneCount++;
        else if(temp ->data == 2)
            TwoCount++;
        
        temp = temp -> next;
    }
    //for replacing
    temp = head;
    while(temp != NULL)
    {
        if(ZeroCount != 0){
            temp -> data =0;
            ZeroCount--;
        }
        else if(OneCount != 0){
            temp ->data = 1;
            OneCount--;
         }
        else if(TwoCount != 0){
            temp->data = 2;
            TwoCount--;
        }
        temp = temp -> next;
    }
    return head;
}



void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head)
{
    //dummy nodes - are imp bc without them we have to use many if conditions--for insertion use dummy insert at tail

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead; 
    
    Node* curr = head;
    
    //create seperate list - 0s, 1s, 2s
    while(curr != NULL){
         
        int value = curr->data; //used for comparison
        if(value == 0){
            insertAtTail(zeroTail,curr);
        }
        else if(value == 1){
            insertAtTail(oneTail, curr);
        }
        else if(value == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr -> next;
    }

    //merge all sublist
    if(oneHead ->next != NULL){
        //1's list is not empty
        zeroTail->next = oneHead->next;
    }
    else{
        //1's list is empty
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail ->next = NULL;
    
    //remove all dummy list and setup head
    head = zeroHead ->next;
    
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;

}
//STEPS 
    //1. create dummy nodes(head and tail) for 0,1,2's
    //2. create seperate LL for 0,1,2's (use insertAtTail)
    //3. merge all sublist (with one case)
    //4. remove dummy nodes and setup head