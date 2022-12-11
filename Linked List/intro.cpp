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
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}
        cout << " memory is free for node with data " << value << endl;
    }
};

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
    
    //insert at start
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    node* temp = head; //traverse
    int cnt =1;

    while(cnt < position-1){
        temp = temp ->next; 
        cnt++;
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

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
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


}

//DRAWBACKS OF " InsertAtPosition "
    // we cannot insert at position 1 bc , we have started our fnc FROM position ist and to insert we need previous node  similarly is a case for end node