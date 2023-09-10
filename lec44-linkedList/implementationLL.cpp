#include <iostream>
using namespace std;
class Node /* LinkedListNode */{
    public:
    int data ;
    Node * next;

    //constructor
    Node (int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this -> data ;
        //memory free
        if(this-> next != NULL)
       { delete next;
        this -> next = NULL;
        } cout << "Free for data: " <<  value << endl;
    
    }
   
};



 // Insertion at head
    void insertATHead(Node * &head , int d){
        // new node create
        Node * temp = new Node(d);
        temp -> next = head;
        head =  temp;
    }
    

    // insertion at tail
    void insertAtTail(Node * & tail, int d){
        Node * temp = new Node(d);
        tail -> next = temp;
        tail = tail -> next;
    }

    // traversing a LL
    void print(Node* &head){
        Node * temp = head;
        while(temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

    void insertAtPosition(Node* &tail,Node* &head, int position, int d){
        // insert at Start
        if(position == 1)
        {
            insertATHead(head , d);
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
        nodeToInsert -> next = temp -> next;
        temp -> next = nodeToInsert;
    }
        // deleting operation on LL
        void deleteNode (int position , Node* &head){
            //deleting first or start node 
            if(position == 1){
                Node *  temp = head;
                head = head -> next;
                // memory free 
                temp -> next = NULL;
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
                prev -> next = curr  -> next;
                curr -> next = NULL;
                delete curr;
            }
        }




int main(){
    // created a new node
    Node * node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
     
    // head pointed to node1
    Node* head = node1;
    print(head);

/*     // insert at head
    insertATHead(head, 12);
    print(head);

    insertATHead(head , 15);
    print(head);
    insertATHead(head , 16);
    print(head);
    insertATHead(head , 17);
    print(head); 
*/
        // insert at tail
    Node * tail = node1;
    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 30);
   
    //inserting node at nth position
    insertAtPosition(tail, head, 1, 23);
    print(head);
    insertAtPosition(tail,head, 5, 113);
    print(head);
    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;

    
   






}