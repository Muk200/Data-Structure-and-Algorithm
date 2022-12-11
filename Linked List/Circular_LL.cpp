#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else{
        //non-empty list 
        //assuming that the element is present in list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }

        //element found
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

//traverse
void print(Node* tail){

    Node* temp = tail; 

    do{
        cout<<tail -> data <<" ";
        tail =  tail -> next;
    }
    while(tail != temp);
    cout<<endl;
 //using do-while loop here just in case if we have only a single element in list this is where while loop fails at
}

//deletion
void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        //non-empty -- assuming that the element is present in list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        // 1 node only
        if(curr == prev){
            tail = NULL;
        }
        // node >= 2 here since the tail still pts to curr after deletion - gives error so... 
       else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

int main(){

    Node* tail = NULL;
    
    cout<<endl;
    //empty list vala case
    insertNode(tail, 5, 3);
    print(tail);

    /*
    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    //middle one
    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    cout<<endl;
    cout<<"deletion in process !!!"<<endl<<endl;

    deleteNode(tail, 3);
    print(tail);

    deleteNode(tail, 10);
    print(tail);
    */
    deleteNode(tail, 3 );
    print(tail);

    cout<<endl;

}