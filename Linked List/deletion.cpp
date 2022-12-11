#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    //constructor -> everytime a NEW NODE is made
    node(int data){
        this ->data = data;
        this ->next = NULL;
    }

    //destructor
    ~node(){
        int value = this -> data;
        //memory free
        if(this ->next !=  NULL){
            delete next;
            this ->next = NULL;
        }
        cout<<"Memory has been freed";
    }
};

void deleteNode(int position, node* head){

    //delete first or start node
    if(position == 1){
        node* temp = head;
        head = head -> next;
        //memory free (before freeing memory delete the ptr)
        temp -> next = NULL; 
        delete temp; 
    }

    else{
        //delete any middle or last node
        node* curr = head;
        node* prev = NULL;

        int cnt =1;
        while(cnt <= position){
            //increase after every iteration -> curr & prev
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void InsertAtHead(node* &head, int d){
    
    //new node for data
    node* temp = new node(d);
    temp ->next = head; // or node1
    head = temp;
}

void InsertAtTail(node* &tail, int d){
    //new node for data
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp; // or tail =  tail -> next
}

void InsertAtPosition(node* &tail, node* &head, int position, int d){
    

    node* temp = head; //traverse
    int cnt =1;

    while(cnt < position-1){
        temp = temp ->next; 
        cnt++;
    }

    //insert at start
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    //insert at last position 
    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }


    //create a node for d 
    node* NodetoInsert = new node(d);

    NodetoInsert -> next = temp -> next;

    temp ->next = NodetoInsert;
}


void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp ->data <<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

int main(){
   
    //a new node
    node* Node1 = new node(10);
    // cout<< Node1 ->data<<endl;
    // cout<< Node1 ->next<<endl;  
    
    //head pointed 
    node* head = Node1;
    //tail pointed
    node* tail = Node1;
    print(head);
   
    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 15);
    print(head);
    
    /*
    cout<<endl<<endl;

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);
    */
    
    //middle or position
    InsertAtPosition(tail, head, 3, 22);
    print(head);
    
    //in start
    InsertAtPosition(tail, head, 1, 76);
    print(head);

    //at end
    InsertAtPosition(tail, head, 6, 11);
    print(head);

    deleteNode(1, head);
    print(head); 



}