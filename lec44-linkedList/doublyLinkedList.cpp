/* 
    correct code for deletion at tail in both singly and doubly linked list 
 */


#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this ->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
   
};
   // traversing
    void print(Node * head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    cout << endl;        
    }
    // Get Length
    int getLength(Node* head){
        int len = 0;
        Node* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }

    // Insert at head
    void insertAtHead(Node* &tail, Node* &head, int d){
        //empty list
        if(head == NULL){
            Node* temp = new Node(d);
            head = temp;
            tail = temp;
        }
        else{
        Node* temp = new Node(d);
        temp->next = head;
        head ->prev = temp;
        head = temp;
        }

    }
    // Insert at tail
    void insertAtTail(Node* &tail, Node* &head, int d){
        //empty list 
        if(tail == NULL){
            Node* temp = new Node(d);
            tail = temp;
            head = temp;
        }
        else{
        Node* temp = new Node(d);
        tail->next=temp;
        temp->prev= tail;
        tail = temp;
        }
        
    }
        void insertAtPosition(Node* &tail,Node* &head, int position, int d){
        // insert at Start
        if(position == 1)
        {
            insertAtHead(tail, head , d);
            return;
        }
        Node * temp = head;
        int cnt = 1;
        while(cnt < position -1 ){
            temp = temp -> next;
            cnt++;
            // cout << cnt << " " << endl;
        }
        // insert at last position
        if(temp -> next == NULL)
        {
            insertAtTail(tail, head , d);
            return ;
        }

        // creating a node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next->prev= nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev= temp;
        nodeToInsert->prev=temp;

    }
       // deleting operation on LL
        void deleteNode (int position , Node* &head){
            //deleting first or start node 
            if(position == 1){
                Node *  temp = head;
                temp->next->prev = NULL;
                head = temp->next;
                temp->next = NULL;
                delete temp;

            }
            else
            { 
                //deleting any middle or last node
                Node* curr = head;
                Node* prev = NULL;
                int cnt = 1;
                while(cnt < position){
                    prev = curr;
                    curr = curr -> next;
                    cnt++;
                    // cout << "values r: " << curr ->data << " " << endl;
                }
                curr->prev = NULL;
                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
            }
        }

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1 ;
    print(head);
   
    
    insertAtHead(tail, head, 11);
    print(head);
    
    

    insertAtTail(tail, head,  100);
    print(head);

    insertAtPosition(tail, head ,  4, 300);
    print(head);
    cout << getLength(head) << endl;
    deleteNode(1, head);
    print(head);
    deleteNode(3, head);
    print(head);
    
     
}


















/* 
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this ->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
   
};
   // traversing
    void print(Node * head){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    cout << endl;        
    }
    // Get Length
    int getLength(Node* head){
        int len = 0;
        Node* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }

    // Insert at head
    void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp->next = head;
        head ->prev = temp;
        head = temp;
    }
    // Insert at tail
    void insertAtTail(Node* &tail, int d){
        Node* temp = new Node(d);
        tail->next=temp;
        temp->prev= tail;
        tail = temp;
    }
        void insertAtPosition(Node* &tail,Node* &head, int position, int d){
        // insert at Start
        if(position == 1)
        {
            insertAtHead(head , d);
            return;
        }
        Node * temp = head;
        int cnt = 1;
        while(cnt < position -1 ){
            temp = temp -> next;
            cnt++;
            // cout << cnt << " " << endl;
        }
        // insert at last position
        if(temp -> next == NULL)
        {
            insertAtTail(tail, d);
            return ;
        }

        // creating a node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next->prev= nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev= temp;
        nodeToInsert->prev=temp;

    }

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
   
    
    insertAtHead(head, 11);
    print(head);
  

    insertAtTail(tail, 100);
    print(head);

    insertAtPosition(tail, head ,  5 , 300);
    print(head);

     
} */