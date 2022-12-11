#include<iostream>
#include<map>
using namespace std;

// THIS Q HAS 3 INDIVISUAL PARTS
    //1. detect the loop by 2 methods -- by map or floyd algo of cycle
    //2. find the beginning node of loop in LL
    //3. remove the cycle

class node{

    public:
    int data;
    node* next;

    //constructor -> everytime a NEW NODE is made
    node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};
void InsertAtHead(node* head, int d){
    
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
void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp ->data <<" ";
        temp = temp ->next;
    }
    cout<<endl;
}


bool detectLoop(node* head){

    if(head == NULL)
        return false; 
    map<node*, bool> visited;

    node* temp = head; //used to traverse entire LL
    
    while(temp != NULL){
        
        //cycle is present -- isse hum loop mein nhi faise
        if(visited[temp] == true){
            //to tell on which element it is present 
            cout<<"Present on element: "<<temp -> data<<endl;
            return 1;
        }
        //else
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

node* floyDetectLoop(node* head){
    if(head == NULL)
        return NULL;
    
    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast != NULL){
       
       //increasing fast twice and checking the condition with 2nd time 
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }        
        slow = slow -> next;

        if(slow == fast){
            return slow;
        }
    }

    return NULL;
}

node* getStartingNode(node* head){
    
    if(head == NULL)
        return NULL;
    //1. use normal detection, after pt of intersection start slow from head check if the intersection and slow are at same place 
    node* intersection = floyDetectLoop(head);
    node* slow = head;
    
    while(slow != intersection){
        slow =  slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}
 
void removeLoop(node* head){

    if(head == NULL)
        return NULL;

    node* startOfLoop = getStartingNode(head);
    node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;   
} 
int main()
{
    //a new node
    node* Node1 = new node(10);
    //head pointed 
    node* head = Node1;
    
    InsertAtHead(head, 10);
    print(head);

    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 15);
    print(head);

    InsertAtHead(head, 22);
    print(head);

    cout<<endl<<endl;

    if(floyDetectLoop(head) != NULL){
        cout<<"cycle is present "<<endl;
    }
    else{
        cout<<"no cycle "<<endl;
    }
    if(detectLoop(head)){
        cout<<"cycle is present "<<endl;
    }
    else{
        cout<<"no cycle "<<endl;
    }
}
